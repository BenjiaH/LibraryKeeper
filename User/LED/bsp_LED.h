#ifndef _BSP_LED_H_
#define _BSP_LED_H_

#include "stm32f10x.h"

#define LED1_GPIO_PORT GPIOA
#define LED1_GPIO_CLK RCC_APB2Periph_GPIOA
#define LED1_GPIO_PIN GPIO_Pin_0

#define LED2_GPIO_PORT GPIOA
#define LED2_GPIO_CLK RCC_APB2Periph_GPIOA
#define LED2_GPIO_PIN GPIO_Pin_1

#define LED3_GPIO_PORT GPIOA
#define LED3_GPIO_CLK RCC_APB2Periph_GPIOA
#define LED3_GPIO_PIN GPIO_Pin_2

#define ON  0
#define OFF 1

/* 使用标准的固件库控制IO*/
#define LED1(a)	if (a)	\
					GPIO_SetBits(LED1_GPIO_PORT,LED1_GPIO_PIN);\
					else		\
					GPIO_ResetBits(LED1_GPIO_PORT,LED1_GPIO_PIN)

#define LED2(a)	if (a)	\
					GPIO_SetBits(LED2_GPIO_PORT,LED2_GPIO_PIN);\
					else		\
					GPIO_ResetBits(LED2_GPIO_PORT,LED2_GPIO_PIN)

#define LED3(a)	if (a)	\
					GPIO_SetBits(LED3_GPIO_PORT,LED3_GPIO_PIN);\
					else		\
					GPIO_ResetBits(LED3_GPIO_PORT,LED3_GPIO_PIN)
#define LED1_TOGGLE {LED1_GPIO_PORT->ODR ^= LED1_GPIO_PIN;}
#define LED2_TOGGLE {LED2_GPIO_PORT->ODR ^= LED2_GPIO_PIN;}
#define LED3_TOGGLE {LED3_GPIO_PORT->ODR ^= LED3_GPIO_PIN;}

void LED_GPIO_Config(void);
#endif
