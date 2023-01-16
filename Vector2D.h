#pragma once
#include "SDL.h"
class Vector2D
{
public:
	float my_X;
	float my_Y;

	Vector2D();
	Vector2D(float x, float y);

	Vector2D operator + (Vector2D& ref);

	Vector2D operator - (Vector2D& ref);

	Vector2D operator * (Vector2D& ref);


	void GetMousePos(SDL_Event& event);

};