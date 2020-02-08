
#include "Std_Types.h"
#include "TM4C123GH6PM.h"

typedef struct{
	uint32 LOCK; 

  uint32 CR ;

  uint32 AMSEL;

  uint32 PCTL; 

  uint32 DIR ;

  uint32 AFSEL; 

 uint32 PUR;

 uint32 DEN;   
}Config;
void GPIO_INIT(GPIOA_Type *GPIO,Config CFG);