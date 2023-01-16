#pragma once
#include "SDL.h"
#include "SDL_image.h"
#include "MosCraciun.h"
class Cadouri : public Caracter
{
	bool verde;
	bool coliziune=0;
	float winitial;
	float hinitial;
	bool collidingMap=0;
	int contorground=0;
	float timp = 2;
	bool destroy_Santa = 0;
	Physics p_obj;

public:
	Cadouri() {};
	Cadouri(int nrstari, SDL_Renderer*& renderer, const char* filename, bool verde, float winitial, float hinitial, int x, int y);


	void operator = (const Cadouri& ref);

	void SetFramesPerStare() final override;

	void EventTheCaracter(SDL_Event event) override final;

	void UpdateTheCaracter(SDL_Renderer*& renderer) override final;

	void CadouCollidingSanta(MosCraciun& mosul);

	void setCollidingMap(bool x);

	bool getDestroySanta();

	bool getColiziune();

};