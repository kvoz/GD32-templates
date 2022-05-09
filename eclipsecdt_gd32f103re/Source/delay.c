#include "systick.h"

void delay_ms(uint32_t Delay) {
  uint32_t tickstart = systick_GetTick();
  uint32_t wait = Delay;

  /* Add a freq to guarantee minimum wait */
  if (wait < 1) {
    wait += 1;
  }

  while((systick_GetTick() - tickstart) < wait) {
  }
}
