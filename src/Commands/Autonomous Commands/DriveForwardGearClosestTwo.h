#ifndef DriveForwardGearClosestTwo_H
#define DriveForwardGearClosestTwo_H

#include "Commands/Subsystem.h"
#include "../../Robot.h"

class DriveForwardGearClosestTwo : public Command {
public:
	DriveForwardGearClosestTwo();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // DriveForwardGearClosestTwo_H
