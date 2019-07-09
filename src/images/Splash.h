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
  
  const uint8_t PROGMEM Ppot_Loading[] = {
  33, 8,
  0x0f, 0x0f, 0x08, 0x08, 0x00, 0x06, 0x09, 0x0b, 0x06, 0x00, 0x0e, 0x03, 0x03, 0x0e, 0x00, 0x0f, 0x09, 0x0f, 0x06, 0x00, 0x0f, 0x0f, 0x00, 0x0f, 0x02, 0x03, 0x0f, 0x00, 0x0e, 0x0f, 0x09, 0x0d, 0x00, 
  };

  #ifndef DEBUG
  const uint8_t PROGMEM PressAandB[] = {
  68, 16,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbc, 0x7e, 0xc7, 0xeb, 0xed, 0xeb, 0xc7, 0x7e, 0xbc, 0x00, 0x00, 0x3c, 0x2c, 0x00, 0x38, 0x14, 0x38, 0x00, 0x08, 0x24, 0x10, 0x00, 0x04, 0x38, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbc, 0x7e, 0xc1, 0xd5, 0xd5, 0xd5, 0xcb, 0x7e, 0xbc, 0x00, 0x00, 0x3c, 0x10, 0x3c, 0x00, 0x38, 0x14, 0x38, 0x00, 0x3c, 0x14, 0x28, 0x00, 0x3c, 0x24, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  };
  #else
  const uint8_t PROGMEM PressAandB[] = {
  0x01 ,0x01, 0x01
  };
  #endif 

  #ifndef DEBUG
  const uint8_t PROGMEM PressAandB_Mask[] = {
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  };
  #else
  const uint8_t PROGMEM PressAandB_Mask[] = {
  0x01 ,0x01, 0x01
  };
  #endif 

  #ifndef DEBUG
  const uint8_t PROGMEM Title[] = {
  105, 52,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x02, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0x02, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0x02, 0x7c, 0x90, 0xe8, 0xf4, 0xfa, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfa, 0xf4, 0xe8, 0x90, 0xfc, 0x02, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xf3, 0xcc, 0x02, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0x02, 0xdc, 0xe8, 0xf4, 0xfa, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfa, 0xf4, 0xe8, 0xd0, 0x20, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xfe, 0x00, 0xff, 0xbf, 0x7f, 0x7f, 0x3f, 0xbf, 0xbf, 0xbc, 0x7e, 0x7f, 0x7f, 0xbf, 0x7f, 0xb7, 0xcb, 0x35, 0xc2, 0x02, 0x02, 0xff, 0x00, 0xff, 0xbf, 0x7f, 0xbf, 0x7f, 0xbf, 0xff, 0x01, 0xfe, 0x00, 0x01, 0xff, 0x7f, 0xbf, 0x7f, 0xbf, 0x7f, 0xff, 0x00, 0xff, 0xfe, 0x00, 0xff, 0xbf, 0x7f, 0xbf, 0x7f, 0xbf, 0xff, 0x7f, 0xff, 0xbf, 0x7c, 0xb0, 0x7f, 0xbf, 0x7f, 0xbf, 0x7f, 0xbf, 0xff, 0x00, 0xfe, 0x00, 0xff, 0xbf, 0x7f, 0xbf, 0x7f, 0xbf, 0xff, 0x00, 0xfe, 0x0e, 0xec, 0xab, 0x6b, 0xab, 0x6b, 0xab, 0x6b, 0xeb, 0x0c, 0xf3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x08, 0xf7, 0xb0, 0xdf, 0xaa, 0xd0, 0x80, 0x03, 0x35, 0x4e, 0x7d, 0x6f, 0x15, 0xfa, 0xaf, 0xd5, 0xaa, 0xd7, 0xae, 0xd9, 0xb6, 0xf4, 0x0f, 0xf0, 0x8f, 0x7a, 0xd5, 0xaa, 0xd5, 0xaa, 0xdf, 0xb8, 0xd7, 0xb4, 0xd8, 0xaf, 0xd5, 0xaa, 0xd5, 0xea, 0x7d, 0x8f, 0xf0, 0x0f, 0xf7, 0xb0, 0xdf, 0xaa, 0xd5, 0xaa, 0xd5, 0xaa, 0xdf, 0xb0, 0xf1, 0x07, 0x9d, 0x7a, 0xd5, 0xaa, 0xd5, 0xaa, 0xd5, 0xaa, 0xff, 0x00, 0xff, 0x40, 0xbf, 0x6a, 0xd5, 0xaa, 0xd5, 0xaa, 0xdf, 0xb0, 0xd7, 0xb4, 0xd3, 0xbe, 0xd5, 0x6a, 0x35, 0x0a, 0x95, 0x9f, 0x80, 0x9f, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3b, 0x78, 0xea, 0xba, 0x3a, 0x3a, 0x2a, 0xba, 0x78, 0xb8, 0x6b, 0x3a, 0x79, 0xea, 0xb8, 0x3a, 0x3a, 0x2a, 0xba, 0x7a, 0xba, 0x6a, 0x3a, 0x78, 0xeb, 0xb8, 0x39, 0x3a, 0x28, 0xba, 0x7a, 0xba, 0x6a, 0x3a, 0x7a, 0xea, 0xba, 0x3a, 0x3a, 0x28, 0xba, 0x79, 0xb8, 0x6b, 0x38, 0x7a, 0xea, 0xba, 0x3a, 0x3a, 0x2a, 0xba, 0x7a, 0xba, 0x6a, 0x3a, 0x78, 0xeb, 0xba, 0x38, 0x3a, 0x2a, 0xba, 0x7a, 0xba, 0x6a, 0x38, 0x7b, 0xe8, 0xb8, 0x39, 0x3a, 0x28, 0xba, 0x7a, 0xba, 0x6a, 0x3a, 0x3a, 0x0a, 0x00, 0xe0, 0x1c, 0x82, 0x61, 0xbc, 0xb2, 0xa8, 0xa8, 0xb2, 0xbc, 0x61, 0x82, 0x1c, 0xe0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x05, 0x07, 0x06, 0x05, 0x06, 0x05, 0x04, 0x04, 0x04, 0x04, 0x04, 0x05, 0x07, 0x06, 0x05, 0x06, 0x05, 0x04, 0x04, 0x04, 0x04, 0x04, 0x05, 0x07, 0x06, 0x05, 0x06, 0x05, 0x04, 0x04, 0x04, 0x04, 0x04, 0x05, 0x07, 0x06, 0x05, 0x06, 0x05, 0x04, 0x04, 0x04, 0x04, 0x04, 0x05, 0x07, 0x06, 0x05, 0x06, 0x05, 0x04, 0x04, 0x04, 0x04, 0x04, 0x05, 0x07, 0x06, 0x05, 0x06, 0x05, 0x04, 0x04, 0x04, 0x04, 0x04, 0x05, 0x07, 0x06, 0x05, 0x06, 0x05, 0x04, 0x00, 0x00, 0x1c, 0x62, 0x81, 0x09, 0x72, 0xf4, 0xd1, 0x6b, 0x9a, 0xf2, 0xf2, 0x9a, 0x6b, 0xd1, 0xf4, 0x72, 0x09, 0x81, 0x62, 0x1c, 
  0x90, 0x10, 0x50, 0xd0, 0x90, 0x10, 0x90, 0x10, 0x50, 0xd0, 0x90, 0x10, 0x90, 0x10, 0x50, 0xd0, 0x90, 0x10, 0x90, 0x10, 0x50, 0xd0, 0x90, 0x10, 0x90, 0x10, 0x50, 0xd0, 0x90, 0x10, 0x90, 0x10, 0x50, 0xd0, 0x90, 0x10, 0x90, 0x10, 0x50, 0xd0, 0x90, 0x10, 0x90, 0x10, 0x50, 0xd0, 0x90, 0x10, 0x90, 0x10, 0x50, 0xd0, 0x90, 0x10, 0x90, 0x10, 0x50, 0xd0, 0x90, 0x10, 0x90, 0x10, 0x50, 0xd0, 0x90, 0x10, 0x90, 0x10, 0x50, 0xd0, 0x90, 0x10, 0x90, 0x10, 0x50, 0xd0, 0x90, 0x10, 0x90, 0x50, 0xd0, 0x90, 0x10, 0x90, 0x10, 0x50, 0xd6, 0x92, 0x15, 0x94, 0x14, 0x16, 0x55, 0xd0, 0x90, 0x10, 0x90, 0x15, 0x56, 0xd4, 0x94, 0x15, 0x92, 0x16, 0x10, 
  0x02, 0x03, 0x02, 0x02, 0x03, 0x03, 0x02, 0x03, 0x02, 0x02, 0x03, 0x03, 0x02, 0x03, 0x02, 0x02, 0x03, 0x03, 0x02, 0x03, 0x02, 0x02, 0x03, 0x03, 0x02, 0x03, 0x02, 0x02, 0x03, 0x03, 0x02, 0x03, 0x02, 0x02, 0x03, 0x03, 0x02, 0x03, 0x02, 0x02, 0x03, 0x03, 0x02, 0x03, 0x02, 0x02, 0x03, 0x03, 0x02, 0x03, 0x02, 0x02, 0x03, 0x03, 0x02, 0x03, 0x02, 0x02, 0x03, 0x03, 0x02, 0x03, 0x02, 0x02, 0x03, 0x03, 0x02, 0x03, 0x02, 0x02, 0x03, 0x03, 0x02, 0x03, 0x02, 0x02, 0x03, 0x03, 0x02, 0x02, 0x02, 0x03, 0x03, 0x02, 0x03, 0x02, 0x02, 0x03, 0x03, 0x02, 0x03, 0x02, 0x02, 0x02, 0x03, 0x03, 0x02, 0x03, 0x02, 0x02, 0x03, 0x03, 0x02, 0x03, 0x02, 
  };
  #else
  const uint8_t PROGMEM Title[] = {
  0x01 ,0x01, 0x01
  };
  #endif 

}