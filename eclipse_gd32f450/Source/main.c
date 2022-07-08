#include "gd32f4xx.h"
#include "main.h"
#include "systick.h"

void gpioInit(void);

int main(void) {
	systick_config();

	gpioInit();

	while(1) {
		gpio_bit_set(GPIOD, GPIO_PIN_4);
		systick_delay_1ms(100);
		systick_delay_1ms(100);
		systick_delay_1ms(100);
		systick_delay_1ms(100);
		systick_delay_1ms(100);
		systick_delay_1ms(100);
		systick_delay_1ms(100);
		systick_delay_1ms(100);
		systick_delay_1ms(100);
		systick_delay_1ms(100);
		systick_delay_1ms(100);
		systick_delay_1ms(100);
		systick_delay_1ms(100);
		systick_delay_1ms(100);
		systick_delay_1ms(100);
		systick_delay_1ms(100);
		systick_delay_1ms(100);
		systick_delay_1ms(100);
		systick_delay_1ms(100);
		systick_delay_1ms(100);
		systick_delay_1ms(100);
		systick_delay_1ms(100);
		systick_delay_1ms(100);
		systick_delay_1ms(100);
		systick_delay_1ms(100);
		systick_delay_1ms(100);
		systick_delay_1ms(100);
		systick_delay_1ms(100);
		systick_delay_1ms(100);
		systick_delay_1ms(100);
		gpio_bit_reset(GPIOD, GPIO_PIN_4);
		systick_delay_1ms(100);
		systick_delay_1ms(100);
		systick_delay_1ms(100);
		systick_delay_1ms(100);
		systick_delay_1ms(100);
		systick_delay_1ms(100);
		systick_delay_1ms(100);
		systick_delay_1ms(100);
		systick_delay_1ms(100);
		systick_delay_1ms(100);
		systick_delay_1ms(100);
		systick_delay_1ms(100);
		systick_delay_1ms(100);
		systick_delay_1ms(100);
		systick_delay_1ms(100);
		systick_delay_1ms(100);
		systick_delay_1ms(100);
		systick_delay_1ms(100);
		systick_delay_1ms(100);
		systick_delay_1ms(100);
		systick_delay_1ms(100);
		systick_delay_1ms(100);
		systick_delay_1ms(100);
		systick_delay_1ms(100);
		systick_delay_1ms(100);
		systick_delay_1ms(100);
		systick_delay_1ms(100);
		systick_delay_1ms(100);
		systick_delay_1ms(100);
		systick_delay_1ms(100);
	}
}


void gpioInit(void) {
	rcu_periph_clock_enable(RCU_GPIOD);

	gpio_mode_set(GPIOD, GPIO_MODE_OUTPUT, GPIO_PUPD_NONE, GPIO_PIN_4);
	gpio_output_options_set(GPIOD, GPIO_OTYPE_PP, GPIO_OSPEED_50MHZ, GPIO_PIN_4);

//	gpio_init(GPIOA, GPIO_MODE_OUT_PP, GPIO_OSPEED_2MHZ, GPIO_PIN_10);
}
