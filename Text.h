#pragma once
#include "SDL.h"
#include "SDL_image.h"
#include "SDL_ttf.h"
#include <iostream>
#include <string.h>
using namespace std;
class Text
{
	 char* vectorText;
	int dim;
	const char* numeFont;
	SDL_Texture* texture;
	SDL_Rect patratText;

public:
	Text();
	~Text();
	void SetFilesDimVector(int size);
	void SetRect(int x, int y, int w, int h);

	void SetFilesNamesVector(const char* x);

	void settexture(SDL_Renderer*& ren);

	void afisareText(SDL_Renderer*& ren);
};