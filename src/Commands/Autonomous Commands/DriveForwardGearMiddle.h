#ifndef DriveForwardGearMiddle_H
#define DriveForwardGearMiddle_H

#include "Commands/Subsystem.h"
#include "../../Robot.h"

class DriveForwardGearMiddle : public Command {
public:
	DriveForwardGearMiddle();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // DriveForwardGearMiddle_H
