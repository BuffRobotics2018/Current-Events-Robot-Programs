#pragma config(Motor,  port2,           drive,         tmotorVex269_MC29, openLoop)
#pragma config(Motor,  port3,           arm,           tmotorVex269_MC29, openLoop)
#pragma config(Motor,  port5,           armPivot,      tmotorVex269_MC29, openLoop)
#pragma config(Motor,  port8,           clawServoA,    tmotorServoContinuousRotation, openLoop, driveLeft)
#pragma config(Motor,  port9,           clawServoB,    tmotorServoContinuousRotation, openLoop, driveRight)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task moveRobot() // Will move robot forward using Btn6U, and backward with Btn5U //
{
	while(true)// Program will constantly check for these events //
	{
		int leftTriggerA = vexRT[Btn5U];// sets the held/released value of Btn5U to variable leftTriggerA //
		int rightTriggerA = vexRT[Btn6U];// sets the held/released value of Btn6U to variable rightTriggerA //

		if (leftTriggerA)// while Btn5U is pressed, set motor "drive" speed to 127 //
		{
			motor[drive] = 127;
			wait1Msec(5000);
		}
		else// when Btn5U is released, the motor will stop //
		{
			stopMotor(drive);
		}

		if (rightTriggerA)// while Btn6U is pressed, set motor "drive" speed to -127 //
		{
			motor[drive] = -127;
			wait1Msec(5000);
		}
		else// when Btn6U is released, the motor will stop //
		{
			stopMotor(drive);
		}
	}
}

task clawMove() // Will open and close each claw using buttons Btn8U, Btn8L, Btn8R, and Btn8D //
{
	while(true)
	{
		if(vexRT[Btn8U])// when Btn8U is pressed, clawServoA will open //
		{
			motor[clawServoA] = 100;
		}

		if(vexRT[Btn8L])// when Btn8L is pressed, clawServoA will close //
		{
			motor[clawServoA] = 0;
		}

		if(vexRT[Btn8R])// when Btn8R is pressed, clawServoB will open //
		{
			motor[clawServoB] = 0;
		}

		if(vexRT[Btn8D])// when Btn8D is pressed, clawServoB will close //
		{
			motor[clawServoB] = 100;
		}
	}
}

task armMove() // Moves arm forwards and backwards with Btn5D and Btn6D //
{
	while(true)// Program will constantly check for these events //
	{
		int leftTriggerB = vexRT[Btn5D];// sets the held/released value of Btn5D to variable leftTriggerB //
		int rightTriggerB = vexRT[Btn6D];// sets the held/released value of Btn6D to variable rightTriggerB //

		if (leftTriggerB)// while Btn5D is pressed, set motor "arm" speed to 127 //
		{
			motor[arm] = 127;
			wait1Msec(5000);
		}
		else// once Btn5D is released, the motor will stop //
		{
			stopMotor(arm);
		}

		if (rightTriggerB)// while Btn6D is pressed, set motor "arm" speed to -127 //
		{
			motor[arm] = -127;
			wait1Msec(5000);
		}
		else// once Btn6D is released, the motor will stop //
		{
			stopMotor(arm);
		}
	}
}

task armRotate() // Rotates arm platform with Btn7R and Btn7L //
{
	while(true)
	{
		int rotateRight = vexRT[Btn7R];// sets the held/released value of Btn7R to the variable "rotateRight" //
		int rotateLeft = vexRT[Btn7L];// sets the held/released value of Btn7L to the variable "rotateLeft" //

		if (rotateRight)// while Btn7R is pressed, set motor "armPivot" speed to 127 (rotates right) //
		{
			motor[armPivot] = 127;
			wait1Msec(5000);
		}
		else// once Btn7R is released, the motor will stop //
		{
			stopMotor(armPivot);
		}

		if (rotateLeft)// while Btn7L is pressed, set motor "armPivot" speed to -127 (rotates left) //
		{
			motor[armPivot] = -127;
			wait1Msec(5000);
		}
		else// once Btn7L is released, the motor will stop //
		{
			stopMotor(armPivot);
		}
	}
}

task main()
{
	while(true)// run all tasks //
	{
		startTask(moveRobot);// task which moves robot forwards and backwards //
		startTask(clawMove);// task which opens and closes the claw //
		startTask(armMove);// task which moves the arm forwards and backwards //
		startTask(armRotate);// task which rotates the arm base //
	}
}