#include "Bfx.h"
#include "Std_Types.h"
#include "TM4C123GH6PM.h"

void GPIO_WRITECHANNEL(GPIOA_Type*GPIO,uint8 channel, uint8 level);
uint8 GPIO_READCHANNEL(GPIOA_Type*GPIO,uint8 channel);