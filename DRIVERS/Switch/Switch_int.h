/*
 * Switch_int.h
 *
 *  Created on: Feb 10, 2023
 *      Author: user
 */

#ifndef SWITCH_INT_H_
#define SWITCH_INT_H_


ES_t Switch_enuInit(SW_t * Copy_AstrSwitchs);

ES_t Switch_enuGetState(SW_t* Copy_AstrSwitchs,u8 * copy_pu8SwState);

#endif /* SWITCH_INT_H_ */
