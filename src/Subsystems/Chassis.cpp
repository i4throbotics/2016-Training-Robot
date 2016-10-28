#include "Chassis.h"
#include "../RobotMap.h"

//TODO Add include for default command file

Chassis::Chassis() : Subsystem("Chassis") {
    frontLeft = RobotMap::chassisFrontLeft;
    frontRight = RobotMap::chassisFrontRight;
    backLeft = RobotMap::chassisBackLeft;
    backRight = RobotMap::chassisBackRight;
    robotDrive = RobotMap::chassisRobotDrive;
	FLEncoder = RobotMap::chassisFrontLeftEncoder;
	BLEncoder = RobotMap::chassisFrontRightEncoder;
	FREncoder = RobotMap::chassisBackLeftEncoder;
	BREncoder = RobotMap::chassisBackRightEncoder;
}

void Chassis::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//TODO set default command
	//eg. SetDefaultCommand(new NameOfCommand());
}


// Put methods for controlling this subsystem
// here. Call these from Commands.

//TODO Drive()

//TODO GetBLEncoder()
//TODO GetFLEncoder()
//TODO GetBREncoder()
//TODO GetFREncoder()

//TODO ResetBLEncoder()
//TODO ResetFLEncoder()
//TODO ResetBREncoder()
//TODO ResetFREncoder()

//TODO ResetEncoders()

//TODO SetBLSpeed() remember to negate
//TODO SetFLSpeed() remember to negate
//TODO SetBRSpeed()
//TODO SetFRSpeed()

//TODO: AutoDrive()

