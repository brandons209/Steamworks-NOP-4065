#ifndef DriveForwardGearFarthestTwo_H
#define DriveForwardGearFarthestTwo_H

#include "Commands/Subsystem.h"
#include "../../Robot.h"

class DriveForwardGearFarthestTwo : public Command {
public:
	DriveForwardGearFarthestTwo();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // DriveForwardGearFarthestTwo_H
