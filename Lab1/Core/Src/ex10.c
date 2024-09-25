/*
 * ex10.c
 *
 *  Created on: Sep 13, 2024
 *      Author: truon
 */

#include "main.h"
#include "ex7.h"
#include "ex8.h"
#include "ex9.h"
int counter10 = 0;
int sec = 0, min = 0, hour = 0;
int numSec = 0, numMin = 0;
void ex10_run(){
	if (counter10 == 0) clearAllClock();
	  counter10 = 1;
	  sec++;
	  int flagSec = numSec, flagMin = numMin;
	  numSec = sec / 5, numMin = min / 5;
	  if (hour == 0){
		  setNumberOnClock(12);
	  }
	  if (hour != 0){
		  setNumberOnClock(hour);
	  }
	  if ((numSec == 0 && flagSec == 0) || (numMin == 0 && flagMin == 0)){
		  setNumberOnClock(12);
	  }
	  if(numSec != flagSec){
		  setNumberOnClock(numSec);
		  if (flagSec != numMin && flagSec != hour){
			  if(flagSec == 0){
				  clearNumberOnClock(12);
			  }
			  if(flagSec != 0){
				  clearNumberOnClock(flagSec);
			  }
		  }
	  }
	  if(numMin != flagMin){
		  setNumberOnClock(numMin);
		  if (flagMin != numSec && flagMin != hour){
			  if(flagMin == 0){
				  clearNumberOnClock(12);
			  }
			  if(flagMin != 0){
				  clearNumberOnClock(flagMin);
			  }
		  }
	  }

	  if (sec >= 60){
		  min++;
		  sec = 0;
	  }
	  if (min >= 60){
		  hour++;
		  setNumberOnClock(hour);
		  if (hour - 1 != numSec && hour - 1 != numMin){
			  if (hour - 1 == 0){
				  clearNumberOnClock(12);
			  }
			  if (hour - 1 != 0){
				  clearNumberOnClock(hour - 1);
			  }
		  }
		  min = 0;
	  }
	  if (hour >= 12) hour = 0;
	  HAL_Delay(10);
}
