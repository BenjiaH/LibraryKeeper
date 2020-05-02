#ifndef _BSP_KEY_H_
#define _BSP_KEY_H_

#include "stm32f10x.h"

#define KEY1_GPIO_PORT GPIOB
#define KEY1_GPIO_CLK RCC_APB2Periph_GPIOB
#define KEY1_GPIO_PIN GPIO_Pin_3

#define KEY2_GPIO_PORT GPIOB
#define KEY2_GPIO_CLK RCC_APB2Periph_GPIOB
#define KEY2_GPIO_PIN GPIO_Pin_8

#define KEY3_GPIO_PORT GPIOB
#define KEY3_GPIO_CLK RCC_APB2Periph_GPIOB
#define KEY3_GPIO_PIN GPIO_Pin_9

#define KEY_ON	1
#define KEY_OFF	0

void Key_GPIO_Config(void);
uint8_t Key_Scan(GPIO_TypeDef* GPIOx,uint16_t GPIO_Pin);

#endif
