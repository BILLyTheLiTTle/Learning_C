/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */
/*Declare here, define in main.c*/ extern volatile uint8_t leds_status; // 0 -> all off, 1 -> CW, 2 -> CCW, 3 -> all on
/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define OnBoardBlueButton_Pin GPIO_PIN_0
#define OnBoardBlueButton_GPIO_Port GPIOA
#define OnBoardBlueButton_EXTI_IRQn EXTI0_IRQn
#define OnBoardGreenLED_Pin GPIO_PIN_12
#define OnBoardGreenLED_GPIO_Port GPIOD
#define OnBoardOrangeLED_Pin GPIO_PIN_13
#define OnBoardOrangeLED_GPIO_Port GPIOD
#define OnBoardRedLED_Pin GPIO_PIN_14
#define OnBoardRedLED_GPIO_Port GPIOD
#define OnBoardBlueLED_Pin GPIO_PIN_15
#define OnBoardBlueLED_GPIO_Port GPIOD
/* USER CODE BEGIN Private defines */
#define OnBoardLED_GPIO_Port GPIOD // it is same for every on board LED
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
