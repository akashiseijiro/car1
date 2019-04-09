#include "car.h"

int speed;
int rect, cir1,cir2,i;

Car::Car() {
	speed = 0;
}

void Car::makecar()
{
	rectangle(rect, 300, rect + 500, 600);   // coordinates of rectangle with numbers as points
	circle(cir1,600,50)  // 50 is radius,600 is position to make circle
	circle(cir2,600,50)  // same as above comment

}
void Car::accelerate()
{
	if (KeyUp)     // KEY FOR UP ARROW
		+ + speed;
}

void Car::decelerate()
{
	if (KeyDown)  // kEY FOR DOWN ARROW
		- - speed;
}

void Car::turnLeft() 
{
	if (KeyLeft)   // KEY FOR LEFT ARROW
		car - = speed;
}

void Car::turnRight()
{
	if ( KetRight)   // KEY FOR RIGHT ARROW
		car + = speed;
}