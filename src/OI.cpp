#include "OI.h"

#include "SmartDashboard/SmartDashboard.h"
//TODO add includes for any commands you're adding buttons for

OI::OI() {
    // Process operator interface input here.
    xboxController.reset(new Joystick(0));
    
    //Declare buttons
    //TODO set buttonNumbers

    //Set Commands for each button (WhenPressed, WhileHeld, ToggleWhenPressed)
    //TODO map buttons

}

//TODO GetXboxController()
//TODO GetAxis()
//TODO GetXAxis()
//TODO GetYAxis()
