/*
 * ex2.c
 *
 *  Created on: Sep 13, 2024
 *      Author: truon
 */

#include "main.h"
#include "ex2.h"
void ex2_init(){
	HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, SET);
	HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, SET);
	HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, SET);
}
int counter = 0, state = 0;
void ex2_run(){
	switch (state) {
		case 0: // den do 5s
			HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, RESET);
			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, SET);
			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, SET);
			counter++;
			if (counter >= 5){
				counter = 0;
				state = 1;
			}
			break;
		case 1: // den xanh 2s
			HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, SET);
			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, SET);
			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, RESET);
			counter++;
			if(counter >= 2){
				counter = 0;
				state = 2;
			}
			break;
		case 2: // den vang 3s
			HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, SET);
			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, RESET);
			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, SET);
			counter++;
			if(counter >= 3){
				counter = 0;
				state = 0;
			}
			break;
		default:
			break;
	}
	HAL_Delay(1000);
}
