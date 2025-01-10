#include "main.h"
#include "api.h"
#include "pid.h"
#include "robot.h"
#include "auton.h"
using namespace pros;

bool MogoMechToggle = false;

void autons1 () {

    bool MogoMechToggle = true;
    MogoMech.set_value(true);
// driveStraight(1600);
// driveTurn(15);
// delay(50);
// driveSlow(300, 100);
// StakeWing.set_value(true);
// //goal grab
// delay(50);
// driveSlow(-1000, 50);
// StakeWing.set_value(false);
// driveTurn(120);
// delay(50);
// driveTurn(72.5);
// // driveClampSlow(-00, 10, 60);
// driveStraight(-950);
// delay(50);
// //goal clamp
// justIntake(1);
// // first ring 
// driveTurn(-55);
// MogoMech.set_value(true);
// ColorSenseIntakeRed(127);




// StakeWing.set_value(false);
// Redirect.move(-127);
// delay(410);
// Redirect.move(127);
// delay(300);
// Redirect.move(0);
// Redirect.set_brake_mode(E_MOTOR_BRAKE_HOLD);
// driveTurn(30);
// driveClampSlow(-950, 25, 50);
// driveStraight2(75);
// Redirect.move(127);
// delay(200);
// Redirect.move(0); //alliance stake code & mogo
// //driveArcL(-95, 200, 1000);
// MogoMech.set_value(true);
// driveTurn(125);
// Intake.move(-90);
// Intake_Layer1.move(-127);
// driveStraight2(900);
// delay(50);
// driveTurn(75);
// driveStraight2(825);
// driveTurn(-45);
// driveStraight2(815);
// driveTurn(-55);
// driveStraight2(915);
// delay(50);
// //RingHold(-95, false); 
// Intake.move(-45);
// driveSlow(-850, 75);
// delay(300);
// Intake.move(0);
// driveTurn(85);
// Redirect.move(-127);
// delay(410);
// Redirect.move(127);
// delay(300);
// Redirect.move(0);


//ring side auton red
Redirect.set_brake_mode(E_MOTOR_BRAKE_HOLD);
driveTurn(-35);
driveSlow(280, 15);
Redirect.move(-127);
delay(600);
Redirect.move(127);
delay(350);
Redirect.move(0);
Redirect.set_brake_mode(E_MOTOR_BRAKE_HOLD);
driveTurn(10.5);
// driveTurn(-10);
driveClampSlow(-1780, 40, 50);
driveStraight2(100);
Redirect.move(127);
delay(200);
Redirect.move(0);
Redirect.set_brake_mode(E_MOTOR_BRAKE_HOLD);
driveTurn(150);
driveTurn(14);
Intake.move(-80);
Intake_Layer1.move(-127);
driveStraight2(750); // first ring 
driveTurn(-26);
driveSlow(350, 20);
delay(50); //second ring
driveTurn(-100);
driveSlow(600, 50);
Intake.move(-95);
delay(90);
// Intake.move(0);
// Intake_Layer1.move(0);
// ColorSenseIntakeRed(-80);//third ring 
driveTurn(-115);
driveStraight2(1000);
Redirect.move(-127);//touches ladder
}



void autons2() {
Redirect.set_brake_mode(E_MOTOR_BRAKE_HOLD);
driveTurn(35);
driveSlow(305, 15);
Redirect.move(-127);
delay(450);
Redirect.move(127);
delay(350);
Redirect.move(0);
Redirect.set_brake_mode(E_MOTOR_BRAKE_HOLD);
driveStraight2(-500);
driveTurn(60);
Redirect.move(127);
delay(200);
Redirect.move(0);
    Intake.move(-80);
    Intake_Layer1.move(-127);
    driveSlow(700, 25);  
    bool color = true;
    while(color){
if(eyes.get_hue()<25){
    Intake.move(0);
    Intake_Layer1.move(0);
    break;
}
    }
driveSlow(-600, 70);
driveTurn(-85);
driveClampSlow(-1550, 20, 65);
driveStraight2(100);
driveTurn(-110);
Intake.move(-100);
Intake_Layer1.move(-127);
delay(250);
driveStraight2(775);
Intake.move(-85);
driveTurn(-160);
driveSlow(950, 100);
Redirect.move(-127);
}

void autons3() {
driveSlow(1875, 50); // speed up later 
driveTurn(-45);
// driveStraight2(150);
StakeWing.set_value(true);
delay(500);
driveTurn(-80);
StakeWing.set_value(false);
Intake_Layer1.move(-127);
driveStraight2(400);
driveTurn(-120);
// work in progress
}       

void arc(){
Redirect.move(-127);
delay(600);
Redirect.move(127);
delay(100);
Redirect.move(0);
driveStraight2(-485);
driveTurn(89);
driveClampSlow(-1200, 30, 50);
driveStraight2(200);
delay(200);
driveTurn(91);
Intake.move(-95);
Intake_Layer1.move(-127);
Redirect.move(10);
// StakeWing.set_value(true);
driveArcRF(90, 850, 2000);
Redirect.move(0);
Redirect.set_brake_mode(E_MOTOR_BRAKE_HOLD);
driveTurn(-60);
driveStraight2(500);
driveArcLF(70, 500, 1500);
driveStraight2(30);
bool color_sort = true;
while(color_sort){
if(eyes.get_hue()<25){
    delay(40);
    Intake.move(0);
    Intake_Layer1.move(0);
    break;
}
    }
driveTurn(-150);
driveTurn(-20);
driveSlow(25, 150);
Redirect.move(-127);
delay(600);
Redirect.move(127);
delay(650);
Redirect.move(0);

}