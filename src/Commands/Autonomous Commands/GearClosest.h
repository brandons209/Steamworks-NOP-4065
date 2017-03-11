#ifndef GearClosest_H
#define GearClosest_H

#include <Commands/CommandGroup.h>
#include "DriveForwardGearMiddle.h"
#include "DriveForwardGearClosestOne.h"
#include "RotateClosest.h"
#include "DriveForwardGearClosestTwo.h"
#include "DriveForwardFarthestOne.h"
#include "RotateFarthest.h"
#include "DriveForwardGearFarthestTwo.h"

class GearClosest : public CommandGroup {
public:
	GearClosest();
};

#endif  // GearClosest_H
