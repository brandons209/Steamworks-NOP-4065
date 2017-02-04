/*
 * JoystickAnalogButton.cpp
 *
 *  Created on: Mar 10, 2016
 *      Author: NerdsOfPrey
 */

#include "JoystickAnalogButton.h"

//This class is inherited from the Trigger class. This converts an axis into a button, useful for using the triggers on controllers as buttons.


JoystickAnalogButton::JoystickAnalogButton(GenericHID* joystick, int axisNumber){
	// TODO Auto-generated constructor stub
		  THRESHOLD = 0.1;//how far axis must go for it to be triggered as a button

	      m_joystick = joystick;//joystick variable
	      m_axisNumber = axisNumber;//joystick axis number

}
//hi

bool JoystickAnalogButton::Get() {///only function that is virutal is the Get() from trigger, which is called here
    if(m_joystick->GetRawAxis(m_axisNumber) > THRESHOLD){//checks for the axis moving
      return m_joystick->GetRawAxis(m_axisNumber) > THRESHOLD;    //Return true if axis value is less than negative threshold
    } else {
      return m_joystick->GetRawAxis(m_axisNumber) > THRESHOLD;    //Return false if axis value is greater than positive threshold
    }
}



