#include "TM4C123GH6PM.h"
#include "Std_Types.h"
#include "GPIO_CFG.h"
#include "GPIO.h"
#include "utils.h"
int main()
{
Config g_cfg;
	
g_cfg.LOCK=0x4C4F434B;
g_cfg.CR=0x1F;
g_cfg.AMSEL= 0x00;        
g_cfg.PCTL = 0x00000000;  
g_cfg.DIR = 0x0E;         
g_cfg.AFSEL = 0x00;        
g_cfg.PUR = 0x11;          
g_cfg.DEN = 0x1F; 
GPIO_INIT(GPIOF,g_cfg);	
	//configuration
	// pin 3 portf  green , pin 2 port 4 blue , pin1 portf red, 1st 
	while(1){
		if(GPIO_READCHANNEL(GPIOF,0)==0){
			delayMs(30);
				
	for(int i =0; i<1000000;i++);
		GPIO_WRITECHANNEL(GPIOF,1,1);
	GPIO_WRITECHANNEL(GPIOF,2,0);
	for(int i =0; i<1000000;i++);
	GPIO_WRITECHANNEL(GPIOF,1,0);
	GPIO_WRITECHANNEL(GPIOF,2,1);
	for(int i =0; i<1000000;i++);
	GPIO_WRITECHANNEL(GPIOF,3,1);
	GPIO_WRITECHANNEL(GPIOF,1,1);
	for(int i =0; i<1000000;i++);
		GPIO_WRITECHANNEL(GPIOF,3,0);
	GPIO_WRITECHANNEL(GPIOF,2,0);
	for(int i =0; i<1000000;i++);
	GPIO_WRITECHANNEL(GPIOF,1,1);
	GPIO_WRITECHANNEL(GPIOF,2,1);
	for(int i =0; i<1000000;i++);
		GPIO_WRITECHANNEL(GPIOF,1,1);
	GPIO_WRITECHANNEL(GPIOF,2,0);
	for(int i =0; i<1000000;i++);
		GPIO_WRITECHANNEL(GPIOF,1,0);
	GPIO_WRITECHANNEL(GPIOF,2,1);
	for(int i =0; i<1000000;i++);

}
		if(GPIO_READCHANNEL(GPIOF,4)==0){
			delayMs(30);
			GPIO_WRITECHANNEL(GPIOF,1,0);
			GPIO_WRITECHANNEL(GPIOF,2,0);
			GPIO_WRITECHANNEL(GPIOF,3,0);
			if(GPIO_READCHANNEL(GPIOF,4)==0){
			
			}
		}
	}
	return 0;
	
}
	