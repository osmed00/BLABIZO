#include "utils.h"

/*
*delay in melli second calculated for 8Mhz Oscillator
*/
void delayMs(int n){
	int x,y;
	for(x=0;x<n;x++){
		for(y=0;y<3180;y++){}
		}
}
/*
*delay in micro second calculated for 8Mhz Oscillator

*/
void delayUs(int n){
	int x,y;
	for(x=0;x<n;x++){
		for(y=0;y<3;y++){}
		}
}