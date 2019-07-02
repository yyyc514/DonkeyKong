#pragma once

namespace Images {

  #ifndef DEBUG
  const uint8_t PROGMEM Ppot_Buttons[] = {
  36, 8,
  0x0e, 0x1f, 0x1f, 0x1f, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x0e, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x0e, 0x1f, 0x00, 0x04, 0x0e, 0x1f, 0x00, 
  };
  #else
  const uint8_t PROGMEM Ppot_Buttons[] = {
  0x00 ,0x07, 0x3d
  };
  #endif  
  
  #ifndef DEBUG
  const uint8_t PROGMEM Ppot_ButtonUp[] = {
  14, 16,
  0xa7, 0xc7, 0xa7, 0xc7, 0xa7, 0xc7, 0xa7, 0xc7, 0xa7, 0xc7, 0xa7, 0xc7, 0xa7, 0x00, 
  0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x00, 
  };
  #else
  const uint8_t PROGMEM Ppot_ButtonUp[] = {
  0x00 ,0x07, 0x3d
  };
  #endif  
  
  #ifndef DEBUG
  const uint8_t PROGMEM Ppot_ButtonDown[] = {
  14, 16,
  0xbe, 0xbd, 0xbe, 0xbd, 0xbe, 0xbd, 0xbe, 0xbd, 0xbe, 0xbd, 0xbe, 0xbd, 0xbe, 0x00, 
  0x00, 0x04, 0x00, 0x04, 0x00, 0x04, 0x00, 0x04, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 
  };
  #else
  const uint8_t PROGMEM Ppot_ButtonDown[] = {
  0x00 ,0x07, 0x3d
  };
  #endif  

  #ifndef DEBUG
  const uint8_t PROGMEM Ppot_Caption[] = {
  78, 8,
  0x0f, 0x0d, 0x07, 0x02, 0x00, 0x0f, 0x05, 0x0f, 0x0a, 0x00, 0x0f, 0x0d, 0x09, 0x00, 0x02, 0x0b, 0x0d, 0x00, 0x02, 0x0b, 0x0d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x0d, 0x07, 0x02, 0x00, 0x0f, 0x0f, 0x08, 0x08, 0x00, 0x0e, 0x03, 0x03, 0x0e, 0x00, 0x03, 0x0e, 0x0e, 0x03, 0x00, 0x00, 0x00, 0x06, 0x09, 0x0b, 0x06, 0x00, 0x0f, 0x02, 0x03, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x01, 0x0f, 0x0f, 0x01, 0x0e, 0x03, 0x03, 0x0e, 0x00, 0x0f, 0x0d, 0x07, 0x02, 0x00, 0x0f, 0x0d, 0x09, 
  };
  #else
  const uint8_t PROGMEM Ppot_Caption[] = {
  0x00 ,0x07, 0x3d
  };
  #endif 
  
  #ifndef DEBUG
  const uint8_t PROGMEM Ppot_Loading[] = {
  33, 8,
  0x0f, 0x0f, 0x08, 0x08, 0x00, 0x06, 0x09, 0x0b, 0x06, 0x00, 0x0e, 0x03, 0x03, 0x0e, 0x00, 0x0f, 0x09, 0x0f, 0x06, 0x00, 0x0f, 0x0f, 0x00, 0x0f, 0x02, 0x03, 0x0f, 0x00, 0x0e, 0x0f, 0x09, 0x0d, 0x00, 
  };
  #else
  const uint8_t PROGMEM Ppot_Loading[] = {
  0x00 ,0x07, 0x3d
  };
  #endif   
  
  #ifndef DEBUG
  const uint8_t PROGMEM PressAandB[] = {
  57, 12,
  0x00, 0x78, 0xfc, 0x8e, 0xd6, 0xda, 0xd6, 0x8e, 0xfc, 0x78, 0x00, 0x00, 0x78, 0x58, 0x00, 0x70, 0x28, 0x70, 0x00, 0x10, 0x48, 0x20, 0x00, 0x08, 0x70, 0x08, 0x00, 0x00, 0x00, 0x00, 0x78, 0xfc, 0x82, 0xaa, 0xaa, 0xaa, 0x96, 0xfc, 0x78, 0x00, 0x00, 0x78, 0x20, 0x78, 0x00, 0x70, 0x28, 0x70, 0x00, 0x78, 0x28, 0x50, 0x00, 0x78, 0x48, 0x30, 0x00, 
  0x00, 0x01, 0x02, 0x05, 0x05, 0x05, 0x05, 0x05, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x05, 0x05, 0x05, 0x05, 0x05, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  };
  #else
  const uint8_t PROGMEM PressA[] = {
  0x00 ,0x07, 0x3d
  };
  #endif   

  #ifndef DEBUG
  const uint8_t PROGMEM PressAandB_Mask[] = {
  0xf8, 0x7c, 0xfe, 0x8f, 0xd7, 0xdb, 0xd7, 0x8f, 0xfe, 0x7c, 0xf8, 0x78, 0xfc, 0xfc, 0x78, 0xf8, 0x7c, 0xf8, 0x70, 0x78, 0xec, 0x78, 0x28, 0x7c, 0xf8, 0x7c, 0x08, 0x00, 0x00, 0xf8, 0x7c, 0xfe, 0x83, 0xab, 0xab, 0xab, 0x97, 0xfe, 0x7c, 0xf8, 0x78, 0xfc, 0x78, 0xfc, 0x70, 0xf8, 0x7c, 0xf8, 0x78, 0xfc, 0x7c, 0xf8, 0x78, 0xfc, 0xfc, 0x78, 0x30, 
  0x01, 0x03, 0x06, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x06, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x06, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x06, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  };
  #else
  const uint8_t PROGMEM PressA_Mask[] = {
  0x00 ,0x07, 0x3d
  };
  #endif   

  const unsigned char PROGMEM Title[] = {
  // width, height,
  128, 64,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0f, 0xf7, 0xfb, 0x1d, 0x0d, 0x0d, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x05, 0x0d, 0x0d, 0x1b, 0x33, 0x67, 0xc3, 0xbb, 0x1d, 0x0c, 0x06, 0x06, 0xc2, 0xc3, 0x63, 0x62, 0xc6, 0x86, 0x04, 0x0d, 0x19, 0x31, 0xe4, 0x86, 0x06, 0x0c, 0x39, 0xe3, 0x8f, 0x3f, 0x03, 0xfd, 0xfe, 0x06, 0x02, 0x02, 0x02, 0x06, 0xfe, 0xe5, 0x02, 0x02, 0x02, 0x02, 0x06, 0xfe, 0xfd, 0x03, 0x3f, 0xcf, 0xf3, 0x3d, 0x0d, 0x05, 0x05, 0x05, 0x85, 0xed, 0x3b, 0x09, 0x05, 0x05, 0x06, 0x02, 0x02, 0x02, 0x02, 0x8e, 0xfd, 0x70, 0x02, 0x02, 0x06, 0x3c, 0xe1, 0x0f, 0x7f, 0x1f, 0xe7, 0xfb, 0x1d, 0x0d, 0x05, 0x05, 0x05, 0xc5, 0x75, 0xbd, 0xc3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x87, 0x7f, 0xf0, 0x00, 0x00, 0x00, 0x3c, 0xfe, 0x86, 0x76, 0xe6, 0x9e, 0x7c, 0xf0, 0x80, 0x00, 0x00, 0x01, 0x1f, 0xfc, 0x80, 0xec, 0xef, 0xf3, 0xfc, 0xff, 0xfe, 0xf1, 0xef, 0xde, 0x58, 0x58, 0xb0, 0xf0, 0x6f, 0xfe, 0xe0, 0x00, 0x00, 0x01, 0x07, 0x0c, 0x0c, 0x07, 0x02, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x0c, 0x07, 0x03, 0x00, 0x00, 0x80, 0xe0, 0x38, 0x4e, 0xf3, 0x80, 0x00, 0x00, 0x00, 0x06, 0x1f, 0x31, 0x31, 0x19, 0x19, 0x19, 0x18, 0xf0, 0xc0, 0x00, 0x80, 0x00, 0x03, 0x07, 0x06, 0x07, 0x03, 0x00, 0x80, 0xc0, 0x70, 0x9c, 0xe7, 0xf9, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x1f, 0xff, 0xe0, 0x00, 0x00, 0x03, 0x1f, 0x30, 0x27, 0x33, 0x3c, 0x0f, 0x01, 0x00, 0x00, 0xc0, 0x7c, 0x1f, 0xc0, 0x7f, 0x6f, 0x77, 0x37, 0x6f, 0xdf, 0xbf, 0x8f, 0xf0, 0xff, 0xff, 0x21, 0x80, 0xe0, 0x3f, 0x03, 0x00, 0x00, 0xf0, 0x10, 0x10, 0x70, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0x00, 0x00, 0x00, 0xf8, 0xf8, 0x0c, 0x78, 0xf0, 0x00, 0x00, 0x00, 0x01, 0x07, 0x3c, 0xe0, 0x8f, 0x7f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x66, 0xc2, 0xda, 0xda, 0x5b, 0x6b, 0x69, 0x6c, 0xe1, 0x0f, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0x01, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xc3, 0xbf, 0x7c, 0x70, 0x60, 0x60, 0xa0, 0xb0, 0xb0, 0xd0, 0x58, 0x2c, 0xb6, 0xa3, 0xa9, 0xb8, 0xb8, 0xb0, 0x30, 0x20, 0x60, 0x60, 0x60, 0xe0, 0xb1, 0xb1, 0xb1, 0xd9, 0x8c, 0x26, 0x63, 0x61, 0x60, 0x60, 0x60, 0x60, 0x7f, 0xbf, 0xc0, 0xfc, 0xf1, 0xc7, 0x9c, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0x9f, 0xce, 0xac, 0xbc, 0xdf, 0xe1, 0xfc, 0xe0, 0xcf, 0xbf, 0x70, 0x60, 0x60, 0x60, 0x60, 0x60, 0x67, 0x7e, 0x33, 0x00, 0x40, 0x40, 0x60, 0x60, 0x60, 0x20, 0xa0, 0xa0, 0xb0, 0xb0, 0xb0, 0x90, 0xdf, 0x9c, 0xa0, 0xa0, 0xa0, 0xa0, 0xa1, 0xbf, 0xdc, 0xe3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x81, 0x7e, 0xff, 0x83, 0x01, 0x00, 0x00, 0x00, 0x00, 0x03, 0xfe, 0x01, 0x0f, 0xf3, 0x7d, 0x05, 0x06, 0x06, 0x06, 0x06, 0xe6, 0x7d, 0x05, 0x19, 0x0d, 0x0d, 0x06, 0x86, 0xc6, 0x46, 0xc6, 0x85, 0x0d, 0x0d, 0x19, 0x30, 0xe0, 0xcc, 0x19, 0x3b, 0xe7, 0xcf, 0x3f, 0x7f, 0x07, 0xf9, 0x0e, 0x02, 0x02, 0x02, 0x06, 0x7e, 0xf9, 0x07, 0xcf, 0xe7, 0x73, 0x19, 0x1d, 0x0d, 0x04, 0x06, 0x86, 0x86, 0x06, 0x04, 0x0d, 0x0d, 0x1b, 0x33, 0x77, 0xcf, 0x1f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x1f, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x06, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x1f, 0x63, 0xdc, 0xb6, 0x76, 0xf4, 0xf6, 0xfb, 0xfd, 0xfe, 0xff, 0xf0, 0xef, 0xef, 0xd8, 0x50, 0x30, 0xe0, 0xc7, 0xff, 0xfc, 0x00, 0x00, 0x03, 0x07, 0x0e, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xc0, 0x00, 0x00, 0xc0, 0xfc, 0x1e, 0xe3, 0x31, 0xdc, 0xdc, 0xd9, 0xd3, 0xd7, 0xd6, 0xb4, 0xac, 0xac, 0xaf, 0x6f, 0x70, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x3f, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xc8, 0x08, 0x30, 0xf0, 0x80, 0x00, 0x01, 0x07, 0x0e, 0x19, 0x35, 0xef, 0x9f, 0x17, 0x17, 0x3f, 0x6f, 0xdf, 0xbf, 0xb9, 0xc6, 0x7e, 0x03, 0x83, 0xe1, 0x3c, 0x0f, 0x03, 0x00, 0x00, 0xf0, 0xf0, 0x10, 0x30, 0xe0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x7f, 0xf0, 0x00, 0x0f, 0x3f, 0x70, 0xe7, 0xc0, 0xdf, 0xef, 0x78, 0x30, 0x00, 0x00, 0x00, 0x01, 0xc1, 0xff, 0x0f, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0xdf, 0xbc, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xdf, 0xdf, 0xe0, 0xfe, 0xf9, 0xe7, 0xde, 0xd8, 0xd8, 0xd8, 0xd8, 0xd8, 0xc8, 0x8b, 0xaf, 0xa4, 0xb0, 0xb0, 0xb0, 0xd1, 0xd9, 0xd8, 0xcc, 0xe6, 0xc3, 0x99, 0xb0, 0xa0, 0xa0, 0xa0, 0xa0, 0xb1, 0xbf, 0x9c, 0xc2, 0xfc, 0xf9, 0xf7, 0xee, 0xdc, 0xd8, 0xd8, 0xe8, 0xec, 0xef, 0xc6, 0x90, 0xb8, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0x70, 0x60, 0x60, 0x60, 0x60, 0x7f, 0x83, 0xf8, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  };

}