#include "Physics.h"
void Physics::SetMasa()
{
	this->masa = 1.00f;

}
void Physics::SetGravity()
{
	this->gravity = GRAVITY;
}
void Physics::SetFriction()
{
	this->Force.my_X = FRECARE;
}

void Physics::SetForceX(float f)
{
	this->Force.my_X = f;
}

void Physics::SetForceY(float f)
{
	this->Force.my_Y = f;
}



void Physics::setAll(float fx, float fy)
{
	SetMasa();
	SetGravity();
	SetForceX(fx);
	SetForceY(fy);
	SetFriction();
}
void Physics::Update(float delta_timp)
{
	the_acceleration.my_X = (Force.my_X - Friction.my_X) / masa;
	the_velocity.my_X = the_acceleration.my_X * delta_timp;
	deplasare.my_X = the_velocity.my_X * delta_timp;
	the_acceleration.my_Y = (Force.my_Y - gravity) / masa;
	the_velocity.my_Y = the_acceleration.my_Y * delta_timp;
	deplasare.my_Y = the_velocity.my_Y * delta_timp;
}

Vector2D Physics::GetDeplasare()
{
	return deplasare;
}
