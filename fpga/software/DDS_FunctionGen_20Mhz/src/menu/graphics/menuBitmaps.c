/*
 * menuBitmaps.c
 *
 *  Created on: 14 feb 2018
 *      Author: Windows7
 */

#include "../../lcd/GLCD.h"
#include "menuBitmaps.h"
#include <stdint.h>

static const uint8_t bmp_8x8_ArrowReturn_data[] 	= {0x00, 0x10, 0x38, 0x7C, 0x38, 0x3F, 0x3F, 0x00};
const s_GLCD_Bitmap bmp_8x8_ArrowReturn 			= { 8, 8, bmp_8x8_ArrowReturn_data };

static const uint8_t bmp_12x12_ArrowReturn_data[] 	= {0x00, 0x0C, 0x1E, 0x3F, 0x7F, 0x7F, 0x1C, 0x1C, 0x1C, 0x1F, 0x1F, 0x1F,
													   0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0xC0};
const s_GLCD_Bitmap bmp_12x12_ArrowReturn 			= { 12, 12, bmp_12x12_ArrowReturn_data };

static const uint8_t bmp_8x8_ArrowUp_data[] 		= {0x06, 0x0E, 0x1E, 0x3E, 0x3E, 0x1E, 0x0E, 0x06};
const s_GLCD_Bitmap bmp_8x8_ArrowUp 				= { 8, 8, bmp_8x8_ArrowUp_data };

static const uint8_t bmp_8x8_ArrowDown_data[] 		= {0x30, 0x38, 0x3C, 0x3E, 0x3E, 0x3C, 0x38, 0x30};
const s_GLCD_Bitmap bmp_8x8_ArrowDown 				= {8, 8, bmp_8x8_ArrowDown_data };

static const uint8_t bmp_8x8_ArrowLeft_data[] 		= {0x00, 0x00, 0x18, 0x3C, 0x7E, 0xFF, 0xFF, 0x00};
const s_GLCD_Bitmap bmp_8x8_ArrowLeft 				= { 8, 8, bmp_8x8_ArrowLeft_data };

static const uint8_t bmp_8x8_ArrowRight_data[] 		= {0x00, 0xFF, 0xFF, 0x7E, 0x3C, 0x18, 0x00, 0x00};
const s_GLCD_Bitmap bmp_8x8_ArrowRight 				= { 8, 8, bmp_8x8_ArrowRight_data };

static const uint8_t bmp_2x3_SmallArrowLeft_data[] 	= {0x40, 0xE0};
const s_GLCD_Bitmap bmp_2x3_SmallArrowLeft 			= { 2, 3, bmp_2x3_SmallArrowLeft_data };

static const uint8_t bmp_2x3_SmallArrowRight_data[]	= {0xE0, 0x40};
const s_GLCD_Bitmap bmp_2x3_SmallArrowRight 		= { 2, 3, bmp_2x3_SmallArrowRight_data };

static const uint8_t bmp_16x16_BootScreen_data[] 	= {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};
const s_GLCD_Bitmap bmp_16x16_BootScreen			= {16, 16, bmp_16x16_BootScreen_data };

//Menu icons
static const uint8_t bmp_28x28_MenuSettings_data[] 	=
{0x00, 0x00, 0x18, 0x0C, 0x06, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07,
 0x0F, 0x1F, 0x1E, 0x1C, 0x18, 0x10, 0x00, 0x01, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x80, 0xC0, 0x60, 0x31, 0x1B, 0x0F, 0x0F, 0xFF, 0xFF, 0xFF, 0xFE, 0x1E, 0x1E, 0x1E,
 0x3E, 0x7C, 0xF8, 0xF0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x07, 0x0F, 0x1F, 0x3F, 0x7F,
 0xFE, 0xFC, 0xF8, 0xF0, 0xE0, 0xC0, 0xF8, 0xEC, 0xD6, 0xAB, 0xD5, 0x6A, 0x35, 0x1A, 0x0D, 0x06,
 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0x60, 0xA0, 0x60, 0xC0, 0x80, 0x00, 0x00, 0x00,};
const s_GLCD_Bitmap bmp_28x28_MenuSettings = {28, 28, bmp_28x28_MenuSettings_data};

static const uint8_t bmp_28x28_MenuPhaseOffset_data[] =
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x5F, 0x18, 0x18, 0x18, 0x18, 0x18,
 0x18, 0x5A, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x60, 0x60, 0x60,
 0x60, 0x60, 0x60, 0x60, 0x60, 0xE0, 0xEA, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xAA, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
 0x03, 0x03, 0xAB, 0x03, 0x03, 0x03, 0x03, 0x03, 0xFF, 0xFF, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0,
 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const s_GLCD_Bitmap bmp_28x28_MenuPhaseOffset = {28, 28, bmp_28x28_MenuPhaseOffset_data};

static const uint8_t bmp_28x28_MenuSweep_data[] =
{0x00, 0x00, 0x07, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xC0,
 0xC0, 0xF8, 0x00, 0x98, 0xA8, 0xC9, 0x01, 0x03, 0x07, 0x07, 0x0F, 0x1F, 0x1F, 0x3F, 0x7F, 0x7F,
 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x08, 0x1B, 0x1A, 0x3A, 0x78, 0x7B,
 0xF8, 0xF9, 0xF8, 0xFB, 0xF8, 0xFB, 0xFA, 0xFA, 0xF8, 0xFB, 0xFA, 0xFA, 0xF8, 0xFB, 0xFA, 0xFA,
 0xFB, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA0, 0xA0, 0xE0, 0x00, 0xE0, 0x20, 0xE0, 0x20, 0xE0,
 0x00, 0xE0, 0xA0, 0x20, 0x00, 0xE0, 0xA0, 0x20, 0x00, 0xE0, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00};
const s_GLCD_Bitmap bmp_28x28_MenuSweep = {28, 28, bmp_28x28_MenuSweep_data};

static const uint8_t bmp_28x28_MenuAmplitudeModulation_data[] =
{0x00, 0x01, 0x03, 0x07, 0x0F, 0x1F, 0x1F, 0x1F, 0x1F, 0x0F, 0x07, 0x03, 0x01, 0x00, 0x00, 0x01,
 0x03, 0x07, 0x0F, 0x1F, 0x1F, 0x1F, 0x1F, 0x0F, 0x07, 0x03, 0x01, 0x00, 0xFE, 0xFF, 0xFF, 0xFF,
 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0xF0, 0xF0, 0xF1,
 0xF2, 0xE2, 0xC2, 0x81, 0x00, 0x00, 0x00, 0x01, 0x82, 0xC1, 0xE2, 0xF1, 0xF0, 0xF0, 0xF0, 0xE0,
 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x80, 0x80, 0x80, 0xE0,
 0x00, 0x00, 0x00, 0xE0, 0x00, 0xC0, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const s_GLCD_Bitmap bmp_28x28_MenuAmplitudeModulation = {28, 28, bmp_28x28_MenuAmplitudeModulation_data};

static const uint8_t bmp_28x28_MenuFrequencyModulation_data[] =
{0x10, 0x10, 0x10, 0x1F, 0x00, 0x00, 0x00, 0x1F, 0x10, 0x10, 0x1F, 0x00, 0x1F, 0x10, 0x1F, 0x00,
 0x1F, 0x10, 0x10, 0x1F, 0x00, 0x00, 0x00, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x00, 0x00, 0x00, 0xFF,
 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0x00, 0xFF,
 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x10, 0x10, 0x10, 0xF0,
 0x00, 0x03, 0xF2, 0x12, 0xF2, 0x00, 0xF0, 0x11, 0xF2, 0x03, 0x02, 0xF1, 0x10, 0x10, 0x10, 0xF0,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x80, 0x80,
 0x80, 0x00, 0x00, 0xE0, 0x00, 0xC0, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const s_GLCD_Bitmap bmp_28x28_MenuFrequencyModulation = {28, 28, bmp_28x28_MenuFrequencyModulation_data};

static const uint8_t bmp_28x28_MenuSD_data[] =
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x23, 0x3F, 0x23, 0x3F, 0x23,
 0x3F, 0x23, 0x3F, 0x23, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x33, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0xF8, 0xF8, 0xF8, 0xFB, 0xFA, 0xFA, 0xF8, 0xFB, 0xFA, 0xF9, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA0,
 0xA0, 0xE0, 0x00, 0xE0, 0x20, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const s_GLCD_Bitmap bmp_28x28_MenuSD = {28, 28, bmp_28x28_MenuSD_data};
