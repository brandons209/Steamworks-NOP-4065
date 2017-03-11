#ifndef GearMiddle_H
#define GearMiddle_H

#include <Commands/CommandGroup.h>
#include "DriveForwardGearMiddle.h"
#include "DriveForwardGearClosestOne.h"
#include "RotateClosest.h"
#include "DriveForwardGearClosestTwo.h"
#include "DriveForwardFarthestOne.h"
#include "RotateFarthest.h"
#include "DriveForwardGearFarthestTwo.h"

class GearMiddle : public CommandGroup {
public:
	GearMiddle();
};

#endif  // GearMiddle_H
