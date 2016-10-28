#include "Intake.h"
#include "../RobotMap.h"

//TODO Add include for default command file

Intake::Intake() : Subsystem("Intake") {
		Lift = RobotMap::intakeLift;
		Wheels = RobotMap::intakeWheels;
		LiftEncoder = RobotMap::intakeLiftEncoder;
		LiftEncoder->Reset();
		//TODO initialize isBallHeld to false
}

void Intake::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//TODO set default command
	//eg. SetDefaultCommand(new NameOfCommand());
}

//TODO Up()
//TODO Down()
//TODO In()
//TODO Out()
//TODO GetEncoder()

//TODO SetIsBallHeld()
//TODO GetIsBallHeld()
