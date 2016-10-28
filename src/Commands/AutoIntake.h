#ifndef AutoIntake_H
#define AutoIntake_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class AutoIntake: public Command
{
public:
	AutoIntake();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
