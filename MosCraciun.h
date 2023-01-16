#pragma once
#include "Caracter.h"
#include "Physics.h"
class MosCraciun : public Caracter
{
	float timp;
	float timpinitial;
	bool grounded = 0;
	bool butond, butona, butonw = false, butons;
	int contor = 0;
	int stillJumping = 0;
	int stillSliding = 0;
	int sare = 2, contorSare, contorslide, contorDead = 0;
	bool rectS;


	Physics p_obj;
public:
	MosCraciun(int nrstari, SDL_Renderer*& renderer, const char* filename);
	void SetFramesPerStare() final override;
	void EventTheCaracter(SDL_Event event) final override;
	void UpdateTheCaracter(SDL_Renderer*& renderer) final override;
	bool MutCuMouse(SDL_Event event);
	void setGrounded(bool x);
	void setTimp(float x);
	void destroy_Santa();
	
	//TO DO: Destructor
};