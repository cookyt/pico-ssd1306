#ifndef SSD1306_TEXTRENDERER_H
#define SSD1306_TEXTRENDERER_H

#include "../ssd1306.h"

#include "5x8_font.h"
#include "8x8_font.h"
#include "12x16_font.h"
#include "16x32_font.h"

namespace pico_ssd1306{

    /// \enum pico_ssd1306::Rotation
    enum class Rotation{
        /// deg0 - means no rotation
        deg0,
        /// deg 90 - means 90 deg rotation
        deg90,
    };

    // TODO: field descriptions
    struct DrawTextOptions {
        const unsigned char *font;
        WriteMode mode = WriteMode::ADD;
        Rotation rotation = Rotation::deg0;
        uint8_t scale_x = 1;
        uint8_t scale_y = 1;

        uint8_t font_width() const { return font[0] * scale_x; }
        uint8_t font_height() const { return font[1] * scale_y; }
    };

    // TODO: param descriptions
    void drawChar(pico_ssd1306::SSD1306 *ssd1306,
                  char c, uint8_t anchor_x, uint8_t anchor_y,
                  const DrawTextOptions& opts);

    /// \brief Draws a single glyph on the screen
    /// \param ssd1306 - pointer to a SSD1306 object aka initialised display
    /// \param font - pointer to a font data array
    /// \param c - char to be drawn
    /// \param anchor_x, anchor_y - coordinates setting where to put the glyph
    /// \param mode - mode describes setting behavior. See WriteMode doc for more information
    /// \param rotation - either rotates the char by 90 deg or leaves it unrotated
    inline void drawChar(pico_ssd1306::SSD1306 *ssd1306, const unsigned char *font,
                  char c, uint8_t anchor_x, uint8_t anchor_y,
                  WriteMode mode = WriteMode::ADD,
                  Rotation rotation = Rotation::deg0) {
      drawChar(ssd1306, c, anchor_x, anchor_y,
               {.font = font, .mode = mode, .rotation = rotation});
    }

    // TODO: param descriptions
    void drawText(pico_ssd1306::SSD1306 *ssd1306, const char *text,
                  uint8_t anchor_x, uint8_t anchor_y,
                  const DrawTextOptions &opts);

    /// \brief Draws text on screen
    /// \param ssd1306 - pointer to a SSD1306 object aka initialised display
    /// \param font - pointer to a font data array
    /// \param text - text to be drawn
    /// \param anchor_x, anchor_y - coordinates setting where to put the text
    /// \param mode - mode describes setting behavior. See WriteMode doc for more information
    /// \param rotation - either rotates the text by 90 deg or leaves it unrotated
    inline void drawText(pico_ssd1306::SSD1306 *ssd1306,
                         const unsigned char *font, const char *text,
                         uint8_t anchor_x, uint8_t anchor_y,
                         WriteMode mode = WriteMode::ADD,
                         Rotation rotation = Rotation::deg0) {
      drawText(ssd1306, text, anchor_x, anchor_y,
               {.font = font, .mode = mode, .rotation = rotation});
    }
}

#endif //SSD1306_TEXTRENDERER_H
