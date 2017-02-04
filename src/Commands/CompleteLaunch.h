#ifndef CompleteLaunch_H
#define CompleteLaunch_H

#include <Commands/CommandGroup.h>
#include "Commands/Rotate.h"
#include "Commands/Launch.h"
#include "Commands/SetLauncherAngle.h"
#include "Commands/Load.h"

class CompleteLaunch : public CommandGroup {
public:
	CompleteLaunch();
};

#endif  // CompleteLaunch_H
