/*
 * LED_int.h
 *
 *  Created on: Feb 13, 2023
 *      Author: user
 */

#ifndef LED_INT_H_
#define LED_INT_H_

ES_t LED_enuInit(LED_t* Copy_pstrLedConfig);
ES_t LED_enuTurnON(LED_t* Copy_pstrLedID);
ES_t LED_enuTurnOFF(LED_t* Copy_pstrLedID);
#endif /* LED_INT_H_ */
