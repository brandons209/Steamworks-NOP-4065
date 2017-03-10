#ifndef AutoCommandBuilder_H
#define AutoCommandBuilder_H

#include <Commands/CommandGroup.h>
#include "../../Robot.h"
#include "../DriveForward.h"
#include "../DriveToPosition.h"
#include "../Launch.h"
#include "../Load.h"
#include "../Rotate.h"
#include "../SetLauncherAngle.h"
#include "../SetLauncherManualAngle.h"
#include "../CalculatedLaunch.h"

class AutoCommandBuilder : public CommandGroup {
public:
	AutoCommandBuilder();
};

#endif  // AutoCommandBuilder_H
