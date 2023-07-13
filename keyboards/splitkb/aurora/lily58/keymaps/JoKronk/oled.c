#include QMK_KEYBOARD_H
#include "oled.h"


void render_bill_left(void) {
  static const char PROGMEM logo[] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x80, 0x80, 0x80, 0xf0, 0xf0, 0x00, 0x80, 0xc0, 0x40, 0x40, 
0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0x40, 0x40, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x07, 0x07, 0x00, 0x03, 0x07, 0x05, 0x05, 
0x05, 0x05, 0x00, 0x00, 0x00, 0x00, 0x03, 0x07, 0x05, 0x05, 0x05, 0x05, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7c, 0x0c, 0x04, 0x7c, 0x78, 
0x00, 0x7c, 0x40, 0x40, 0x7c, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xc0, 0x00, 0x00, 0xc0, 0x40, 
0x00, 0x40, 0x40, 0x40, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x81, 0x07, 0x07, 0x01, 0x00, 
0x02, 0x07, 0x05, 0x05, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x0c, 0x04, 0x7c, 0x78, 
0x38, 0x7c, 0x54, 0x54, 0x5c, 0x58, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0x40, 
0x40, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x07, 0x05, 
0x05, 0x05, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x80, 0xe0, 0xe0, 0xe0, 0xf0, 0xf8, 0xf8, 0xfc, 0xfc, 0xfc, 0xfe, 0xfe, 
0xfc, 0xfc, 0xfe, 0xfe, 0xfc, 0xfc, 0xf8, 0xf0, 0xe0, 0xe0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x1e, 0x3f, 0x1f, 0x03, 0xe3, 0xf3, 0xf3, 0xfb, 0xff, 0xff, 0xfd, 0xff, 0xff, 0xff, 
0xfd, 0xfc, 0xfc, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xf0, 0xc0, 0x00, 
0x00, 0x04, 0xe0, 0xc0, 0x80, 0xcf, 0x97, 0x07, 0x03, 0x07, 0x8f, 0xc7, 0xc7, 0xe3, 0xc3, 0x03, 
0x07, 0xc7, 0xe7, 0xc7, 0x6b, 0x83, 0xa3, 0xe3, 0xfb, 0x6f, 0xff, 0xe3, 0xf3, 0xf1, 0x0f, 0x00, 
0x00, 0x00, 0x07, 0x1d, 0x79, 0x3f, 0x7c, 0x20, 0x07, 0x0c, 0x0e, 0x1e, 0x1e, 0x0f, 0x04, 0x38, 
0x2e, 0x6f, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xf6, 0xfe, 0xff, 0xff, 0xff, 0x3f, 0x1f, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x80, 0xc0, 0x20, 0xf0, 0xf8, 0xc0, 0x00, 0x00, 0x01, 0x03, 0x00, 0x02, 0x03, 
0x23, 0x07, 0x1f, 0x3f, 0x3f, 0x3f, 0xff, 0xff, 0xff, 0xff, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 
0x1c, 0x1e, 0x03, 0x03, 0x00, 0x00, 0x07, 0x3f, 0xff, 0xff, 0xfc, 0xf8, 0xf0, 0xe0, 0xe0, 0xc0, 
0x80, 0xfc, 0xfe, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x04, 0x18, 0x18, 0x18, 
0x00, 0x00, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23, 0x0f, 0x3f, 0xe7, 0x03, 0x83, 0xcf, 
0xff, 0x1f, 0xef, 0xf3, 0xf3, 0xe3, 0xe3, 0xf7, 0xff, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xfd, 0xff, 0xff, 0xdf, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
  };

  oled_write_raw_P(logo, sizeof(logo));
}

void render_bill_right(void) {
  static const char PROGMEM logo[] = {
0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x40, 0x00, 0x40, 0x40, 0x40, 0x40, 0x00, 
0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x1f, 0x03, 0x01, 0x1f, 0x5e, 0x41, 0x7f, 0x3f, 0x08, 0x1d, 0x15, 0x15, 0x1f, 0x00, 
0x00, 0x1f, 0x00, 0x00, 0x7f, 0x11, 0x11, 0x1f, 0x0e, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 
0x00, 0x00, 0xe0, 0xf0, 0x50, 0x50, 0x70, 0x60, 0x00, 0xf0, 0x30, 0x10, 0x10, 0x00, 0x00, 0x00, 
0x00, 0xf4, 0x00, 0x00, 0xf0, 0x30, 0x10, 0xf0, 0xe0, 0x10, 0xfc, 0x10, 0x10, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x70, 0x50, 0x70, 
0x70, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x1d, 0x15, 0x15, 
0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0xfe, 0x40, 0xe0, 0x90, 0x00, 0x00, 0xfe, 0x00, 0x80, 0xd0, 0x50, 0x50, 0xf0, 
0x00, 0xe0, 0xf0, 0x10, 0x10, 0xf0, 0xf0, 0x80, 0xd0, 0x50, 0x50, 0xf0, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x01, 0x00, 0x01, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 
0x00, 0x00, 0x05, 0x05, 0x05, 0x07, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xe0, 0xf0, 0xf8, 0xf8, 0xf8, 0x10, 
0x00, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0xf7, 0xff, 0xff, 0xff, 0xdf, 0xc1, 0xe1, 0xe0, 
0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xc0, 0xc0, 0xe0, 0xe0, 0xe0, 0x60, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xfc, 0x7f, 0x6f, 0xcf, 0xff, 0xff, 0xff, 0x07, 0x03, 0xe3, 
0xeb, 0xfb, 0xef, 0xef, 0xef, 0x83, 0x01, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0xff, 0xff, 0x9f, 0x8f, 0x01, 0x01, 0x00, 0x07, 0x9f, 
0xff, 0xff, 0xff, 0xff, 0x7f, 0x0f, 0x07, 0x03, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xf7, 0x37, 0xb6, 0x97, 0x87, 0xc7, 
0x87, 0x03, 0x01, 0x01, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x3f, 0x7f, 0x3f, 0x1f, 0x0f, 0x0f, 0x0f, 
0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x80, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x3c, 0x6e, 0x1f, 0x1f, 0x3f, 0x41, 0x07, 0x36, 0x02, 0x00, 0x00, 0x00, 0x02, 0x77, 0x03, 0x03 
  };

  oled_write_raw_P(logo, sizeof(logo));
}

void render_lily_left(void) {
  static const char PROGMEM logo[] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xe0, 0x90, 0x08, 0x00, 0x00, 0x88, 0x58, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xa0, 
0x30, 0x78, 0x1c, 0x66, 0xfb, 0x19, 0x08, 0x04, 0x48, 0xf1, 0x61, 0x01, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x70, 0xc0, 0x00, 0x80, 0x30, 0x4c, 0xcf, 0x47, 0xe0, 
0xe0, 0xe0, 0xe0, 0xe0, 0x20, 0xc1, 0x00, 0x03, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x0e, 0xf9, 0xc7, 0x30, 0x06, 0x01, 0x00, 0x00, 0x07, 
0x0f, 0x17, 0x3c, 0x30, 0x27, 0x1f, 0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xff, 0x3f, 0x1c, 0x7c, 0xbe, 0x3f, 0x3b, 0x31, 
0xc1, 0x81, 0x03, 0x06, 0x1c, 0xf8, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0x83, 0x40, 0xe0, 0x78, 0x03, 0x04, 0x98, 0xc4, 
0x60, 0x6d, 0x49, 0x36, 0x1c, 0x11, 0x13, 0x0e, 0x0c, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xcc, 0x86, 0x03, 0x01, 0x00, 0x00, 0x00, 0x01, 0x01, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0xfc, 0xc3, 0xe5, 0xfd, 0xfe, 0xf8, 0xe0, 0xe0, 
0xe0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x3c, 0x58, 0xa0, 0x40, 0x80, 0x00, 0x3f, 0xff, 0x03, 0x07, 0x07, 0x03, 0xff, 0x3f, 
0x80, 0xe0, 0xdf, 0x20, 0xa0, 0x40, 0xc0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x04, 0x07, 0x80, 0xe0, 0x07, 0xd8, 0x10, 0x1f, 0x10, 0x10, 
0xf9, 0x86, 0xc3, 0x63, 0x01, 0x00, 0x87, 0x76, 0x0b, 0x06, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x68, 0xf0, 0x20, 0x40, 0x80, 0x00, 0x00, 0x03, 0x38, 0x00, 0x7c, 0x60, 0x30, 0x38, 
0x1c, 0x07, 0x03, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x03, 0x3b, 0xe6, 0x13, 0x26, 0xe0, 0xc0, 0x00, 0x1e, 0x00, 0x7f, 0x80, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x04, 0x09, 0x13, 0xe4, 0xfc, 0x00, 0x8f, 0x00, 
0x80, 0xc0, 0x10, 0x88, 0x00, 0x02, 0x98, 0x30, 0xf4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0x00, 0xe6, 0x0e, 
0x01, 0x02, 0x03, 0x04, 0x00, 0x04, 0x0c, 0x1c, 0x14, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x00, 0xf0, 0x01, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x1f, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
  };

  oled_write_raw_P(logo, sizeof(logo));
}

void render_lily_right(void) {
  static const char PROGMEM logo[] = {
0x00, 0x00, 0x58, 0x88, 0x00, 0x00, 0x08, 0x90, 0xe0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x01, 0x61, 0xf1, 0x48, 0x04, 0x08, 0x19, 0xfb, 0x66, 0x1c, 0x78, 0x30, 
0xa0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x03, 0x00, 0xc1, 0x20, 0xe0, 0xe0, 0xe0, 0xe0, 
0xe0, 0x47, 0xcf, 0x4c, 0x30, 0x80, 0x00, 0xc0, 0x70, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x1f, 0x27, 0x30, 0x3c, 0x17, 0x0f, 
0x07, 0x00, 0x00, 0x01, 0x06, 0x30, 0xc7, 0xf9, 0x0e, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xf8, 0x1c, 0x06, 0x03, 0x81, 0xc1, 
0x31, 0x3b, 0x3f, 0xbe, 0x7c, 0x1c, 0x3f, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x0c, 0x0e, 0x13, 0x11, 0x1c, 0x36, 0x49, 0x6d, 0x60, 
0xc4, 0x98, 0x04, 0x03, 0x78, 0xe0, 0x40, 0x83, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x01, 0x01, 0x00, 0x00, 0x00, 0x01, 0x03, 0x86, 0xcc, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xe0, 
0xe0, 0xe0, 0xf8, 0xfe, 0xfd, 0xe5, 0xc3, 0xfc, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xc0, 0x40, 0xa0, 0x20, 0xdf, 0xe0, 0x80, 
0x3f, 0xff, 0x03, 0x07, 0x07, 0x03, 0xff, 0x3f, 0x00, 0x80, 0x40, 0xa0, 0x58, 0x3c, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x06, 0x0b, 0x76, 0x87, 0x00, 0x01, 0x63, 0xc3, 0x86, 0xf9, 
0x10, 0x10, 0x1f, 0x10, 0xd8, 0x07, 0xe0, 0x80, 0x07, 0x04, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x03, 0x07, 0x1c, 
0x38, 0x30, 0x60, 0x7c, 0x00, 0x38, 0x03, 0x00, 0x00, 0x80, 0x40, 0x20, 0xf0, 0x68, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x80, 0x7f, 0x00, 0x1e, 0x00, 0xc0, 0xe0, 0x26, 0x13, 0xe6, 0x3b, 0x03, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf4, 0x30, 0x98, 0x02, 0x00, 0x88, 0x10, 0xc0, 0x80, 
0x00, 0x8f, 0x00, 0xfc, 0xe4, 0x13, 0x09, 0x04, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x14, 0x1c, 0x0c, 0x04, 0x00, 0x04, 0x03, 0x02, 0x01, 
0x0e, 0xe6, 0x00, 0x5f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x01, 0xf0, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x1f, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 
  };

  oled_write_raw_P(logo, sizeof(logo)); 
}

void render_lilies(void) {
  static const char PROGMEM logo[] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0xff, 0x7c, 0x01, 0x0f, 0xfe, 0xf9, 
0x06, 0x0c, 0x38, 0xf0, 0x60, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x06, 0x07, 0x07, 0x83, 0x81, 0xc0, 0xe0, 0xe2, 0xf3, 0xd1, 
0xf0, 0x60, 0xc0, 0x08, 0x0e, 0x01, 0x03, 0xfc, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x39, 0x1f, 0x1f, 0xcf, 0xf7, 0x7b, 
0x1d, 0x0e, 0x03, 0x00, 0x00, 0xc0, 0x30, 0xcf, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0xe0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xe1, 0x63, 0x72, 
0xb1, 0xd8, 0x2c, 0xc6, 0xf3, 0xfc, 0x3f, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xe0, 0x70, 0x18, 0x0c, 0xf8, 0xfe, 0x0f, 
0x03, 0x78, 0xff, 0xff, 0xff, 0x81, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x8e, 0x03, 0x00, 0x18, 0x80, 0xc0, 0xe0, 0xa1, 0xa3, 0x66, 
0xc4, 0xc0, 0x81, 0x03, 0x07, 0x0f, 0x8e, 0x0c, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x80, 0x00, 0x00, 0x00, 0x03, 0x0e, 0x1f, 0x7f, 0xff, 0xcf, 
0x1e, 0x1d, 0x3b, 0x33, 0x07, 0x06, 0x06, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x3e, 0xf8, 0xe3, 0x86, 0x6c, 0xd8, 0xba, 0x73, 0x71, 
0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0x70, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0xff, 0x7c, 0x01, 0x07, 0xfe, 0xf9, 
0x06, 0x0c, 0x38, 0xf0, 0x60, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x06, 0x07, 0x07, 0x83, 0x81, 0xc0, 0xe0, 0xe2, 0xf3, 0xd1, 
0xf0, 0x60, 0xc0, 0x08, 0x0e, 0x01, 0x03, 0xfc, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x39, 0x1f, 0x1f, 0xcf, 0xf7, 0x7b, 
0x1d, 0x0e, 0x03, 0x00, 0x00, 0xc0, 0x30, 0xcf, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0xe0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xe0, 0x61, 0x72, 
0xb1, 0xd8, 0x2c, 0xc6, 0xf3, 0xfc, 0x3f, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xe0, 0x30, 0x18, 0x0c, 0xf8, 0xfc, 0x0f, 
0x03, 0x78, 0xff, 0xff, 0xff, 0x81, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x5e, 0x03, 0x00, 0x18, 0x80, 0xc0, 0xe0, 0xa1, 0xa3, 0x66, 
0xc4, 0xc0, 0x81, 0x03, 0x07, 0x0f, 0x8e, 0x0c, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x85, 0x00, 0x00, 0x00, 0x03, 0x0e, 0x1f, 0x7f, 0xff, 0xcf, 
0x1e, 0x1d, 0x3b, 0x33, 0x03, 0x06, 0x06, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x3e, 0xf8, 0xe3, 0x86, 0x6c, 0xd8, 0xba, 0x73, 0x71, 
0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0x70, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 
  };

  oled_write_raw_P(logo, sizeof(logo));
}


void render_oled(void) {
	
	uint8_t current_layer = get_highest_layer(layer_state);
	if (current_layer <= _LIGHT) {
		if (is_keyboard_master()) {
			render_bill_left();
		} else {
			render_bill_right();
		}
	}
	else if (current_layer >= _HITBOX_CONTROLLER_OLD) {
		render_lilies();
	}
	else {
		if (is_keyboard_master()) {
			render_lily_left();
		} else {
			render_lily_right();
		}
	}
}