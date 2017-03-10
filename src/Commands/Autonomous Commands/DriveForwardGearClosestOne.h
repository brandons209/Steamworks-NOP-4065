#ifndef DriveForwardGearClosestOne_H
#define DriveForwardGearClosestOne_H

#include "Commands/Subsystem.h"
#include "../../Robot.h"

class DriveForwardGearClosestOne : public Command {
public:
	DriveForwardGearClosestOne();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // DriveForwardGearClosestOne_H
