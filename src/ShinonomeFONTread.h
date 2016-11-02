/*
  ShinonomeFONTread.h - for ESP-WROOM-02 ( esp8266 )
  Beta version 1.33
  This is the Arduino library for reading Shinonome font. (For ESP8266) 
  
The MIT License (MIT)

Copyright (c) 2016 Mgo-tec
Blog URL ---> https://www.mgo-tec.com

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

FS.h(SPIFFS-File system) - Included library
-->https://github.com/esp8266/arduino-esp8266fs-plugin
Copyright (c) 2015 Ivan Grokhotkov. All rights reserved.
Released under the GNU LESSER GENERAL PUBLIC LICENSE Version 2.1

Licence of Shinonome Font is Public Domain.
Maintenance development of Font is /efont/.
*/

#ifndef ShinonomeFONTread_h_
#define ShinonomeFONTread_h_
#include "Arduino.h"
#include "FS.h"

class ShinonomeFONTread
{
public:
  ShinonomeFONTread();
  uint8_t SjisToShinonome16FontRead(const char* FNT_file_16x16, const char* FNT_file_8x16, uint8_t Direction, int16_t Angle, uint8_t jisH, uint8_t jisL, uint8_t* buf1, uint8_t* buf2);
  void SjisToShinonome16FontRead_ALL(const char* FNT_file_16x16, const char* FNT_file_8x16, uint8_t Direction, int16_t Angle, uint8_t* Sjis, uint16_t sj_length, uint8_t font_buf[][16]);
  void SjisToShinonomeFNTadrs(uint8_t jisH, uint8_t jisL, uint32_t* fnt_adrs);
  void SPIFFS_Flash_ShinonomeFNTread(const char* font_file, uint32_t addrs, uint8_t* buf1, uint8_t* buf2);
  void SPIFFS_Flash_ShinonomeFNTread_FHN(File ff, uint32_t addrs, uint8_t* buf1, uint8_t* buf2);
  void SPIFFS_Flash_ShinonomeFNTread_Harf(const char* font_file, uint32_t addrs, uint8_t* buf);
  void SPIFFS_Flash_ShinonomeFNTread_Harf_FHN(File ff, uint32_t addrs, uint8_t* buf);
private:
};

#endif