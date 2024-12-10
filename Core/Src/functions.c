/*
 * functions.c
 *
 *  Created on: Dec 10, 2024
 *      Author: Maciej P
 */
#include "main.h"
#include "functions.h"

void pwmsetup(int percent){
	percent=percent*10;
	__HAL_TIM_SET_COMPARE(&htim3, TIM_CHANNEL_1, percent);
	__HAL_TIM_SET_COMPARE(&htim3, TIM_CHANNEL_2, percent);
	__HAL_TIM_SET_COMPARE(&htim3, TIM_CHANNEL_3, percent);
	__HAL_TIM_SET_COMPARE(&htim3, TIM_CHANNEL_4, percent);
}
