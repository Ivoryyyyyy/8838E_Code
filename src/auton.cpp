#include "main.h"
#include "api.h"
#include "pid.h"
#include "robot.h"
#include "auton.h"
using namespace pros;
void autons1 () {
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
driveClampSlow(-1780, 40, 45);
driveStraight2(100);
Redirect.move(127);
delay(200);
Redirect.move(0);
Redirect.set_brake_mode(E_MOTOR_BRAKE_HOLD);
driveTurn(150);
driveTurn(15);
Intake.move(-80);
Intake_Layer1.move(-127);
driveStraight2(750); // first ring 
driveTurn(-25);
driveSlow(350, 20);
delay(50); //second ring
driveTurn(-100);
driveSlow(600, 40);
 bool color = true;
   // while(color){
// if(eyes.get_hue()<140){
//     Intake.move(0);
//     Intake_Layer1.move(0);
//     break;
// }
//     }
delay(90);
// Intake.move(0);
// Intake_Layer1.move(0);
// ColorSenseIntakeRed(-80);//third ring 
driveTurn(-100);
driveStraight2(1300);
Redirect.move(-127);//touches ladder
}



void autons2() {
Redirect.set_brake_mode(E_MOTOR_BRAKE_HOLD);
driveTurn(35);
driveSlow(305, 15);
Redirect.move(-127);
delay(600);
Redirect.move(127);
delay(350);
Redirect.move(0);
Redirect.set_brake_mode(E_MOTOR_BRAKE_HOLD);
driveStraight2(-500);
driveTurn(70);
Redirect.move(127);
delay(200);
Redirect.move(0);
    Intake.move(-80);
    Intake_Layer1.move(-127);
    driveSlow(1000, 25);
    bool color = true;
    while(color){
if(eyes.get_hue()<30){
    Intake.move(0);
    Intake_Layer1.move(0);
    break;
}
    }
driveSlow(-750, 50);
driveTurn(-80);
driveClampSlow(-1550, 20, 45);
// driveStraight2(100);
driveTurn(-110);
Intake.move(-80);
Intake_Layer1.move(-127);
delay(250);
driveStraight2(775);
Intake.move(-85);
driveStraight2(-1555);
// driveStraight2(750);
// driveTurn(160);
// driveTurn(30);
// driveStraight2(800);
// Redirect.move(-127)
}

void autons3() {
Redirect.set_brake_mode(E_MOTOR_BRAKE_HOLD);
Redirect.move(-17);
delay(75);
driveSlow(1850, 75); // speed up later 
driveTurn(-35);
driveSlow(155, 30);
StakeWing.set_value(true);
Redirect.move(-127);
delay(575);
Redirect.move(127);
delay(400);
Redirect.set_brake_mode(E_MOTOR_BRAKE_HOLD);
// Redirect.move(0);
// driveTurn(-8);
// StakeWing.set_value(false);
// driveStraight2(-770);
// delay(50);
// Redirect.move(127);
// delay(200);
// Redirect.move(0);
// Redirect.set_brake_mode(E_MOTOR_BRAKE_HOLD);
// Intake.move(-80);
// Intake_Layer1.move(-127);
// driveSlow(325, 100);
//  bool color = true;
//     while(color){
// if(eyes.get_hue()<30){
//     Intake.move(0);
//     Intake_Layer1.move(0);
//     break;
// }
//     }
// Redirect.move(-10);
// StakeWing.set_value(true);
// driveStraight2(230);
// driveTurn(-150);
// Redirect.move(0);
// StakeWing.set_value(false);
// driveTurn(-23);
// driveClampSlow(-1100, 45, 50);
// Intake.move(-85);
// // driveTurn(-150);
// // // driveTurn(-30);
// // driveStraight2(-1400);
}                               