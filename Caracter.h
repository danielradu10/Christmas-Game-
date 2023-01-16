#pragma once
#include "SDL.h"
#include "SDL_image.h"
#include <iostream>
#include "TextureRectangle.h"
#include "Vector2D.h"

using namespace std;
class Caracter : public TextureRectangle {
protected:
	int nrstari;
	const char ***MatriceStari;

public:
	Caracter()
	{

	}
	Caracter(int nrstari, SDL_Renderer*& renderer, const char* filename);
	virtual void SetFramesPerStare() = 0;
	virtual void EventTheCaracter(SDL_Event event) = 0;
	virtual void UpdateTheCaracter(SDL_Renderer*& renderer) = 0;
	~Caracter()
	{
		for (int i = 0; i < nrstari; i++)
		{
			if (MatriceStari != nullptr)
			{
				delete MatriceStari[i];
			}
		}
		MatriceStari = nullptr;
	}
	//TO DO: DESTRUCTOR
};