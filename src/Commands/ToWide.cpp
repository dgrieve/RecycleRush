#include "ToWide.h"

ToWide::ToWide()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
}

// Called just before this Command runs the first time
void ToWide::Initialize()
{
	claw -> Wide();
}

// Called repeatedly when this Command is scheduled to run
void ToWide::Execute()
{

}

// Make this return true when this Command no longer needs to run execute()
bool ToWide::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void ToWide::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ToWide::Interrupted()
{

}
