#ifndef IntakeWheelsIn_H
#define IntakeWheelsIn_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class IntakeWheelsIn: public Command
{
public:
	IntakeWheelsIn();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
