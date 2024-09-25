/*
 * ex5.c
 *
 *  Created on: Sep 13, 2024
 *      Author: truon
 */
#include "ex4.h"
#include "main.h"
void ex5_init(){
	HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, SET);
	HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, SET);
	HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, SET);

	HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, SET);
	HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, SET);
	HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, SET);

	HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, SET);
	HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, SET);
	HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, SET);

	HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, SET);
	HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, SET);
	HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, SET);
}
int counter3 = 3, state3 = 0, demTime = 5;
void ex5_run(){
	switch (state3) {
		case 0: // den do 1 den xanh 2 (3s)
			HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, RESET);
			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, SET);
			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, SET);
			HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, RESET);
			HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, SET);
			HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, SET);

			HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, SET);
			HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, SET);
			HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, RESET);
			HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, SET);
			HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, SET);
			HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, RESET);

			display7SEG(demTime--); // 5 -> 2
			counter3--;
			if (counter3 <= 0){
				counter3 = 2;
				state3 = 1;
			}
			break;
		case 1: // den do 1 den vang 2 2s
			HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, RESET);
			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, SET);
			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, SET);
			HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, RESET);
			HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, SET);
			HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, SET);

			HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, SET);
			HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, RESET);
			HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, SET);
			HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, SET);
			HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, RESET);
			HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, SET);
			display7SEG(demTime--); // 2 -> 0
			counter3--;
			if(counter3 <= 0){
				counter3 = 3;
				state3 = 2;
				demTime = 3;
			}
			break;
		case 2: // den xanh 1 den do 2 (3s)
			HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, SET);
			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, SET);
			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, RESET);
			HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, SET);
			HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, SET);
			HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, RESET);

			HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, RESET);
			HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, SET);
			HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, SET);
			HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, RESET);
			HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, SET);
			HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, SET);
			display7SEG(demTime--);// 2->0
			counter3--;
			if(counter3 <= 0){
				counter3 = 2;
				state3 = 3;
				demTime = 2;
			}
			break;
		case 3: // den vang 1 den do 2 (2s)
			HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, SET);
			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, RESET);
			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, SET);
			HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, SET);
			HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, RESET);
			HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, SET);

			HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, RESET);
			HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, SET);
			HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, SET);
			HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, RESET);
			HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, SET);
			HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, SET);
			display7SEG(demTime--); // 3->0
			counter3--;
			if(counter3 <= 0){
				counter3 = 3;
				state3 = 0;
				demTime = 5;
			}
			break;
		default:
			break;
	}
	HAL_Delay(1000);
}
