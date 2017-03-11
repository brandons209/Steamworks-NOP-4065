#ifndef GearFarthest_H
#define GearFarthest_H

#include <Commands/CommandGroup.h>
#include "DriveForwardGearMiddle.h"
#include "DriveForwardGearClosestOne.h"
#include "RotateClosest.h"
#include "DriveForwardGearClosestTwo.h"
#include "DriveForwardFarthestOne.h"
#include "RotateFarthest.h"
#include "DriveForwardGearFarthestTwo.h"

class GearFarthest : public CommandGroup {
public:
	GearFarthest();
};

#endif  // GearFarthest_H
