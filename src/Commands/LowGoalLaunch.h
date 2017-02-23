#ifndef LowGoalLaunch_H
#define LowGoalLaunch_H

#include <Commands/CommandGroup.h>
#include "Launch.h"
#include "SetLowGoalAngle.h"

class LowGoalLaunch : public CommandGroup {
public:
	LowGoalLaunch();
};

#endif  // LowGoalLaunch_H
