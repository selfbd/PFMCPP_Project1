#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 
 5) When you finish, commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].

Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase

//  1) 
//  Noun:       fan
//  action 1:   rotate clockwise
                fan.rotateClockwise();
//  action 2:   rotate counter clockwise
                fan.rotateCounterClockwise();
//  action 3:   cool room
                fan.coolRoom();

//  2)
//  Noun:       engine
//  action 1:   start
                engine.start();
//  action 2:   idle
                engine.idle();
//  action 3:   stop
                engine.stop();
 
//  3)
//  Noun:       smart phone
//  action 1:   display UI
                phone.displayUi();
//  action 2:   take photo
                phone.takePhoto();
//  action 3:   open app  
                phone.openApp();
 
//  4)
//  Noun:       barcode scanner
//  action 1:   scan barcode
                scanner.scanBarcode();
//  action 2:   interpret barcode
                scanner.interretBarcode();
//  action 3:   send scanned characters
                scanner.sendScannedCharacters();

//  5)
//  Noun:       printer
//  action 1:   scan
                printer.scan();
//  action 2:   copy
                printer.copy();
//  action 3:   print
                printer.print();

//  6)
//  Noun:       bus
//  action 1:   move forward
                bus.moveForward();
//  action 2:   move backward
                bus.moveBackward();
//  action 3:   stop
                bus.stop();

//  7)
//  Noun:       dishwasher
//  action 1:   wash
                dishwasher.wash();
//  action 2:   rinse
                dishwasher.rinse();
//  action 3:   dry
                dishwasher.dry();
 
//  8)
//  Noun:       motor
//  action 1:   start
                motor.start();
//  action 2:   rotate clockwise
                motor.rotateClockwise();
//  action 3:   rotate counter clockwise
                motor.rotateCounterClockwise();

//  9)          
//  Noun:       lawnmower
//  action 1:   start
                lawnmower.start();
//  action 2:   rotate blades
                lawnmower.rotateBlades();
//  action 3:   propel forward
                lawnmower.propelForward();

//  10)
//  Noun:       garage door opener
//  action 1:   open garage door
                opener.openGarageDoor();
//  action 2:   close garage door
                opener.closeGarageDoor();
//  action 3:   illuminate garage   
                opener.illuminateGarageDoor();

#endif

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
