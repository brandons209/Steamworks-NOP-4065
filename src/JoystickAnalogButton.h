/*
 * JoystickAnalogButton.h
 *
 *  Created on: Mar 10, 2016
 *      Author: NerdsOfPrey
 */

#ifndef SRC_JOYSTICKANALOGBUTTON_H_
#define SRC_JOYSTICKANALOGBUTTON_H_

#include "Buttons/Trigger.h"
#include "Joystick.h"

class JoystickAnalogButton: public Trigger {//inherits from the WPILIB Trigger class, which has one function to call: Get()

public:
	JoystickAnalogButton(GenericHID* joystick, int axisNumber);//this button requires an joystick and axis number as args

		  bool Get();
private:
		  GenericHID* m_joystick;
		  int m_axisNumber;
		  double THRESHOLD;
};


#endif /* SRC_JOYSTICKANALOGBUTTON_H_ */
