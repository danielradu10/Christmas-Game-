#include "Cookie.h"
Cookie::Cookie(SDL_Renderer*& renderer, const char* filename, int winitial, int wfinal, int xinitial) : TextureRectangle(renderer, filename)
{
	bool colectat = 0;
	this->winitial = winitial;
	this->wfinal = wfinal;
	this->xinitial = xinitial;
};

void Cookie::setColectat(MosCraciun& ref)
{
	this->SetTheCollidedRect();
	if (SDL_HasIntersection(&this->my_rect, &ref.getRect()) && SDL_HasIntersection(&this->my_rect, &ref.getTheCollidedRect()))
	{
		colectat = 1;
	}

};


void Cookie::SetTheCollidedRect()
{
	this->TheCollidedRect.x = my_rect.x + my_rect.w / 5 + 12;
	this->TheCollidedRect.y = my_rect.y;
	this->TheCollidedRect.h = my_rect.h - 24;
	this->TheCollidedRect.w = my_rect.w / 2.75;
};


bool Cookie::getColectat()
{
	return colectat;
}

void Cookie::Update()
{
	this->UpdateMoveX();

	if (colectat == 1)
	{
		this->SetRectangle(0, 0);
		contorCookie++;
		colectat = 1;
		if (contorCookie == 10)
		{
			this->SetRectangle(winitial, wfinal);
			contorCookie = 0;
			colectat = 0;


		}
		this->SetPosition(this->xinitial - 600, 260);
	}
};