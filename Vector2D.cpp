#include "Vector2D.h"
Vector2D::Vector2D()
{
	this->my_X = 0;
	this->my_Y = 0;
}
Vector2D::Vector2D(float x, float y)
{
	this->my_X = x;
	this->my_Y = y;
}

Vector2D Vector2D::operator + (Vector2D& ref)
{
	Vector2D ob(0, 0);
	ob.my_X = this->my_X + ref.my_X;
	ob.my_Y = this->my_Y + ref.my_Y;
	return ob;
}


Vector2D Vector2D::operator - (Vector2D& ref)
{
	Vector2D ob(0, 0);
	ob.my_X = this->my_X - ref.my_X;
	ob.my_Y = this->my_Y - ref.my_Y;
	return ob;
}


Vector2D Vector2D::operator * (Vector2D& ref)
{
	Vector2D ob(0, 0);
	ob.my_X = this->my_X * ref.my_X;
	ob.my_Y = this->my_Y * ref.my_Y;
	return ob;
}


void Vector2D::GetMousePos(SDL_Event& event)
{

	if (event.type == SDL_MOUSEMOTION)
	{
		my_X = event.motion.x;
		my_Y = event.motion.y;
	}
}