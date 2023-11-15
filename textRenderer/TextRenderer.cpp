#include "TextRenderer.h"

namespace pico_ssd1306 {

    void drawText(pico_ssd1306::SSD1306 *ssd1306, const char *text, uint8_t anchor_x,
                  uint8_t anchor_y, const DrawTextOptions& opts) {
        uint16_t n = 0;
        while (text[n] != '\0') {
            uint8_t x = 0xFF, y = 0xFF;
            switch (opts.rotation) {
                case Rotation::deg0:
                    x = anchor_x + (n * opts.font_width());
                    y = anchor_y;
                    break;
                case Rotation::deg90:
                    x = anchor_x;
                    y = anchor_y + (n * opts.font_width());
                    break;
            }
            if (x > ssd1306->getWidth() || y > ssd1306->getHeight()) {
                break;
            }
            drawChar(ssd1306, text[n], x, y, opts);

            n++;
        }
    }

    static void setScaledPixel(pico_ssd1306::SSD1306 *ssd1306, uint8_t anchor_x,
                               uint8_t anchor_y, const DrawTextOptions& opts) {
        for (int x = anchor_x; x < anchor_x + opts.scale_x; ++x) {
            for (int y = anchor_y; y < anchor_y + opts.scale_y; ++y) {
                ssd1306->setPixel(x, y, opts.mode);
            }
        }
    }

    void drawChar(pico_ssd1306::SSD1306 *ssd1306, char c, uint8_t anchor_x,
                  uint8_t anchor_y, const DrawTextOptions& opts) {
        if (c < 32) return;

        uint16_t font_bit_size = opts.font[0] * opts.font[1];
        uint16_t seek = (c - 32) * font_bit_size / 8 + 2;

        uint8_t b_seek = 0;

        for (uint8_t x = 0; x < opts.font_width(); x += opts.scale_x) {
            for (uint8_t y = 0; y < opts.font_height(); y += opts.scale_y) {
                if (opts.font[seek] >> b_seek & 0b00000001) {
                    switch (opts.rotation) {
                        case Rotation::deg0:
                            setScaledPixel(ssd1306, x + anchor_x, y + anchor_y,
                                           opts);
                            break;
                        case Rotation::deg90:
                            setScaledPixel(ssd1306,
                                           -y + anchor_x + opts.font_height(),
                                           x + anchor_y, opts);
                            break;
                    }
                }
                b_seek++;
                if (b_seek == 8) {
                    b_seek = 0;
                    seek++;
                }
            }
        }
    }
}
