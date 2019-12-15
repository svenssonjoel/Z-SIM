
#include "led.h"

#include "hal.h"
#include "hal_pal.h"

void led_write(int num, int state) {
  switch (num) {
  case LED_RED:
    palWritePad(GPIOB, 0, state);
    break;

  case LED_GREEN:
    palWritePad(GPIOB, 1, state);
    break;

  default:
    break;
  }
}

void led_init(void) {
  palSetPadMode(GPIOB, 0,
		PAL_MODE_OUTPUT_PUSHPULL |
		PAL_STM32_OSPEED_HIGHEST);
  palSetPadMode(GPIOB, 1,
		PAL_MODE_OUTPUT_PUSHPULL |
		PAL_STM32_OSPEED_HIGHEST);

  led_write(LED_RED, 0);
  led_write(LED_GREEN, 1);
}
