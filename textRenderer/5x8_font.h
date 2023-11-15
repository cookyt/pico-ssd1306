#ifndef SSD1306_5X8_FONT_H
#define SSD1306_5X8_FONT_H

#ifndef SSD1306_ASCII_FULL

const unsigned char font_5x8[] = {
        5, 8, // font width, height

        // 0x20 SPACE
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,

        // 0x21 !
        0b00000000,
        0b00000000,
        0b01011100,
        0b00000000,
        0b00000000,

        // 0x22 "
        0b00000000,
        0b00001100,
        0b00000000,
        0b00001100,
        0b00000000,

        // 0x23 #
        0b00101000,
        0b01111100,
        0b00101000,
        0b01111100,
        0b00101000,

        // 0x24 $
        0b00000000,
        0b01010000,
        0b11101100,
        0b00101000,
        0b00000000,

        // 0x25 %
        0b01000100,
        0b00101010,
        0b00110100,
        0b01011000,
        0b00100100,

        // 0x26 &
        0b00100000,
        0b01011000,
        0b01010100,
        0b00100100,
        0b01010000,

        // 0x27 '
        0b00000000,
        0b00000000,
        0b00000110,
        0b00000000,
        0b00000000,

        // 0x28 (
        0b00000000,
        0b00111000,
        0b01000100,
        0b00000000,
        0b00000000,

        // 0x29 )
        0b00000000,
        0b01000100,
        0b00111000,
        0b00000000,
        0b00000000,

        // 0x2a *
        0b00000000,
        0b01010100,
        0b00111000,
        0b01010100,
        0b00000000,

        // 0x2b +
        0b00000000,
        0b00010000,
        0b00111000,
        0b00010000,
        0b00000000,

        // 0x2c ,
        0b00000000,
        0b10000000,
        0b01000000,
        0b00000000,
        0b00000000,

        // 0x2d -
        0b00001000,
        0b00001000,
        0b00001000,
        0b00001000,
        0b00000000,

        // 0x2e .
        0b00000000,
        0b00000000,
        0b01000000,
        0b00000000,
        0b00000000,

        // 0x2f /
        0b00000000,
        0b01100000,
        0b00011000,
        0b00000100,
        0b00000000,

        // 0x30 0
        0b00111000,
        0b01000100,
        0b01000100,
        0b00111000,
        0b00000000,

        // 0x31 1
        0b00000000,
        0b00001000,
        0b01111100,
        0b00000000,
        0b00000000,

        // 0x32 2
        0b01001000,
        0b01100100,
        0b01010100,
        0b01001000,
        0b00000000,

        // 0x33 3
        0b01000100,
        0b01010100,
        0b01010100,
        0b00101000,
        0b00000000,

        // 0x34 4
        0b00100000,
        0b00110000,
        0b00101000,
        0b01111100,
        0b00000000,

        // 0x35 5
        0b01011100,
        0b01010100,
        0b01010100,
        0b00100100,
        0b00000000,

        // 0x36 6
        0b00111000,
        0b01010100,
        0b01010100,
        0b00100000,
        0b00000000,

        // 0x37 7
        0b00000100,
        0b01100100,
        0b00010100,
        0b00001100,
        0b00000000,

        // 0x38 8
        0b00101000,
        0b01010100,
        0b01010100,
        0b00101000,
        0b00000000,

        // 0x39 9
        0b00001000,
        0b01010100,
        0b01010100,
        0b00111000,
        0b00000000,

        // 0x3a :
        0b00000000,
        0b00000000,
        0b01010000,
        0b00000000,
        0b00000000,

        // 0x3b ;
        0b00000000,
        0b10000000,
        0b01010000,
        0b00000000,
        0b00000000,

        // 0x3c <
        0b00000000,
        0b00010000,
        0b00101000,
        0b01000100,
        0b00000000,

        // 0x3d =
        0b00000000,
        0b00101000,
        0b00101000,
        0b00101000,
        0b00000000,

        // 0x3e >
        0b00000000,
        0b01000100,
        0b00101000,
        0b00010000,
        0b00000000,

        // 0x3f ?
        0b00000000,
        0b01010100,
        0b00010100,
        0b00001000,
        0b00000000,

        // 0x40 @
        0b00111000,
        0b01000100,
        0b01010100,
        0b01010100,
        0b00001000,

        // 0x41 A
        0b01111000,
        0b00010100,
        0b00010100,
        0b01111000,
        0b00000000,

        // 0x42 B
        0b01111100,
        0b01010100,
        0b01010100,
        0b00101000,
        0b00000000,

        // 0x43 C
        0b00111000,
        0b01000100,
        0b01000100,
        0b01000100,
        0b00000000,

        // 0x44 D
        0b01111100,
        0b01000100,
        0b01000100,
        0b00111000,
        0b00000000,

        // 0x45 E
        0b01111100,
        0b01010100,
        0b01010100,
        0b01000100,
        0b00000000,

        // 0x46 F
        0b01111100,
        0b00010100,
        0b00010100,
        0b00000100,
        0b00000000,

        // 0x47 G
        0b00111000,
        0b01000100,
        0b01000100,
        0b01101000,
        0b00000000,

        // 0x48 H
        0b01111100,
        0b00010000,
        0b00010000,
        0b01111100,
        0b00000000,

        // 0x49 I
        0b00000000,
        0b01000100,
        0b01111100,
        0b01000100,
        0b00000000,

        // 0x4a J
        0b00110000,
        0b01000000,
        0b01000000,
        0b00111100,
        0b00000000,

        // 0x4b K
        0b01111100,
        0b00010000,
        0b00101000,
        0b01000100,
        0b00000000,

        // 0x4c L
        0b01111100,
        0b01000000,
        0b01000000,
        0b01000000,
        0b00000000,

        // 0x4d M
        0b01111100,
        0b00010000,
        0b00010000,
        0b01111100,
        0b00000000,

        // 0x4e N
        0b01111100,
        0b00001000,
        0b00010000,
        0b01111100,
        0b00000000,

        // 0x4f O
        0b00111000,
        0b01000100,
        0b01000100,
        0b00111000,
        0b00000000,

        // 0x50 P
        0b01111100,
        0b00010100,
        0b00010100,
        0b00001000,
        0b00000000,

        // 0x51 Q
        0b00111000,
        0b01000100,
        0b01000100,
        0b10111000,
        0b00000000,

        // 0x52 R
        0b01111100,
        0b00010100,
        0b00010100,
        0b01101000,
        0b00000000,

        // 0x53 S
        0b01001000,
        0b01010100,
        0b01010100,
        0b00100100,
        0b00000000,

        // 0x54 T
        0b00000100,
        0b00000100,
        0b01111100,
        0b00000100,
        0b00000100,

        // 0x55 U
        0b00111100,
        0b01000000,
        0b01000000,
        0b00111100,
        0b00000000,

        // 0x56 V
        0b00011100,
        0b01100000,
        0b01100000,
        0b00011100,
        0b00000000,

        // 0x57 W
        0b00011100,
        0b01100000,
        0b00011000,
        0b01100000,
        0b00011100,

        // 0x58 X
        0b01001100,
        0b00110000,
        0b00010000,
        0b01101100,
        0b00000000,

        // 0x59 Y
        0b00000000,
        0b00011100,
        0b01100000,
        0b00011100,
        0b00000000,

        // 0x5a Z
        0b01100100,
        0b01010100,
        0b01001100,
        0b01000100,
        0b00000000,

        // 0x5b [
        0b00000000,
        0b01111100,
        0b01000100,
        0b00000000,
        0b00000000,

        // 0x5c BACKSLASH
        0b00000000,
        0b00001100,
        0b00110000,
        0b01000000,
        0b00000000,

        // 0x5d ]
        0b00000000,
        0b01000100,
        0b01111100,
        0b00000000,
        0b00000000,

        // 0x5e ^
        0b00000000,
        0b00001000,
        0b00000100,
        0b00001000,
        0b00000000,

        // 0x5f _
        0b10000000,
        0b10000000,
        0b10000000,
        0b10000000,
        0b10000000,

        // 0x60 `
        0b00000000,
        0b00000100,
        0b00001000,
        0b00000000,
        0b00000000,

        // 0x61 a
        0b00000000,
        0b01101000,
        0b00101000,
        0b01110000,
        0b00000000,

        // 0x62 b
        0b01111110,
        0b01001000,
        0b01001000,
        0b00110000,
        0b00000000,

        // 0x63 c
        0b00000000,
        0b00110000,
        0b01001000,
        0b01001000,
        0b00000000,

        // 0x64 d
        0b00110000,
        0b01001000,
        0b01001000,
        0b01111100,
        0b00000000,

        // 0x65 e
        0b00110000,
        0b01011000,
        0b01011000,
        0b01010000,
        0b00000000,

        // 0x66 f
        0b00010000,
        0b01111000,
        0b00010100,
        0b00000100,
        0b00000000,

        // 0x67 g
        0b00010000,
        0b10101000,
        0b10101000,
        0b01111000,
        0b00000000,

        // 0x68 h
        0b01111100,
        0b00001000,
        0b00001000,
        0b01110000,
        0b00000000,

        // 0x69 i
        0b00000000,
        0b01001000,
        0b01111010,
        0b01000000,
        0b00000000,

        // 0x6a j
        0b00000000,
        0b10000000,
        0b10000000,
        0b01111010,
        0b00000000,

        // 0x6b k
        0b01111100,
        0b00010000,
        0b00101000,
        0b01000000,
        0b00000000,

        // 0x6c l
        0b00000000,
        0b01000010,
        0b01111110,
        0b01000000,
        0b00000000,

        // 0x6d m
        0b01111000,
        0b00010000,
        0b00010000,
        0b01111000,
        0b00000000,

        // 0x6e n
        0b01111000,
        0b00001000,
        0b00001000,
        0b01110000,
        0b00000000,

        // 0x6f o
        0b00110000,
        0b01001000,
        0b01001000,
        0b00110000,
        0b00000000,

        // 0x70 p
        0b11111000,
        0b01001000,
        0b01001000,
        0b00110000,
        0b00000000,

        // 0x71 q
        0b00110000,
        0b01001000,
        0b01001000,
        0b11111000,
        0b00000000,

        // 0x72 r
        0b00000000,
        0b01111000,
        0b00010000,
        0b00001000,
        0b00000000,

        // 0x73 s
        0b01010000,
        0b01011000,
        0b01101000,
        0b00101000,
        0b00000000,

        // 0x74 t
        0b00001000,
        0b00111100,
        0b01001000,
        0b01001000,
        0b00000000,

        // 0x75 u
        0b00111000,
        0b01000000,
        0b01000000,
        0b01111000,
        0b00000000,

        // 0x76 v
        0b00011000,
        0b01100000,
        0b01100000,
        0b00011000,
        0b00000000,

        // 0x77 w
        0b01111000,
        0b00100000,
        0b00100000,
        0b01111000,
        0b00000000,

        // 0x78 x
        0b01001000,
        0b00110000,
        0b00110000,
        0b01001000,
        0b00000000,

        // 0x79 y
        0b00011000,
        0b10100000,
        0b10100000,
        0b01111000,
        0b00000000,

        // 0x7a z
        0b01001000,
        0b01101000,
        0b01011000,
        0b01001000,
        0b00000000,

        // 0x7b {
        0b00000000,
        0b00011000,
        0b00100100,
        0b01000010,
        0b00000000,

        // 0x7c |
        0b00000000,
        0b00000000,
        0b01111110,
        0b00000000,
        0b00000000,

        // 0x7d }
        0b00000000,
        0b01000010,
        0b00100100,
        0b00011000,
        0b00000000,

        // 0x7e ~
        0b00010000,
        0b00001000,
        0b00010000,
        0b00001000,
        0b00000000
};

#else
const unsigned char font_5x8[] = {
        5,8, // font width, height

        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,

        0b00000000,
        0b00000000,
        0b01011100,
        0b00000000,
        0b00000000,

        0b00000000,
        0b00001100,
        0b00000000,
        0b00001100,
        0b00000000,

        0b00101000,
        0b01111100,
        0b00101000,
        0b01111100,
        0b00101000,

        0b00000000,
        0b01010000,
        0b11101100,
        0b00101000,
        0b00000000,

        0b01000100,
        0b00101010,
        0b00110100,
        0b01011000,
        0b00100100,

        0b00100000,
        0b01011000,
        0b01010100,
        0b00100100,
        0b01010000,

        0b00000000,
        0b00000000,
        0b00000110,
        0b00000000,
        0b00000000,

        0b00000000,
        0b00111000,
        0b01000100,
        0b00000000,
        0b00000000,

        0b00000000,
        0b01000100,
        0b00111000,
        0b00000000,
        0b00000000,

        0b00000000,
        0b01010100,
        0b00111000,
        0b01010100,
        0b00000000,

        0b00000000,
        0b00010000,
        0b00111000,
        0b00010000,
        0b00000000,

        0b00000000,
        0b10000000,
        0b01000000,
        0b00000000,
        0b00000000,

        0b00001000,
        0b00001000,
        0b00001000,
        0b00001000,
        0b00000000,

        0b00000000,
        0b00000000,
        0b01000000,
        0b00000000,
        0b00000000,

        0b00000000,
        0b01100000,
        0b00011000,
        0b00000100,
        0b00000000,

        0b00111000,
        0b01000100,
        0b01000100,
        0b00111000,
        0b00000000,

        0b00000000,
        0b00001000,
        0b01111100,
        0b00000000,
        0b00000000,

        0b01001000,
        0b01100100,
        0b01010100,
        0b01001000,
        0b00000000,

        0b01000100,
        0b01010100,
        0b01010100,
        0b00101000,
        0b00000000,

        0b00100000,
        0b00110000,
        0b00101000,
        0b01111100,
        0b00000000,

        0b01011100,
        0b01010100,
        0b01010100,
        0b00100100,
        0b00000000,

        0b00111000,
        0b01010100,
        0b01010100,
        0b00100000,
        0b00000000,

        0b00000100,
        0b01100100,
        0b00010100,
        0b00001100,
        0b00000000,

        0b00101000,
        0b01010100,
        0b01010100,
        0b00101000,
        0b00000000,

        0b00001000,
        0b01010100,
        0b01010100,
        0b00111000,
        0b00000000,

        0b00000000,
        0b00000000,
        0b01010000,
        0b00000000,
        0b00000000,

        0b00000000,
        0b10000000,
        0b01010000,
        0b00000000,
        0b00000000,

        0b00000000,
        0b00010000,
        0b00101000,
        0b01000100,
        0b00000000,

        0b00000000,
        0b00101000,
        0b00101000,
        0b00101000,
        0b00000000,

        0b00000000,
        0b01000100,
        0b00101000,
        0b00010000,
        0b00000000,

        0b00000000,
        0b01010100,
        0b00010100,
        0b00001000,
        0b00000000,

        0b00111000,
        0b01000100,
        0b01010100,
        0b01010100,
        0b00001000,

        0b01111000,
        0b00010100,
        0b00010100,
        0b01111000,
        0b00000000,

        0b01111100,
        0b01010100,
        0b01010100,
        0b00101000,
        0b00000000,

        0b00111000,
        0b01000100,
        0b01000100,
        0b01000100,
        0b00000000,

        0b01111100,
        0b01000100,
        0b01000100,
        0b00111000,
        0b00000000,

        0b01111100,
        0b01010100,
        0b01010100,
        0b01000100,
        0b00000000,

        0b01111100,
        0b00010100,
        0b00010100,
        0b00000100,
        0b00000000,

        0b00111000,
        0b01000100,
        0b01000100,
        0b01101000,
        0b00000000,

        0b01111100,
        0b00010000,
        0b00010000,
        0b01111100,
        0b00000000,

        0b00000000,
        0b01000100,
        0b01111100,
        0b01000100,
        0b00000000,

        0b00110000,
        0b01000000,
        0b01000000,
        0b00111100,
        0b00000000,

        0b01111100,
        0b00010000,
        0b00101000,
        0b01000100,
        0b00000000,

        0b01111100,
        0b01000000,
        0b01000000,
        0b01000000,
        0b00000000,

        0b01111100,
        0b00010000,
        0b00010000,
        0b01111100,
        0b00000000,

        0b01111100,
        0b00001000,
        0b00010000,
        0b01111100,
        0b00000000,

        0b00111000,
        0b01000100,
        0b01000100,
        0b00111000,
        0b00000000,

        0b01111100,
        0b00010100,
        0b00010100,
        0b00001000,
        0b00000000,

        0b00111000,
        0b01000100,
        0b01000100,
        0b10111000,
        0b00000000,

        0b01111100,
        0b00010100,
        0b00010100,
        0b01101000,
        0b00000000,

        0b01001000,
        0b01010100,
        0b01010100,
        0b00100100,
        0b00000000,

        0b00000100,
        0b00000100,
        0b01111100,
        0b00000100,
        0b00000100,

        0b00111100,
        0b01000000,
        0b01000000,
        0b00111100,
        0b00000000,

        0b00011100,
        0b01100000,
        0b01100000,
        0b00011100,
        0b00000000,

        0b00011100,
        0b01100000,
        0b00011000,
        0b01100000,
        0b00011100,

        0b01001100,
        0b00110000,
        0b00010000,
        0b01101100,
        0b00000000,

        0b00000000,
        0b00011100,
        0b01100000,
        0b00011100,
        0b00000000,

        0b01100100,
        0b01010100,
        0b01001100,
        0b01000100,
        0b00000000,

        0b00000000,
        0b01111100,
        0b01000100,
        0b00000000,
        0b00000000,

        0b00000000,
        0b00001100,
        0b00110000,
        0b01000000,
        0b00000000,

        0b00000000,
        0b01000100,
        0b01111100,
        0b00000000,
        0b00000000,

        0b00000000,
        0b00001000,
        0b00000100,
        0b00001000,
        0b00000000,

        0b10000000,
        0b10000000,
        0b10000000,
        0b10000000,
        0b10000000,

        0b00000000,
        0b00000100,
        0b00001000,
        0b00000000,
        0b00000000,

        0b00000000,
        0b01101000,
        0b00101000,
        0b01110000,
        0b00000000,

        0b01111110,
        0b01001000,
        0b01001000,
        0b00110000,
        0b00000000,

        0b00000000,
        0b00110000,
        0b01001000,
        0b01001000,
        0b00000000,

        0b00110000,
        0b01001000,
        0b01001000,
        0b01111100,
        0b00000000,

        0b00110000,
        0b01011000,
        0b01011000,
        0b01010000,
        0b00000000,

        0b00010000,
        0b01111000,
        0b00010100,
        0b00000100,
        0b00000000,

        0b00010000,
        0b10101000,
        0b10101000,
        0b01111000,
        0b00000000,

        0b01111100,
        0b00001000,
        0b00001000,
        0b01110000,
        0b00000000,

        0b00000000,
        0b01001000,
        0b01111010,
        0b01000000,
        0b00000000,

        0b00000000,
        0b10000000,
        0b10000000,
        0b01111010,
        0b00000000,

        0b01111100,
        0b00010000,
        0b00101000,
        0b01000000,
        0b00000000,

        0b00000000,
        0b01000010,
        0b01111110,
        0b01000000,
        0b00000000,

        0b01111000,
        0b00010000,
        0b00010000,
        0b01111000,
        0b00000000,

        0b01111000,
        0b00001000,
        0b00001000,
        0b01110000,
        0b00000000,

        0b00110000,
        0b01001000,
        0b01001000,
        0b00110000,
        0b00000000,

        0b11111000,
        0b01001000,
        0b01001000,
        0b00110000,
        0b00000000,

        0b00110000,
        0b01001000,
        0b01001000,
        0b11111000,
        0b00000000,

        0b00000000,
        0b01111000,
        0b00010000,
        0b00001000,
        0b00000000,

        0b01010000,
        0b01011000,
        0b01101000,
        0b00101000,
        0b00000000,

        0b00001000,
        0b00111100,
        0b01001000,
        0b01001000,
        0b00000000,

        0b00111000,
        0b01000000,
        0b01000000,
        0b01111000,
        0b00000000,

        0b00011000,
        0b01100000,
        0b01100000,
        0b00011000,
        0b00000000,

        0b01111000,
        0b00100000,
        0b00100000,
        0b01111000,
        0b00000000,

        0b01001000,
        0b00110000,
        0b00110000,
        0b01001000,
        0b00000000,

        0b00011000,
        0b10100000,
        0b10100000,
        0b01111000,
        0b00000000,

        0b01001000,
        0b01101000,
        0b01011000,
        0b01001000,
        0b00000000,

        0b00000000,
        0b00011000,
        0b00100100,
        0b01000010,
        0b00000000,

        0b00000000,
        0b00000000,
        0b01111110,
        0b00000000,
        0b00000000,

        0b00000000,
        0b01000010,
        0b00100100,
        0b00011000,
        0b00000000,

        0b00010000,
        0b00001000,
        0b00010000,
        0b00001000,
        0b00000000,

        0b01100000,
        0b01010000,
        0b01001000,
        0b01010000,
        0b01100000,

        0b00111000,
        0b01000100,
        0b11000100,
        0b01000100,
        0b00000000,

        0b00111000,
        0b01000010,
        0b01000000,
        0b01111010,
        0b00000000,

        0b00110000,
        0b01011000,
        0b01011010,
        0b01010001,
        0b00000000,

        0b00101000,
        0b01001010,
        0b00110001,
        0b01000010,
        0b00000000,

        0b01001000,
        0b00101010,
        0b01110000,
        0b01000010,
        0b00000000,

        0b01001000,
        0b00101001,
        0b01110010,
        0b01000000,
        0b00000000,

        0b01001000,
        0b00101000,
        0b01110010,
        0b01000000,
        0b00000000,

        0b00000000,
        0b00110000,
        0b11001000,
        0b01001000,
        0b00000000,

        0b00110000,
        0b01011010,
        0b01011001,
        0b01010010,
        0b00000000,

        0b00110000,
        0b01011010,
        0b01011000,
        0b01010010,
        0b00000000,

        0b00110000,
        0b01011001,
        0b01011010,
        0b01010000,
        0b00000000,

        0b00000000,
        0b01001010,
        0b01111000,
        0b01000010,
        0b00000000,

        0b00000000,
        0b01001010,
        0b01111001,
        0b01000010,
        0b00000000,

        0b00000000,
        0b01001001,
        0b01111010,
        0b01000000,
        0b00000000,

        0b01111001,
        0b00010100,
        0b00010101,
        0b01111000,
        0b00000000,

        0b01111000,
        0b00010100,
        0b00010101,
        0b01111000,
        0b00000000,

        0b01111100,
        0b01010100,
        0b01010110,
        0b01000101,
        0b00000000,

        0b01101000,
        0b00111000,
        0b01110000,
        0b01011000,
        0b01011000,

        0b01111000,
        0b00010100,
        0b01111100,
        0b01010100,
        0b00000000,

        0b00110000,
        0b01001010,
        0b01001001,
        0b00110010,
        0b00000000,

        0b00110000,
        0b01001010,
        0b01001000,
        0b00110010,
        0b00000000,

        0b00110000,
        0b01001001,
        0b01001010,
        0b00110000,
        0b00000000,

        0b00111000,
        0b01000010,
        0b01000001,
        0b01111010,
        0b00000000,

        0b00111000,
        0b01000001,
        0b01000010,
        0b01111000,
        0b00000000,

        0b00011000,
        0b10100010,
        0b10100000,
        0b01111010,
        0b00000000,

        0b00110000,
        0b01001010,
        0b01001000,
        0b00110010,
        0b00000000,

        0b00111100,
        0b01000001,
        0b01000000,
        0b00111101,
        0b00000000,

        0b00110000,
        0b01001000,
        0b11001100,
        0b01001000,
        0b00000000,

        0b01010000,
        0b01111100,
        0b01010010,
        0b01000110,
        0b00000000,

        0b00000010,
        0b00101110,
        0b01110000,
        0b00101110,
        0b00000010,

        0b01111110,
        0b00010010,
        0b00011100,
        0b00111000,
        0b01010000,

        0b10010000,
        0b01111100,
        0b00010010,
        0b00010010,
        0b00000000,

        0b01001000,
        0b00101010,
        0b01110001,
        0b01000000,
        0b00000000,

        0b00000000,
        0b01001000,
        0b01111010,
        0b01000001,
        0b00000000,

        0b00110000,
        0b01001000,
        0b01001010,
        0b00110001,
        0b00000000,

        0b00111000,
        0b01000000,
        0b01000010,
        0b01111001,
        0b00000000,

        0b01111010,
        0b00001001,
        0b00001010,
        0b01110001,
        0b00000000,

        0b01111110,
        0b00011001,
        0b00100010,
        0b01111101,
        0b00000000,

        0b00000000,
        0b00100100,
        0b00101010,
        0b00101100,
        0b00000000,

        0b00000000,
        0b00100100,
        0b00101010,
        0b00100100,
        0b00000000,

        0b00100000,
        0b01010000,
        0b01001010,
        0b00100000,
        0b00000000,

        0b01100000,
        0b00100000,
        0b00100000,
        0b00100000,
        0b00100000,

        0b00100000,
        0b00100000,
        0b00100000,
        0b00100000,
        0b01100000,

        0b00101110,
        0b00010000,
        0b01001000,
        0b01010100,
        0b01110000,

        0b00101110,
        0b00010000,
        0b01001000,
        0b01100100,
        0b11110010,

        0b00000000,
        0b00100000,
        0b01111010,
        0b00100000,
        0b00000000,

        0b00100000,
        0b01010000,
        0b00100000,
        0b01010000,
        0b00000000,

        0b01010000,
        0b00100000,
        0b01010000,
        0b00100000,
        0b00000000,

        0b01010101,
        0b10101010,
        0b01010101,
        0b10101010,
        0b01010101,

        0b01010101,
        0b10111011,
        0b01010101,
        0b11101110,
        0b01010101,

        0b01010101,
        0b11111111,
        0b10101010,
        0b11111111,
        0b01010101,

        0b00000000,
        0b00000000,
        0b11111111,
        0b00000000,
        0b00000000,

        0b00001000,
        0b00001000,
        0b11111111,
        0b00000000,
        0b00000000,

        0b00010100,
        0b00010100,
        0b11111111,
        0b00000000,
        0b00000000,

        0b00001000,
        0b11111111,
        0b00000000,
        0b11111111,
        0b00000000,

        0b00001000,
        0b11111000,
        0b00001000,
        0b11111000,
        0b00000000,

        0b00010100,
        0b00010100,
        0b11111100,
        0b00000000,
        0b00000000,

        0b00010100,
        0b11110111,
        0b00000000,
        0b11111111,
        0b00000000,

        0b00000000,
        0b11111111,
        0b00000000,
        0b11111111,
        0b00000000,

        0b00010100,
        0b11110100,
        0b00000100,
        0b11111100,
        0b00000000,

        0b00010100,
        0b00010111,
        0b00010000,
        0b00011111,
        0b00000000,

        0b00001000,
        0b00001111,
        0b00001000,
        0b00001111,
        0b00000000,

        0b00010100,
        0b00010100,
        0b00011111,
        0b00000000,
        0b00000000,

        0b00001000,
        0b00001000,
        0b11111000,
        0b00000000,
        0b00000000,

        0b00000000,
        0b00000000,
        0b00001111,
        0b00001000,
        0b00001000,

        0b00001000,
        0b00001000,
        0b00001111,
        0b00001000,
        0b00001000,

        0b00001000,
        0b00001000,
        0b11111000,
        0b00001000,
        0b00001000,

        0b00000000,
        0b00000000,
        0b11111111,
        0b00001000,
        0b00001000,

        0b00001000,
        0b00001000,
        0b00001000,
        0b00001000,
        0b00001000,

        0b00001000,
        0b00001000,
        0b11111111,
        0b00001000,
        0b00001000,

        0b00000000,
        0b00000000,
        0b11111111,
        0b00010100,
        0b00010100,

        0b00000000,
        0b11111111,
        0b00000000,
        0b11111111,
        0b00001000,

        0b00000000,
        0b00011111,
        0b00010000,
        0b00010111,
        0b00010100,

        0b00000000,
        0b11111100,
        0b00000100,
        0b11110100,
        0b00010100,

        0b00010100,
        0b00010111,
        0b00010000,
        0b00010111,
        0b00010100,

        0b00010100,
        0b11110100,
        0b00000100,
        0b11110100,
        0b00010100,

        0b00000000,
        0b11111111,
        0b00000000,
        0b11110111,
        0b00010100,

        0b00010100,
        0b00010100,
        0b00010100,
        0b00010100,
        0b00010100,

        0b00010100,
        0b11110111,
        0b00000000,
        0b11110111,
        0b00010100,

        0b00010100,
        0b00010100,
        0b00010111,
        0b00010100,
        0b00010100,

        0b00001000,
        0b00001111,
        0b00001000,
        0b00001111,
        0b00001000,

        0b00010100,
        0b00010100,
        0b11110100,
        0b00010100,
        0b00010100,

        0b00001000,
        0b11111000,
        0b00001000,
        0b11111000,
        0b00001000,

        0b00000000,
        0b00001111,
        0b00001000,
        0b00001111,
        0b00001000,

        0b00000000,
        0b00000000,
        0b00011111,
        0b00010100,
        0b00010100,

        0b00000000,
        0b00000000,
        0b11111100,
        0b00010100,
        0b00010100,

        0b00000000,
        0b11111000,
        0b00001000,
        0b11111000,
        0b00001000,

        0b00001000,
        0b11111111,
        0b00001000,
        0b11111111,
        0b00001000,

        0b00010100,
        0b00010100,
        0b11111111,
        0b00010100,
        0b00010100,

        0b00001000,
        0b00001000,
        0b00001111,
        0b00000000,
        0b00000000,

        0b00000000,
        0b00000000,
        0b11111000,
        0b00001000,
        0b00001000,

        0b11111111,
        0b11111111,
        0b11111111,
        0b11111111,
        0b11111111,

        0b11110000,
        0b11110000,
        0b11110000,
        0b11110000,
        0b11110000,

        0b11111111,
        0b11111111,
        0b11111111,
        0b00000000,
        0b00000000,

        0b00000000,
        0b00000000,
        0b00000000,
        0b11111111,
        0b11111111,

        0b00001111,
        0b00001111,
        0b00001111,
        0b00001111,
        0b00001111,

        0b00110000,
        0b01001000,
        0b01001000,
        0b00110000,
        0b01001000,

        0b11111100,
        0b01001010,
        0b01001010,
        0b00111100,
        0b00000000,

        0b00000000,
        0b01111110,
        0b00000010,
        0b00000010,
        0b00000000,

        0b00000000,
        0b01111100,
        0b00000100,
        0b01111100,
        0b00000000,

        0b01100010,
        0b01010110,
        0b01001010,
        0b01000010,
        0b01100110,

        0b00111000,
        0b01000100,
        0b01000100,
        0b00111100,
        0b00000100,

        0b11111000,
        0b01000000,
        0b01000000,
        0b00111000,
        0b01000000,

        0b00000010,
        0b00000100,
        0b01111000,
        0b00000110,
        0b00000010,

        0b00010000,
        0b00101000,
        0b11101110,
        0b00101000,
        0b00010000,

        0b00111000,
        0b01010100,
        0b01010100,
        0b01010100,
        0b00111000,

        0b01011000,
        0b01100100,
        0b00000100,
        0b01100100,
        0b01011000,

        0b00110010,
        0b01001101,
        0b01001001,
        0b00110000,
        0b00000000,

        0b00110000,
        0b01001000,
        0b01111000,
        0b01001000,
        0b00110000,

        0b01010000,
        0b00101000,
        0b01011000,
        0b01001000,
        0b00110100,

        0b00000000,
        0b00111100,
        0b01001010,
        0b01001010,
        0b00000000,

        0b01111100,
        0b00000010,
        0b00000010,
        0b01111100,
        0b00000000,

        0b01010100,
        0b01010100,
        0b01010100,
        0b01010100,
        0b00000000,

        0b01001000,
        0b01001000,
        0b01011100,
        0b01001000,
        0b01001000,

        0b01000000,
        0b01100010,
        0b01010100,
        0b01001000,
        0b00000000,

        0b00000000,
        0b01001000,
        0b01010100,
        0b01100010,
        0b00000000,

        0b00000000,
        0b00000000,
        0b11111000,
        0b00000100,
        0b00001100,

        0b00110000,
        0b00100000,
        0b00011111,
        0b00000000,
        0b00000000,

        0b00010000,
        0b01010100,
        0b01010100,
        0b00010000,
        0b00000000,

        0b01001000,
        0b00100100,
        0b01001000,
        0b00100100,
        0b00000000,

        0b00000000,
        0b00001000,
        0b00010100,
        0b00001000,
        0b00000000,

        0b00000000,
        0b00011000,
        0b00011000,
        0b00000000,
        0b00000000,

        0b00000000,
        0b00000000,
        0b00001000,
        0b00000000,
        0b00000000,

        0b00100000,
        0b01000000,
        0b00110000,
        0b00001100,
        0b00000100,

        0b00000000,
        0b00001110,
        0b00000010,
        0b00001100,
        0b00000000,

        0b00000000,
        0b00010010,
        0b00011010,
        0b00010100,
        0b00000000,

        0b00000000,
        0b00111000,
        0b00111000,
        0b00111000,
        0b00000000,

        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
};

#endif // SSD1306_ASCII_FULL
#endif // SSD1306_5X8_FONT_H
