#ifndef HoldBall_H
#define HoldBall_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class HoldBall: public Command
{
public:
	HoldBall();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
