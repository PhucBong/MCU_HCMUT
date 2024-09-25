/*
 * init.c
 *
 *  Created on: Sep 13, 2024
 *      Author: truon
 */
#include "main.h"
#include "init.h"
void init(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);

	HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, SET);
	HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, SET);
	HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, SET);
	HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, SET);
	HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
	HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
	HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, SET);

	HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, SET);
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
}

