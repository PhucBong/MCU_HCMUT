/*
 * ex6.c
 *
 *  Created on: Sep 13, 2024
 *      Author: truon
 */


#include "main.h"
#include "ex8.h"
int counter6 = 0;
void ex6_run(){
	if (counter6 > 12) counter6 = 0;
	setNumberOnClock(counter6++);
	HAL_Delay(1000);
}
