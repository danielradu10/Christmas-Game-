#pragma once
#include "TextureRectangle.h"
#include "MosCraciun.h"
class Cookie : public TextureRectangle
{
	bool colectat;
	int contorCookie = 0;
	int winitial;
	int wfinal;
	int xinitial;
public: 
	Cookie(SDL_Renderer*& renderer, const char* filename, int winitial, int wfinal, int xinitial);

public:
	void setColectat(MosCraciun& ref);

	void SetTheCollidedRect();

	bool getColectat();
	void Update();
};