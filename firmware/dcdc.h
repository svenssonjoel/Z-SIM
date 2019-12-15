/*
    Copyright 2019 Joel Svensson	svenssonjoel@yahoo.se

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _DCDC_H_
#define _DCDC_H_

#include "hal.h"
#include "hal_pal.h"

#define INPUT_VSENSE_GPIO GPIOA
#define INPUT_VSENSE_PIN  2
#define RAIL_VSENSE_GPIO  GPIOA
#define RAIL_VSENSE_PIN   3

#define VSEL_GPIO         GPIOB
#define VSEL_1_PIN        2
#define VSEL_2_PIN        3
#define VSEL_3_PIN        4
#define VSEL_4_PIN        5
#define VSEL_5_PIN        6

#define DCDC_OUTPUT_ENABLE_GPIO GPIOB 
#define DCDC_OUTPUT_ENABLE_PIN 7

extern void dcdc_init(void);
extern bool dcdc_vsel_set(unsigned char vsel);
extern bool dcdc_enable(void);
extern void dcdc_disable(void); 


#endif
