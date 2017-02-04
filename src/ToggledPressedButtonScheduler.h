/*
 * ToggledPressedButtonScheduler.h
 *
 *  Created on: May 23, 2016
 *      Author: NerdsOfPrey
 */

#ifndef SRC_TOGGLEDPRESSEDBUTTONSCHEDULER_H_
#define SRC_TOGGLEDPRESSEDBUTTONSCHEDULER_H_

#include "WPILib.h"
#include "Buttons/PressedButtonScheduler.h"

class ToggledPressedButtonScheduler : public PressedButtonScheduler//the pressed button scheduler allows for a creation of a toggle scheduler for two commands
{
protected:
        Command *m_otherCommand;
        bool m_firstOrSecond;
public:
        ToggledPressedButtonScheduler(bool last, Trigger *button, Command *firstCommand, Command *secondCommand);
        virtual ~ToggledPressedButtonScheduler() {}
        virtual void Execute();//inherited from the PressedButtonScheduler Class
};

#endif
