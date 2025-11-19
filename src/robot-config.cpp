#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen.
vex::brain  Brain;

vex::motor frontLeft(vex::PORT12, true);
vex::motor midLeft(vex::PORT11);
vex::motor backLeft(vex::PORT13, true);
vex::motor frontRight(vex::PORT18);
vex::motor midRight(vex::PORT20, true);
vex::motor backRight(vex::PORT10);

vex::motor_group leftMotors {frontLeft, midLeft, backLeft};
vex::motor_group rightMotors {frontRight, midRight, backRight};

vex::inertial imu(vex::PORT4);

vex::rotation v_tracker(vex::PORT6);
vex::rotation h_tracker(vex::PORT16);
    

vex::digital_out park = vex::digital_out(Brain.ThreeWirePort.D);
vex::digital_out loader = vex::digital_out(Brain.ThreeWirePort.B);
vex::digital_out wing = vex::digital_out(Brain.ThreeWirePort.A);


vex::motor topRoller ( vex::PORT5, true );
vex::motor conveyor ( vex::PORT9 );



void vexcodeInit( void ) {
  // nothing to initialize
}