/*
 * POVButton.cpp
 *
 *  Created on: Mar 10, 2016
 *      Author: NerdsOfPrey
 */

#include "JoystickButtons/POVButton.h"

//this class is used to convert POV angles into buttons to be used for command based programming. 

POVButton::POVButton(GenericHID* joystick, int povangle) {//uses the trigger class to convert the pov angles into joystick buttons

	m_joystick = joystick;
	povAngle = povangle;

}

bool POVButton::Get(){

	if(m_joystick->GetPOV() == povAngle){//checks pov of controller, if no pov the value is -1
		return true;
	}else{
		return false;
	}



}
