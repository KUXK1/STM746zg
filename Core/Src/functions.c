/*
 * functions.c
 *
 *  Created on: Dec 10, 2024
 *      Author: Maciej P
 */
#include "main.h"
#include "functions.h"

extern TIM_HandleTypeDef htim3;

void pwmsetup(int percent, uint32_t channel) {
    percent = percent * 10;
    __HAL_TIM_SET_COMPARE(&htim3, channel, percent);
}
