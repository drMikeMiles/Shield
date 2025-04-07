#include <lvgl.h>

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_CRYSTAL_01
#define LV_ATTRIBUTE_IMG_CRYSTAL_01
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_CRYSTAL_01 uint8_t
    crystal_01_map[] = {
#if CONFIG_NICE_VIEW_WIDGET_INVERTED
        0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
        0x00, 0x00, 0x00, 0xff, /*Color of index 1*/
#else
        0x00, 0x00, 0x00, 0xff, /*Color of index 0*/
        0xff, 0xff, 0xff, 0xff, /*Color of index 1*/
#endif

  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xf0, 
  0xe3, 0xfe, 0x0f, 0x38, 0x72, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x7e, 0x9c, 0xff, 0xfe, 0x70, 
  0xdf, 0xc0, 0x01, 0xf0, 0x66, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf1, 0xf8, 0x36, 0x7e, 0xff, 0xb0, 
  0xbe, 0x00, 0x00, 0x70, 0xe6, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xf7, 0xfe, 0xf0, 0x00, 0x66, 0x7f, 0xff, 0xd0, 
  0xbc, 0x00, 0x00, 0x18, 0xcc, 0x3f, 0xff, 0xf3, 0xef, 0xff, 0xe3, 0xff, 0xe6, 0x03, 0xef, 0x3e, 0xe0, 0xd0, 
  0x78, 0x07, 0xe0, 0x0d, 0x98, 0x3f, 0xef, 0xf3, 0xff, 0xbf, 0xf7, 0xff, 0xe7, 0xcf, 0xcd, 0x3e, 0xfb, 0xe0, 
  0x60, 0xff, 0xfc, 0x07, 0x70, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe4, 0x7c, 0x49, 0x3e, 0xe0, 0xe0, 
  0x41, 0xdf, 0xfe, 0x03, 0xc0, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x19, 0x4c, 0x3a, 0xff, 0xe0, 
  0x03, 0x78, 0x0f, 0x01, 0x80, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe3, 0x10, 0x47, 0x3e, 0xe0, 0xe0, 
  0x03, 0xc0, 0x01, 0xc0, 0x00, 0x9f, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x3f, 0xe7, 0xf1, 0xc7, 0x3e, 0xfa, 0xe0, 
  0x07, 0x80, 0x00, 0xf0, 0x01, 0x9f, 0xff, 0xdf, 0xff, 0xe0, 0x00, 0x03, 0xfe, 0x63, 0xeb, 0x3e, 0xe0, 0xe0, 
  0x0f, 0x07, 0xc0, 0x38, 0x01, 0x9f, 0xff, 0xff, 0xff, 0x01, 0xff, 0xc0, 0x7c, 0x26, 0xe0, 0x7e, 0xff, 0xe0, 
  0x0e, 0x1f, 0xf0, 0x38, 0x03, 0x9f, 0xff, 0xff, 0xfc, 0x1f, 0xb0, 0x3c, 0x1e, 0x34, 0x30, 0x7e, 0xe0, 0xe0, 
  0x1e, 0x3c, 0x7c, 0x1e, 0x0f, 0x9f, 0xff, 0xff, 0xf0, 0x7f, 0xe0, 0x1c, 0x07, 0x27, 0x1c, 0xf6, 0xfc, 0xe0, 
  0x1c, 0x70, 0x1e, 0x0b, 0xfb, 0x1f, 0xff, 0xff, 0xe3, 0xdc, 0x47, 0x0c, 0x23, 0xf3, 0xf9, 0xe2, 0xe0, 0xe0, 
  0x3c, 0x61, 0xeb, 0x0f, 0xde, 0x1f, 0xef, 0xff, 0xc7, 0xf0, 0xcf, 0x8c, 0x71, 0xe8, 0xf3, 0xf6, 0xff, 0xe0, 
  0x2c, 0xe3, 0xf9, 0x04, 0x78, 0x1f, 0xff, 0xff, 0x05, 0x80, 0x8e, 0x8c, 0xe0, 0x7f, 0xc7, 0xfe, 0xe0, 0xe0, 
  0x38, 0xe7, 0x8d, 0x85, 0x60, 0x1f, 0xff, 0xfe, 0x0f, 0x01, 0x99, 0xdc, 0xe2, 0x38, 0x0f, 0xfe, 0xfc, 0xe0, 
  0x38, 0xa6, 0xac, 0x84, 0xc0, 0x1f, 0xff, 0xfc, 0x0c, 0x07, 0x99, 0xd9, 0xc3, 0x1c, 0x3f, 0xfe, 0xe0, 0xe0, 
  0x28, 0xe6, 0x8c, 0x87, 0x87, 0x3f, 0xff, 0xf8, 0x18, 0x7e, 0x9b, 0xb9, 0xc7, 0x0f, 0xff, 0xfe, 0xff, 0xe0, 
  0x38, 0xa3, 0x8d, 0x85, 0x8f, 0x3f, 0xfb, 0xf1, 0x30, 0xf8, 0x9f, 0xf3, 0x86, 0x07, 0xff, 0xfe, 0xe0, 0xe0, 
  0x18, 0xe3, 0xcd, 0x0f, 0x0f, 0x3f, 0xfb, 0xf2, 0x31, 0xe0, 0x9e, 0xc6, 0x8c, 0x07, 0xff, 0xfe, 0xea, 0xe0, 
  0x18, 0x71, 0xfb, 0x0e, 0x3b, 0x3f, 0xfe, 0xe6, 0x63, 0xf1, 0x8f, 0x0f, 0x9c, 0x33, 0xff, 0xfe, 0xee, 0xe0, 
  0x0c, 0x30, 0x7a, 0x1c, 0x3e, 0x37, 0xff, 0xcc, 0x6e, 0x1f, 0xcf, 0xfb, 0x38, 0x79, 0xff, 0xfe, 0xff, 0xe0, 
  0x0e, 0x38, 0x06, 0x1c, 0x7e, 0x7f, 0xff, 0x8c, 0x78, 0x07, 0x43, 0x36, 0x38, 0xf8, 0xfc, 0xfe, 0xe0, 0xe0, 
  0x06, 0x1e, 0x04, 0x18, 0x70, 0x7f, 0xff, 0x98, 0x60, 0x41, 0xe1, 0xfc, 0x70, 0xd8, 0xfc, 0xfe, 0xfa, 0xe0, 
  0x43, 0x07, 0xfc, 0x38, 0xe0, 0xff, 0xff, 0x38, 0xc3, 0xf0, 0xf0, 0xf0, 0xf1, 0xf2, 0x7f, 0xfe, 0xe4, 0xe0, 
  0x63, 0xc1, 0xcc, 0x39, 0xcc, 0xff, 0xff, 0x39, 0x8e, 0x78, 0x58, 0x01, 0xe3, 0x62, 0x7f, 0xfe, 0xff, 0xe0, 
  0x61, 0xff, 0xa8, 0x73, 0xdc, 0xff, 0xfe, 0x31, 0x1c, 0x0e, 0x7e, 0x07, 0x67, 0xc6, 0x3f, 0xfe, 0xe0, 0xe0, 
  0x70, 0xfa, 0x88, 0x63, 0xb9, 0xff, 0xfe, 0x73, 0x18, 0x07, 0x3b, 0xff, 0xcf, 0x8e, 0x3f, 0xfe, 0xea, 0xe0, 
  0x78, 0x1f, 0xf8, 0x67, 0x31, 0xff, 0xfe, 0x73, 0x33, 0x83, 0x1f, 0x4d, 0x8d, 0x0e, 0x3f, 0xee, 0xe4, 0xe0, 
  0x1e, 0x03, 0x10, 0xee, 0x73, 0xff, 0xfc, 0xe6, 0x36, 0xe1, 0xbf, 0xc7, 0x1f, 0x3c, 0x1f, 0xfe, 0xff, 0xe0, 
  0x0f, 0x80, 0x70, 0xce, 0xe7, 0xef, 0xfc, 0xc6, 0x37, 0xf3, 0xe0, 0xfe, 0x1e, 0x3c, 0x1f, 0xfe, 0xe0, 0xe0, 
  0x05, 0xe1, 0xf0, 0xdc, 0xc7, 0xff, 0xfc, 0x8e, 0x3b, 0x36, 0x00, 0x38, 0x3e, 0x3c, 0x9f, 0xfe, 0xea, 0xe0, 
  0x07, 0x3f, 0xb0, 0xb9, 0xcf, 0xff, 0xdc, 0x9e, 0x3e, 0xbc, 0x00, 0x03, 0x34, 0x79, 0x9f, 0x7e, 0xee, 0xe0, 
  0x07, 0x0c, 0x10, 0xfb, 0x9f, 0xff, 0xf9, 0x1a, 0x1a, 0x70, 0x3c, 0x06, 0x7c, 0x79, 0xcf, 0xfe, 0xff, 0xe0, 
  0x03, 0x0c, 0x18, 0xf3, 0x3f, 0xff, 0xf8, 0x13, 0x1f, 0xe0, 0xff, 0xc0, 0xcc, 0xf9, 0x8f, 0xfe, 0xe0, 0xe0, 
  0x03, 0x0e, 0x18, 0xb6, 0x7f, 0xff, 0xf8, 0x37, 0x0f, 0xc1, 0xfb, 0xf7, 0xc8, 0xd9, 0x8f, 0xee, 0xfa, 0xe0, 
  0x43, 0x0e, 0x18, 0xe4, 0xe7, 0xff, 0xf8, 0x3d, 0x83, 0x07, 0xff, 0xbf, 0x78, 0xd9, 0x0f, 0xc6, 0xe0, 0xe0, 
  0x43, 0x87, 0x18, 0x69, 0xe7, 0xfb, 0xf8, 0x6c, 0xc2, 0x0f, 0x01, 0xe6, 0x38, 0xd9, 0x4f, 0xee, 0xff, 0xe0, 
  0x42, 0x87, 0x1c, 0x63, 0xff, 0xff, 0xf8, 0x78, 0x76, 0x1c, 0x00, 0x74, 0x98, 0xd9, 0x4f, 0xfe, 0xe0, 0xe0, 
  0x43, 0xc7, 0x8c, 0x07, 0xff, 0xff, 0xf8, 0xe8, 0x3c, 0x38, 0xfc, 0x3e, 0x19, 0x99, 0x4e, 0xfe, 0xfc, 0xe0, 
  0x61, 0x43, 0x8c, 0x0f, 0xff, 0xff, 0xf8, 0xd8, 0x7c, 0x71, 0xdf, 0x0f, 0x31, 0x99, 0x4f, 0xff, 0x60, 0xe0, 
  0x61, 0x42, 0x8e, 0x3f, 0xff, 0xff, 0xf8, 0xd0, 0xcc, 0x73, 0xff, 0x87, 0x31, 0x9d, 0x0f, 0xff, 0x7f, 0xe0, 
  0x61, 0xc3, 0xc0, 0x7f, 0xff, 0xbf, 0xb9, 0x90, 0xd8, 0xe7, 0x8f, 0xe3, 0xf1, 0x9d, 0x8f, 0xfd, 0xbf, 0xe0, 
  0x60, 0xe1, 0xc1, 0xff, 0x7f, 0xff, 0xf9, 0x30, 0xf8, 0xc7, 0x03, 0xb1, 0xb5, 0xcd, 0x8f, 0xff, 0xcf, 0xe0, 
  0x30, 0x60, 0x0f, 0xfe, 0x3f, 0xff, 0xfc, 0x30, 0xb1, 0xce, 0x10, 0xf8, 0xf4, 0xcd, 0x9f, 0xff, 0xf0, 0xa0, 
  0x00, 0x00, 0x3f, 0xdf, 0x7f, 0xff, 0xfc, 0x20, 0xf1, 0xde, 0x38, 0x78, 0xd6, 0xcf, 0x9f, 0xff, 0xff, 0xe0, 
  0x40, 0x07, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x21, 0xe1, 0xd6, 0x7e, 0x3c, 0x72, 0xef, 0x9f, 0xef, 0xff, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x61, 0xa3, 0x5e, 0x7f, 0x1e, 0x78, 0x67, 0x9f, 0xff, 0xff, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xfe, 0x71, 0xe3, 0xdf, 0x31, 0x8e, 0x38, 0x67, 0x3c, 0xff, 0xff, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xfe, 0x70, 0xf1, 0xdb, 0x3a, 0xcf, 0x1c, 0x63, 0x3c, 0xff, 0xf3, 0xe0, 
  0x7f, 0xf7, 0xff, 0x80, 0xff, 0xff, 0xbe, 0x38, 0xf1, 0xcd, 0xbc, 0xcd, 0x8e, 0x70, 0x3f, 0xff, 0x73, 0xe0, 
  0x7f, 0xe3, 0xfc, 0x00, 0x1f, 0xff, 0xff, 0x38, 0x71, 0xc4, 0xfd, 0xe7, 0xc7, 0x78, 0x7f, 0xff, 0xff, 0xe0, 
  0x5f, 0xf7, 0xf0, 0x7f, 0x07, 0xff, 0xff, 0x38, 0x78, 0xc6, 0x37, 0xe6, 0xe7, 0x3c, 0x7f, 0xff, 0xff, 0x60, 
  0x7f, 0xff, 0xe3, 0xff, 0xe3, 0xff, 0xff, 0x9c, 0x3c, 0xe3, 0xf6, 0xf6, 0x73, 0xbc, 0xff, 0xff, 0xff, 0xe0, 
  0x7f, 0xff, 0xc7, 0xc0, 0xf1, 0xfd, 0xff, 0x8e, 0x1e, 0x70, 0xe6, 0xe6, 0x31, 0xd8, 0xff, 0xff, 0xff, 0xe0, 
  0x7f, 0xff, 0x8f, 0x00, 0x3c, 0xf8, 0xff, 0xce, 0x0f, 0xb8, 0x0e, 0x67, 0x78, 0xf9, 0xff, 0xfe, 0xff, 0xe0, 
  0x7f, 0xff, 0x0e, 0x7e, 0x0e, 0x7d, 0xfe, 0xe7, 0x0e, 0xfc, 0x19, 0x67, 0xdc, 0x73, 0xdf, 0xff, 0xff, 0xe0, 
  0x7f, 0xfe, 0x1c, 0xf3, 0x86, 0x3f, 0xff, 0xf3, 0x86, 0x6f, 0xf2, 0xe7, 0xfe, 0x07, 0xff, 0x7f, 0xff, 0xe0, 
  0x7f, 0xfe, 0x19, 0xc0, 0x4f, 0x3f, 0xff, 0xf0, 0xc3, 0xe3, 0xff, 0xce, 0x3b, 0x07, 0xff, 0xff, 0xff, 0xe0, 
  0x7f, 0xfc, 0x19, 0x9f, 0x3b, 0x9f, 0xff, 0xf8, 0x70, 0xf8, 0x1f, 0x98, 0x0f, 0x8f, 0xff, 0xff, 0xff, 0xe0, 
  0x7d, 0xfc, 0x19, 0xbb, 0xb7, 0x1f, 0xfb, 0xfc, 0x3e, 0x3e, 0x7e, 0x10, 0x07, 0x1f, 0xff, 0xff, 0xf7, 0xe0, 
  0xbf, 0xfc, 0x39, 0xb4, 0xa6, 0x1f, 0xff, 0xfe, 0x0f, 0xdb, 0xf8, 0x71, 0xe2, 0x3f, 0xf7, 0xff, 0xe3, 0xd0, 
  0xbf, 0xf9, 0x19, 0xba, 0xec, 0x0f, 0xff, 0xef, 0x01, 0xfe, 0x00, 0xe3, 0xf0, 0x7b, 0xe3, 0xfd, 0xf7, 0xd0, 
  0xdf, 0xf9, 0x19, 0x9f, 0xcc, 0xcd, 0xff, 0xff, 0xc0, 0x00, 0x01, 0xc7, 0x31, 0xff, 0xf7, 0xff, 0xff, 0xb0, 
  0xe7, 0xf9, 0x88, 0xc3, 0x8d, 0xcf, 0xff, 0xff, 0xe0, 0x80, 0xff, 0x8e, 0xa3, 0xff, 0xff, 0xff, 0xfe, 0x70, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xf0, 
};

const lv_img_dsc_t crystal_01 = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 140,
  .header.h = 68,
  .data_size = 1232,
  .data = crystal_01_map,
};

#ifndef LV_ATTRIBUTE_IMG_CRYSTAL_02
#define LV_ATTRIBUTE_IMG_CRYSTAL_02
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_CRYSTAL_02 uint8_t
    crystal_02_map[] = {
#if CONFIG_NICE_VIEW_WIDGET_INVERTED
        0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
        0x00, 0x00, 0x00, 0xff, /*Color of index 1*/
#else
        0x00, 0x00, 0x00, 0xff, /*Color of index 0*/
        0xff, 0xff, 0xff, 0xff, /*Color of index 1*/
#endif

  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xf0, 
  0xe5, 0xdf, 0xf5, 0x55, 0x55, 0x55, 0x55, 0xff, 0x57, 0xff, 0xf5, 0x00, 0x01, 0x10, 0x00, 0x04, 0x00, 0x70, 
  0xca, 0xab, 0xff, 0xfa, 0xaa, 0xaf, 0xff, 0xea, 0xff, 0xbf, 0xcb, 0x00, 0x01, 0xe0, 0x00, 0x2b, 0x00, 0x30, 
  0x81, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x5f, 0xfd, 0x7f, 0xc5, 0x80, 0x00, 0xbc, 0x00, 0x00, 0x00, 0x10, 
  0xaa, 0xae, 0xeb, 0xff, 0xff, 0xfe, 0xab, 0xff, 0x8a, 0xbf, 0x82, 0xc0, 0x00, 0x83, 0xc0, 0x8b, 0x1f, 0x10, 
  0x05, 0xdf, 0xfd, 0x57, 0xff, 0x55, 0xff, 0xfc, 0x05, 0x5f, 0x81, 0x40, 0x00, 0x80, 0x00, 0x05, 0x04, 0x00, 
  0x2a, 0xab, 0xff, 0xfe, 0xab, 0xff, 0xff, 0xa8, 0x02, 0xbf, 0x80, 0xa0, 0x00, 0x40, 0x00, 0x2b, 0x1f, 0x00, 
  0x01, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x50, 0x01, 0x78, 0x81, 0x50, 0x00, 0x40, 0x00, 0x01, 0x00, 0x00, 
  0x2a, 0xae, 0xfa, 0xaf, 0xff, 0xff, 0xae, 0xa0, 0x02, 0xc0, 0x80, 0xb0, 0x00, 0x20, 0x00, 0x8b, 0x1f, 0x00, 
  0x05, 0xdf, 0xff, 0xf5, 0x57, 0xd5, 0x7d, 0x40, 0x05, 0x00, 0x80, 0x50, 0x00, 0x20, 0xc0, 0x05, 0x05, 0x00, 
  0x2a, 0xab, 0xeb, 0xff, 0xaa, 0xfe, 0xba, 0x80, 0x0b, 0x00, 0x80, 0xa8, 0x00, 0x20, 0xc0, 0x2b, 0x1f, 0x00, 
  0x01, 0x7f, 0xff, 0x7f, 0xd5, 0x57, 0xf5, 0x00, 0x06, 0x00, 0x40, 0x58, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 
  0x2a, 0xae, 0xff, 0xaf, 0xff, 0xaa, 0xaa, 0x00, 0x0a, 0x00, 0x40, 0x28, 0x00, 0x10, 0x00, 0x8b, 0x1f, 0x00, 
  0x05, 0xdf, 0xf7, 0xd5, 0x55, 0x7f, 0xd4, 0x00, 0x14, 0x00, 0x40, 0x14, 0x00, 0x10, 0x00, 0x05, 0x03, 0x00, 
  0x2a, 0xab, 0xfe, 0xfa, 0xaf, 0xaa, 0xe8, 0x00, 0x2c, 0x00, 0x40, 0x2c, 0x00, 0x0e, 0x00, 0x2b, 0x1f, 0x00, 
  0x01, 0x7f, 0xff, 0x57, 0xd5, 0xfd, 0xd4, 0x00, 0x16, 0x00, 0x40, 0x14, 0x00, 0x09, 0x80, 0x01, 0x00, 0x00, 
  0x2a, 0xae, 0xeb, 0xea, 0xfe, 0xab, 0xa8, 0x00, 0x2e, 0x03, 0xc0, 0x0c, 0x00, 0x04, 0x40, 0x8b, 0x1f, 0x00, 
  0x05, 0xdf, 0xfd, 0x7d, 0x55, 0xfd, 0xd0, 0x00, 0x56, 0x07, 0xe0, 0x16, 0x00, 0x04, 0x00, 0x05, 0x03, 0x00, 
  0x2a, 0xab, 0xeb, 0xbf, 0xaa, 0xaf, 0xa0, 0x00, 0x2a, 0x07, 0xe0, 0x0a, 0x00, 0x04, 0x00, 0x2b, 0x1f, 0x00, 
  0x01, 0x7f, 0xf5, 0xf7, 0xf5, 0xf5, 0x50, 0x00, 0x17, 0x07, 0xe0, 0x06, 0x00, 0x02, 0x00, 0x01, 0x00, 0x00, 
  0x2a, 0xae, 0xfe, 0xbe, 0xfe, 0xbf, 0xa0, 0x00, 0x2b, 0x03, 0xa0, 0x0b, 0x00, 0x02, 0x00, 0x8b, 0x1f, 0x00, 
  0x05, 0xdf, 0xf7, 0x57, 0xdf, 0xd5, 0x40, 0x00, 0x17, 0x00, 0x20, 0x05, 0x00, 0x02, 0x00, 0x05, 0x15, 0x00, 
  0x2a, 0xab, 0xea, 0xaa, 0xfb, 0xfa, 0x80, 0x00, 0x0b, 0x00, 0x20, 0x02, 0x80, 0x02, 0x00, 0x2b, 0x11, 0x00, 
  0x01, 0x7f, 0xf5, 0xd5, 0x5f, 0x7f, 0x40, 0x00, 0x17, 0x80, 0x30, 0x05, 0x80, 0x02, 0x00, 0x01, 0x00, 0x00, 
  0x2a, 0xae, 0xfa, 0xfa, 0xaf, 0xef, 0x80, 0x00, 0x0b, 0x80, 0x70, 0x02, 0x80, 0x01, 0x00, 0x8b, 0x1f, 0x00, 
  0x05, 0xdf, 0xff, 0x5f, 0x55, 0xfd, 0x80, 0x00, 0x05, 0x80, 0x70, 0x01, 0x40, 0x01, 0x40, 0x05, 0x05, 0x00, 
  0x2a, 0xab, 0xeb, 0xab, 0xaa, 0xbe, 0xc0, 0x00, 0x03, 0xc0, 0xf0, 0x02, 0xc0, 0x01, 0x80, 0x2b, 0x1b, 0x00, 
  0x01, 0x7f, 0xfd, 0x55, 0x75, 0x57, 0x40, 0x00, 0x05, 0xf3, 0xf8, 0x01, 0x40, 0x01, 0x80, 0x01, 0x00, 0x00, 
  0x2a, 0xae, 0xff, 0xaa, 0xae, 0xab, 0xe4, 0x00, 0x02, 0xff, 0xfe, 0x03, 0xe0, 0x01, 0x40, 0x8b, 0x1f, 0x00, 
  0x05, 0xdf, 0xff, 0xf5, 0x55, 0xd5, 0xfa, 0x00, 0x3f, 0xc0, 0x7f, 0xdd, 0x60, 0x01, 0x00, 0x05, 0x15, 0x00, 
  0x2a, 0xab, 0xef, 0xff, 0xaa, 0xba, 0xf2, 0x1f, 0xc0, 0x00, 0x00, 0xf0, 0xb0, 0x00, 0x80, 0x2b, 0x1b, 0x00, 
  0x01, 0x7f, 0xf5, 0xff, 0xf5, 0x5d, 0x61, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x50, 0x00, 0x80, 0x01, 0x00, 0x00, 
  0x2a, 0xae, 0xea, 0xaf, 0xff, 0xab, 0xc8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb0, 0x00, 0x80, 0x8b, 0x1f, 0x00, 
  0x05, 0xdf, 0xff, 0xd7, 0xff, 0xf5, 0x10, 0x00, 0x00, 0x00, 0x01, 0x55, 0x58, 0x00, 0x80, 0x05, 0x15, 0x00, 
  0x2a, 0xab, 0xea, 0xff, 0xfa, 0xbe, 0x00, 0x00, 0x00, 0x02, 0xaa, 0xeb, 0xf8, 0x00, 0x80, 0x2b, 0x11, 0x00, 
  0x01, 0x7f, 0xf5, 0x55, 0xff, 0x54, 0x00, 0x15, 0x55, 0x55, 0x57, 0xfe, 0x58, 0x00, 0x80, 0x01, 0x00, 0x00, 
  0x2a, 0xae, 0xeb, 0xfb, 0xfe, 0xea, 0x00, 0xfa, 0xaa, 0xaa, 0xff, 0xf0, 0xa8, 0x00, 0x80, 0x8b, 0x1f, 0x00, 
  0x05, 0xdf, 0xf5, 0x57, 0xff, 0xd7, 0x40, 0x57, 0xff, 0x57, 0xff, 0xc0, 0x58, 0x00, 0x80, 0x05, 0x05, 0x00, 
  0x2a, 0xab, 0xea, 0xaa, 0xff, 0xab, 0xa0, 0x6a, 0xab, 0xf8, 0xff, 0x80, 0xa8, 0x00, 0x80, 0x2b, 0x1f, 0x00, 
  0x01, 0x7f, 0xf5, 0xff, 0xff, 0x77, 0xd4, 0x35, 0x55, 0x78, 0x3f, 0x00, 0x58, 0x00, 0xc0, 0x01, 0x00, 0x00, 
  0x2a, 0xae, 0xea, 0xaa, 0xff, 0xef, 0xfa, 0xea, 0xaa, 0xf0, 0x1f, 0x00, 0xa8, 0x00, 0x40, 0x8b, 0x1f, 0x00, 
  0x05, 0xdf, 0xf5, 0x55, 0x7f, 0x5f, 0xfd, 0xd5, 0x05, 0x70, 0x0e, 0x00, 0x58, 0x00, 0x40, 0x05, 0x03, 0x00, 
  0x2a, 0xab, 0xea, 0xba, 0xfa, 0xfe, 0xfe, 0x20, 0x02, 0xe0, 0x0e, 0x00, 0x2c, 0x00, 0x40, 0x2a, 0x9f, 0x00, 
  0x01, 0x7f, 0xf7, 0xd7, 0xfd, 0xfd, 0xfc, 0x00, 0x05, 0xe0, 0x0e, 0x00, 0x54, 0x00, 0x40, 0x01, 0x80, 0x00, 
  0x2a, 0xae, 0xfa, 0xfe, 0xfb, 0xfb, 0xac, 0x00, 0x02, 0xc0, 0x06, 0x00, 0x2c, 0x00, 0x40, 0x8a, 0xc0, 0x00, 
  0x05, 0xdf, 0xf7, 0x55, 0xff, 0xd5, 0x7c, 0x00, 0x05, 0xc0, 0x04, 0x00, 0x54, 0x00, 0x40, 0x04, 0x70, 0x00, 
  0x2a, 0xab, 0xea, 0xab, 0xff, 0xba, 0xf8, 0x00, 0x02, 0xc0, 0x04, 0x00, 0x2c, 0x02, 0xc0, 0x2a, 0xaf, 0x40, 
  0x01, 0x7f, 0xf5, 0x7d, 0xfd, 0x75, 0xd4, 0x00, 0x05, 0x80, 0x04, 0x00, 0x54, 0x55, 0x40, 0x01, 0x57, 0xe0, 
  0x2a, 0xae, 0xeb, 0xef, 0xfb, 0xab, 0xb8, 0x00, 0x0a, 0x80, 0x04, 0x00, 0x2e, 0xaa, 0xc0, 0x8a, 0xaa, 0xa0, 
  0x05, 0xdf, 0xfd, 0x7f, 0xdd, 0x5f, 0xf4, 0x00, 0x05, 0x80, 0x74, 0x00, 0x55, 0x55, 0xc0, 0x04, 0x5d, 0xe0, 
  0x2a, 0xab, 0xeb, 0xff, 0xba, 0xbe, 0xea, 0x00, 0x0b, 0x80, 0xfc, 0x00, 0x2e, 0xaa, 0x80, 0x2a, 0xaa, 0xa0, 
  0x01, 0x7f, 0xf7, 0xfd, 0x55, 0xfd, 0xf4, 0x00, 0x05, 0x00, 0xfc, 0x00, 0x55, 0x55, 0xc0, 0x01, 0x57, 0xe0, 
  0x2a, 0xae, 0xff, 0xea, 0xab, 0xef, 0xfa, 0x00, 0x0b, 0x00, 0xfc, 0x00, 0xae, 0xaa, 0x80, 0x8a, 0xaa, 0xa0, 
  0x05, 0xdf, 0xff, 0xd7, 0x5f, 0x5f, 0x54, 0x00, 0x05, 0x00, 0x74, 0x00, 0x55, 0x55, 0x40, 0x04, 0x5d, 0xe0, 
  0x2a, 0xab, 0xfe, 0xba, 0xfe, 0xfa, 0xfa, 0x00, 0x0b, 0x00, 0x04, 0x00, 0xae, 0xab, 0x80, 0x2a, 0xaa, 0xa0, 
  0x01, 0x7f, 0xf5, 0x77, 0xf7, 0xf7, 0xdc, 0x00, 0x05, 0x80, 0x04, 0x00, 0x55, 0x55, 0x40, 0x01, 0x57, 0xe0, 
  0x2a, 0xae, 0xeb, 0xaf, 0xaf, 0xaa, 0xba, 0x00, 0x02, 0x80, 0x04, 0x00, 0xaa, 0xab, 0xc0, 0x8a, 0xaa, 0xa0, 
  0x05, 0xdf, 0xf7, 0x7f, 0x7d, 0x55, 0xdd, 0x00, 0x05, 0x80, 0x04, 0x00, 0x5d, 0x57, 0x40, 0x04, 0x5d, 0xe0, 
  0x2a, 0xab, 0xfa, 0xfb, 0xfa, 0xae, 0xbe, 0x80, 0x02, 0x80, 0x04, 0x00, 0xba, 0xaa, 0x80, 0x2a, 0xaa, 0xa0, 
  0x01, 0x7f, 0xf7, 0xf7, 0xd7, 0x75, 0xf5, 0x00, 0x01, 0x80, 0x04, 0x01, 0x7d, 0x57, 0x40, 0x01, 0x57, 0xe0, 
  0x2a, 0xae, 0xef, 0xbf, 0xbe, 0xae, 0xbe, 0x80, 0x02, 0xc0, 0x04, 0x00, 0xfa, 0xaa, 0xc0, 0x8a, 0xaa, 0xa0, 
  0x05, 0xdf, 0xfd, 0xff, 0xfd, 0x55, 0xf7, 0x40, 0x01, 0x40, 0x04, 0x03, 0xfd, 0x57, 0xc0, 0x04, 0x5d, 0xe0, 
  0x2a, 0xab, 0xfb, 0xff, 0xfa, 0xaf, 0xae, 0xa0, 0x00, 0xa0, 0x04, 0x07, 0xfa, 0xab, 0x80, 0x2a, 0xaa, 0xa0, 
  0x81, 0x7f, 0xff, 0xff, 0xd5, 0x7d, 0x7d, 0x40, 0x00, 0x5c, 0x0c, 0x1f, 0xf5, 0x57, 0x40, 0x01, 0x57, 0xd0, 
  0xaa, 0xae, 0xfe, 0xff, 0xab, 0xeb, 0xaf, 0xa0, 0x00, 0x2b, 0xfc, 0x3e, 0xfa, 0xae, 0x80, 0x8a, 0xaa, 0x90, 
  0xc5, 0xdf, 0xfd, 0xfd, 0x5f, 0xdd, 0x7d, 0xd0, 0x00, 0x55, 0xfe, 0xfd, 0xf5, 0x55, 0x40, 0x04, 0x5d, 0xb0, 
  0xe2, 0xab, 0xef, 0xfa, 0xfe, 0xab, 0xeb, 0xea, 0x00, 0x2b, 0xff, 0xff, 0xea, 0xaa, 0xc0, 0x2a, 0xaa, 0x70, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xf0, 
};

const lv_img_dsc_t crystal_02 = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 140,
  .header.h = 68,
  .data_size = 1232,
  .data = crystal_02_map,
};
