#ifndef RotateClosest_H
#define RotateClosest_H

#include "Commands/Subsystem.h"
#include "../../Robot.h"

class RotateClosest : public Command {
public:
	RotateClosest();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // RotateClosest_H
