#include "mbed.h"
#include "IRremote.h"
#include "StepperMotorUni.h"
#include <stdio.h>
StepperMotorUni motor1(PTB8, PTB9, PTB10, PTB11);
StepperMotorUni motor2(PTC17, PTC16, PTC13, PTC12);

DigitalOut myled(LED1);
IRremote irInput(PTC11);

void forward() {
    motor1.move_rotates(750);
    motor2.move_rotates(-750);
}

void backward() {
    motor1.move_rotates(-750);
    motor2.move_rotates(750);
}

void right() {
    motor1.move_rotates(1000);
    motor2.move_rotates(-100);
}

void left() {
    motor1.move_rotates(100);
    motor2.move_rotates(-1000);
}

void start() {
    motor1.move_rotates(200);
    motor2.move_rotates(-200);
}

// union Data {
//     unsigned long intVal;
//     char hexVal[4];
// } data;

// void readIr() {
//     for(int i=0; i<4; ++i) {
//         data.hexVal[3-i] = irInput.readclear(i);
//     }
// }

int main() {
    motor1.move_rotates(1000);
    motor2.move_rotates(-1000);
    myled = 1;
    while (1) {
        // readIr();
        // if (data.intVal==4294918845) {
        //     forward();
        // } else if (data.intVal==4294919100) {
        //     backward();
        // } else if (data.intVal==4294907370) {
        //     right();
        // } else if (data.intVal==4294907625) {
        //     left();
        // } else {
        //     start();
        // }
    }
}