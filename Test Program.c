// DON'T CHANGE THIS AT ALL! THIS IS AUTOMATICALLY PUT IN WITH THE MOTOR AND SENSOR SETUP WIZARD! READ THE COMMENT BELOW THIS!
#pragma config(Motor,  port2,           example,       tmotorServoContinuousRotation, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

// use "int" to create a numeric variable, use "bool" to create a true/false variable
int intVariable = 0;
bool exampleVariable = false;

// use camel case: first letter of each word is capitalized EXCEPT for first word, no spaces, you can use underscores (this symbol: _ )
task taskName()
{

}

// use a while(true) loop to constantly run code
while(true)
{

}

// use the double & to make sure the program checks both conditions
while((vexRT[Btn5U]) && (vexRT[Btn6U] == false))
{

}

// if statements will resolve and keep repeating, which is what caused the jittery movement of the robot
if(intVariable = 7)
{

	intVariable = 5 * vexRT[Ch1];

}

// use if/else statements to do something when something occurs, and something else when it doesn't occur
if(intVariable > 10)
{
	// use this line of code to change the value of a motor (the name of the motor goes in the square brackets: [])
	motor[example] = 0;
}
else
{
	// use the stopMotor command to stop a specific motor, and use stopAllMotors to stop all motors (it's kind of obvious what that one does)
	stopMotor[example];
	stopAllMotors;
}

// > is "greater than", < is "less than", = is "equal to", >= is "greater than OR equal to", <= is "less than OR equal to"
>, <, =, >=, <=
// true is when something is correct, false is when something is NOT correct, use && when using multiple conditions in one statement
true, false, &&

// wait1Msec waits in amounts of milliseconds, wait10Msec waits in multiples of 10 milliseconds
wait1Msec()

// using "//" makes one line of code into a comment
//comment
not comment

// using "/*" and "*/" makes all the text inbetween the two into a comment
/*comment
comment*/
not comment

// make sure your main task and any tasks that start other tasks are all at the bottom, with the main task at the very bottom
task main()
{



}
