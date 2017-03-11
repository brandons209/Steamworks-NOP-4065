#ifndef ShootClosest_H
#define ShootClosest_H

#include <Commands/CommandGroup.h>
#include "DriveForwardGearClosestOne.h"
#include "../Rotate.h"
#include "../Launch.h"
#include "../SetLauncherManualAngle.h"

class ShootClosest : public CommandGroup {
public:
	ShootClosest();
};

#endif  // ShootClosest_H
