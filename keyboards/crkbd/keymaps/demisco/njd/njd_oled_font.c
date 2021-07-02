#pragma once

#include "progmem.h"

static const unsigned char PROGMEM font[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x0C, 0x30, 0x00, 0x3C, 0x08, 0x04, 0x38, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x0C, 0x30, 0x00, 0x3C, 0x08, 0x04, 0x08, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x18, 0x18,
	0x00, 0x00, 0x00, 0x1F, 0x1F, 0x18, 0x18, 0x18,
	0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xF8, 0xF8, 0x18, 0x18, 0x18,
	0x00, 0x00, 0x00, 0xFF, 0xFF, 0x18, 0x18, 0x18,
	0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00,
	0x18, 0x18, 0x18, 0x1F, 0x1F, 0x00, 0x00, 0x00,
	0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
	0x18, 0x18, 0x18, 0x1F, 0x1F, 0x18, 0x18, 0x18,
	0x18, 0x18, 0x18, 0xF8, 0xF8, 0x00, 0x00, 0x00,
	0x18, 0x18, 0x18, 0xFF, 0xFF, 0x00, 0x00, 0x00,
	0x18, 0x18, 0x18, 0xF8, 0xF8, 0x18, 0x18, 0x18,
	0x18, 0x18, 0x18, 0xFF, 0xFF, 0x18, 0x18, 0x18,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x07, 0x07, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x18,
	0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x0E, 0x1C,
	0x00, 0x00, 0x00, 0xE0, 0xE0, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xE7, 0xE7, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0x70, 0x38,
	0x00, 0x00, 0x00, 0x81, 0xC3, 0xE7, 0x7E, 0x3C,
	0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x1C, 0x0E, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00,
	0x18, 0x18, 0x18, 0x00, 0x00, 0x18, 0x18, 0x18,
	0x1C, 0x0E, 0x07, 0x03, 0x03, 0x07, 0x0E, 0x1C,
	0x38, 0x70, 0xE0, 0xC0, 0x80, 0x00, 0x00, 0x00,
	0x3C, 0x7E, 0xE7, 0xC3, 0x81, 0x00, 0x00, 0x00,
	0x38, 0x70, 0xE0, 0xC0, 0xC0, 0xE0, 0x70, 0x38,
	0x3C, 0x7E, 0xE7, 0xC3, 0xC3, 0xE7, 0x7E, 0x3C,
	0x00, 0x00, 0x3C, 0x3C, 0x3C, 0x3C, 0x00, 0x00,
	0x00, 0x00, 0x3F, 0x3F, 0x3F, 0x3F, 0x00, 0x00,
	0x00, 0x00, 0x3C, 0x3C, 0x3C, 0x3C, 0x3C, 0x3C,
	0x00, 0x00, 0x3F, 0x3F, 0x3F, 0x3F, 0x3C, 0x3C,
	0x00, 0x00, 0xFC, 0xFC, 0xFC, 0xFC, 0x00, 0x00,
	0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00,
	0x00, 0x00, 0xFC, 0xFC, 0xFC, 0xFC, 0x3C, 0x3C,
	0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x3C, 0x3C,
	0x3C, 0x3C, 0x3C, 0x3C, 0x3C, 0x3C, 0x00, 0x00,
	0x3C, 0x3C, 0x3F, 0x3F, 0x3F, 0x3F, 0x00, 0x00,
	0x3C, 0x3C, 0x3C, 0x3C, 0x3C, 0x3C, 0x3C, 0x3C,
	0x3C, 0x3C, 0x3F, 0x3F, 0x3F, 0x3F, 0x3C, 0x3C,
	0x3C, 0x3C, 0xFC, 0xFC, 0xFC, 0xFC, 0x00, 0x00,
	0x3C, 0x3C, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00,
	0x3C, 0x3C, 0xFC, 0xFC, 0xFC, 0xFC, 0x3C, 0x3C,
	0x3C, 0x3C, 0xFF, 0xFF, 0xFF, 0xFF, 0x3C, 0x3C,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF,
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xFF,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
	0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xFF,
	0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0xFF,
	0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xFF, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
	0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF,
	0xFF, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xFF,
	0xFF, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
	0xFF, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81,
	0xFF, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xFF,
	0xFF, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0xFF,
	0x00, 0x00, 0x00, 0x1F, 0x1F, 0x18, 0x18, 0x19,
	0x00, 0x00, 0x00, 0x1F, 0x1F, 0x18, 0x18, 0x1F,
	0x00, 0x00, 0x00, 0x1F, 0x1F, 0x19, 0x19, 0x19,
	0x00, 0x00, 0x00, 0x18, 0x1C, 0x0E, 0x07, 0x03,
	0x00, 0x00, 0x00, 0xF8, 0xF8, 0x18, 0x18, 0x98,
	0x00, 0x00, 0x00, 0xF8, 0xF8, 0x18, 0x18, 0xF8,
	0x00, 0x00, 0x00, 0xF8, 0xF8, 0x98, 0x98, 0x98,
	0x00, 0x00, 0x00, 0x18, 0x38, 0x70, 0xE0, 0xC0,
	0x98, 0x18, 0x18, 0xF8, 0xF8, 0x00, 0x00, 0x00,
	0xF8, 0x18, 0x18, 0xF8, 0xF8, 0x00, 0x00, 0x00,
	0x98, 0x98, 0x98, 0xF8, 0xF8, 0x00, 0x00, 0x00,
	0xC0, 0xE0, 0x70, 0x38, 0x18, 0x00, 0x00, 0x00,
	0x19, 0x18, 0x18, 0x1F, 0x1F, 0x00, 0x00, 0x00,
	0x1F, 0x18, 0x18, 0x1F, 0x1F, 0x00, 0x00, 0x00,
	0x19, 0x19, 0x19, 0x1F, 0x1F, 0x00, 0x00, 0x00,
	0x03, 0x07, 0x0E, 0x1C, 0x18, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x1F,
	0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0xFF,
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x1F,
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xFF,
	0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0xF8,
	0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0xFF,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xF8,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xFF,
	0xF8, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00,
	0xFF, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00,
	0xF8, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
	0xFF, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
	0x1F, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00,
	0xFF, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00,
	0x1F, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
	0xFF, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
	0x01, 0x01, 0x01, 0x1F, 0x1F, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x1F, 0x1F, 0x01, 0x01, 0x01,
	0x01, 0x01, 0x01, 0xFF, 0xFF, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xFF, 0xFF, 0x01, 0x01, 0x01,
	0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x18, 0x1F,
	0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x18, 0xF8,
	0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x1F,
	0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0xF8,
	0x80, 0x80, 0x80, 0xF8, 0xF8, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xF8, 0xF8, 0x80, 0x80, 0x80,
	0x80, 0x80, 0x80, 0xFF, 0xFF, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xFF, 0xFF, 0x80, 0x80, 0x80,
	0x1F, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00,
	0xF8, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00,
	0x1F, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
	0xF8, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
	0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00,
	0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8,
	0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00,
	0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
