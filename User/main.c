#include "stm32f10x.h"
#include "bsp_LED.h"
#include "bsp_key.h"

#define SOFT_DELAY Delay(0x0FFFFF);
void Delay(__IO uint32_t nCount)
{
	for(; nCount != 0; nCount--);
}
int main(void)
{
	LED_GPIO_Config();
	Key_GPIO_Config();
	while(1)
	{
		if(Key_Scan(KEY1_GPIO_PORT,KEY1_GPIO_PIN) == KEY_ON)
		{
			/*LED1反转*/
			LED3_TOGGLE;
		}

		if(Key_Scan(KEY2_GPIO_PORT,KEY2_GPIO_PIN) == KEY_ON)
		{
			/*LED2反转*/
			LED2_TOGGLE;
			//LED3_TOGGLE;
		}
		
		if(Key_Scan(KEY3_GPIO_PORT,KEY3_GPIO_PIN) == KEY_ON)
		{
			/*LED3反转*/
			LED1_TOGGLE;
		}
	}
}

