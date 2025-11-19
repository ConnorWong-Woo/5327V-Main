using namespace vex;

extern brain Brain;

//To set up a motor called LeftFront here, you'd use


extern vex::motor frontLeft;
extern vex::motor backLeft;
extern vex::motor frontRight;
extern vex::motor backRight;

extern vex::motor_group leftMotors;
extern vex::motor_group rightMotors;

extern vex::inertial imu;

extern vex::rotation v_tracker;
extern vex::rotation h_tracker;
    

extern vex::digital_out p;

extern vex::digital_out park;
extern vex::digital_out loader;
extern vex::digital_out wing;

extern vex::motor topRoller;
extern vex::motor conveyor;



void  vexcodeInit( void );