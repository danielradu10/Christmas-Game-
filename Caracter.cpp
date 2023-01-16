#include "Caracter.h"

Caracter::Caracter(int nrstari, SDL_Renderer*& renderer, const char* filename) : TextureRectangle(renderer, filename)
{
	this->nrstari = nrstari;
	this->MatriceStari = new const char** [nrstari];
}