#include "mbed.h"
#include "StepperMotorUni.h"
#include "Keypad.h"
#include <stdio.h>
Keypad kpad(PTD2, PTD0, PTD5, PTA13, PTE1, PTE0, PTD1, PTD3);
StepperMotorUni motor( PTB8, PTB9, PTB10, PTB11 );

int main()
{
    while ( 1 ) {
        
        char key;
        int released = 1;
    
        key = kpad.ReadKey(); //read the current key pressed
        if(key == '\0')
            released = 1; //set the flag when all keys are released
    
        if((key != '\0') && (released == 1)) { //if a key is pressed AND previous key was released

            if (key == 'A') {
            motor.move_rotates( 150 );
            } else if (key == 'B') {
                motor.move_rotates(-500);
}
            released = 0; //clear the flag to indicate that key is still pressed

    }
}
}