#include "sys.h"
#include "delay.h"
#include "usart.h"
#include "led.h"
#include "oled.h"
#include "string.h"
#include "stdio.h"

extern unsigned char  Thanks[][16];
extern unsigned char  School[][16];
extern unsigned char logo[];
extern unsigned char gImage_logo[1][1024];
extern unsigned char  Pencil[][512];
extern unsigned char progress[][320];


int main(void)
{ 
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);
	delay_init(168);   
	uart_init(115200);	
 	OLED_Init();		
	
//	OLED_DrawBMP(40,0,96,7,logo);
//	delay_ms(1000);

  int i = 0;
  while (i <= 8) 
  {
					drawProgressBar(i, 8);
					OLED_Refresh_Gram();
					delay_ms(500);
					i++;
  };

	
//	while(1)
//	{
//     float f = 12.5;
//    char a[10];
//		sprintf(a, "%.1f%%",f);
//		OLED_ShowString(96,48,a,12);
//		OLED_Refresh_Gram();
//		delay_ms(500);
//	}
	
//	while(1) 
//	{		
//		OLED_ShowNum(48,24,13,3,24);	
//		OLED_Refresh_Gram();
//		delay_ms(500);		
//	}

//  OLED_ShowCHinese(32,4,0,School);
//	 OLED_ShowCHinese(48,4,1,School);
//	 OLED_ShowCHinese(64,4,2,School);
//	 OLED_ShowCHinese(80,4,3,School);
//  	delay_ms(2000);		

//	OLED_Refresh_Gram();

//    while(1)
//    {
//				OLED_DrawBMP(40,0,96,7,logo);
//	   }
//	delay_ms(2000);		

//	OLED_Refresh_Gram();
//	while(1)
//    {
//        OLED_DrawGIF(32,0,96,8,18,512, Pencil);	
//    }

	
}
