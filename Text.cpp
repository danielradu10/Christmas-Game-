#include "Text.h"
Text::Text()
{
	vectorText = nullptr;
	texture = nullptr;
}
Text::~Text()
{
	if (vectorText != nullptr)
	{
		delete[]vectorText;
		vectorText = nullptr;
	}
	if (numeFont != nullptr)
	{
		//delete[]numeFont;
		numeFont = nullptr;
	}
	SDL_DestroyTexture(texture);
}
void Text::SetFilesDimVector(int size)
{
	this->dim = size;
	if (vectorText == nullptr)
	{
		vectorText = new  char[dim];
	}

}

void Text::SetRect(int x, int y, int w, int h)
{
	patratText.x = x;
	patratText.y = y;
	patratText.w = w;
	patratText.h = h;
}

void Text::SetFilesNamesVector(const char* x)
{

	this->vectorText = new  char[strlen(x) + 1];
	strcpy_s(this->vectorText, strlen(x) + 1, x);

}

void Text::settexture(SDL_Renderer*& ren)
{
	TTF_Font* font = TTF_OpenFont("Assets/arial.ttf", 32);
	SDL_Surface* surtext = TTF_RenderText_Solid(font, vectorText, { 255, 255, 255 });
	this->texture = SDL_CreateTextureFromSurface(ren, surtext);
	SDL_FreeSurface(surtext);
}


void Text::afisareText(SDL_Renderer*& ren)
{
	SDL_RenderCopy(ren, texture, nullptr, &patratText);
}