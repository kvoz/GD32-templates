#include "gd32f10x.h"
#include "main.h"
#include "systick.h"

void gpioInit(void);

int main(void) {
	systick_config();

	gpioInit();

	while(1) {
		gpio_bit_set(GPIOA, GPIO_PIN_10);
		systick_delay_1us(100);
		gpio_bit_reset(GPIOA, GPIO_PIN_10);
		systick_delay_1us(100);
	}
}


void gpioInit(void) {
	rcu_periph_clock_enable(RCU_GPIOA);

	gpio_init(GPIOA, GPIO_MODE_OUT_PP, GPIO_OSPEED_2MHZ, GPIO_PIN_10);
}
