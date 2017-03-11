#ifndef DriveForwardFarthestOne_H
#define DriveForwardFarthestOne_H

#include "Commands/Subsystem.h"
#include "../../Robot.h"

class DriveForwardFarthestOne : public Command {
public:
	DriveForwardFarthestOne();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // DriveForwardFarthestOne_H
