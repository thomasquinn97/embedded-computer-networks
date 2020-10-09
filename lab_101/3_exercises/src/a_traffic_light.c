/*
 * a_traffic_lights.c
 *
 * this is the main application skeleton for the student exercises in task 3
 *
 */

// include the hal drivers
#include "stm32f7xx_hal.h"

// include the shu bsp libraries for the stm32f7 discovery board
#include "pinmappings.h"
#include "clock.h"
#include "gpio.h"

// map the led to gpio pins
gpio_pin_t led = {PI_1, GPIOI, GPIO_PIN_1};
gpio_pin_t D12 = {PB_14, GPIOB, GPIO_PIN_14};
gpio_pin_t D11 = {PB_15, GPIOB, GPIO_PIN_15};
 

// this is the main method
int main()
{
  // we need to initialise the hal library and set up the SystemCoreClock 
  // properly
  HAL_Init();
  init_sysclk_216MHz();
	
	//intalise pins 
	 init_gpio(led, OUTPUT);
	 init_gpio(D12, OUTPUT);
	 init_gpio(D11, OUTPUT);
	
 while(1)
 {
 // toggle the led on the gpio pin
 toggle_gpio(led);
	  // wait for 1 second
 HAL_Delay(3000);
	 
 toggle_gpio(led); 


 toggle_gpio(D12); 
	  // wait for 1 second
 HAL_Delay(1000);
	 
 toggle_gpio(D12);
	 
 toggle_gpio(D11); 
	  // wait for 1 second
 HAL_Delay(4000);
	 
	toggle_gpio(D11); 



}
 }
