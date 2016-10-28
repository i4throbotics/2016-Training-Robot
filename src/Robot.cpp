
#include "Robot.h"
std::shared_ptr<Chassis> Robot::chassis;
std::shared_ptr<Intake> Robot::intake;
std::unique_ptr<OI> Robot::oi;

void Robot::RobotInit() {
	RobotMap::init();

	chassis.reset(new Chassis());
	intake.reset(new Intake());

	oi.reset(new OI());

	//Set SmartDashboard Defaults / inputs
}

void Robot::DisabledInit() {
}

void Robot::DisabledPeriodic() {
	Scheduler::GetInstance()->Run();
}

void Robot::AutonomousInit() {

	//TODO Get SmartDashboard Input / Start Auto Program
}

void Robot::AutonomousPeriodic() {
	Scheduler::GetInstance()->Run();

	//TODO Auto: Update SmartDashboard
}

void Robot::TeleopInit() {
	//End Auto Program
		if (autonomousCommand.get() != nullptr)
			autonomousCommand->Cancel();
}

void Robot::TeleopPeriodic() {
	Scheduler::GetInstance()->Run();

	//TODO Teleop: Update SmartDashboard
}

void Robot::TestPeriodic() {
	lw->Run();
}

START_ROBOT_CLASS(Robot);

