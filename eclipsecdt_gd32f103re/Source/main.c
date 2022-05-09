#include <gd32f10x.h>
#include "systick.h"
#include "delay.h"

void gpioInit(void);

int main(void) {
	systick_config();

	gpioInit();

	while(1) {
		gpio_bit_write(GPIOA, GPIO_PIN_10, SET);
		delay_ms(100);
		gpio_bit_write(GPIOA, GPIO_PIN_10, RESET);
		delay_ms(100);
	}
}


void gpioInit(void) {
	rcu_periph_clock_enable(RCU_GPIOA);

	gpio_bit_write(GPIOA, GPIO_PIN_10, RESET);
	gpio_init(GPIOA, GPIO_MODE_OUT_PP, GPIO_OSPEED_2MHZ, GPIO_PIN_10);
}
