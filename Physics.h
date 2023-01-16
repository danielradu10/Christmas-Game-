#pragma once
#include "Vector2D.h"
#define MASA 1.03f
#define GRAVITY 9.8f
#define FRECARE 0.25
class Physics
{
	float masa;
	float gravity;
	Vector2D Force;
	Vector2D Friction;
	Vector2D the_acceleration;
	Vector2D the_velocity;
	Vector2D deplasare;

public:
	void SetMasa();
	void SetGravity();
	void SetFriction();
	void SetForceX(float f);
	void SetForceY(float f);

	void setAll(float fx, float fy);
	void Update(float delta_timp);

	Vector2D GetDeplasare();




};