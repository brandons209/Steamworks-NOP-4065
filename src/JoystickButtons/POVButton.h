/*
 * POVButton.h
 *
 *  Created on: Mar 10, 2016
 *      Author: NerdsOfPrey
 */

#ifndef SRC_POVBUTTON_H_
#define SRC_POVBUTTON_H_

#include "WPILib.h"

class POVButton: public Trigger{
public:
	POVButton(GenericHID* joystick, int povangle);

	GenericHID* m_joystick;
	int povAngle;

	bool Get();
};

#endif /* SRC_POVBUTTON_H_ */
