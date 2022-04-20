/*
 * motor.h
 *
 *  Created on: Nov 3, 2020
 *      Author: mrmah
 */

#ifndef MOTOR_H_
#define MOTOR_H_

#include "std_types.h"
#include "common_macros.h"
#include "micro_config.h"

#define MOTOR_OUT_PORT PORTB
#define MOTOR_OUT_PORT_DIR DDRB

#define MOTOR_CONTROL_PORT PORTB
#define MOTOR_CONTROL_PORT_DIR DDRB

#define IN1 PB0
#define IN2 PB1
#define MOTOR_E PB3

void MOTOR_init(void);
void INT1_init(void);

#endif /* MOTOR_H_ */
