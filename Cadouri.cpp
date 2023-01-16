#include "Cadouri.h"
#include "Map.h"

Cadouri::Cadouri(int nrstari, SDL_Renderer*& renderer, const char* filename, bool verde, float winitial, float hinitial, int x, int y) : Caracter(nrstari, renderer, filename)
{
	coliziune = 0;
	this->verde = verde;
	this->winitial = winitial;
	this->hinitial = hinitial;
	this->SetPosition(x, y);
	this->SetRectangle(winitial, hinitial);

}


void Cadouri::operator = (const Cadouri& ref)
{
	this->TextureRectangle::operator=(ref);
	coliziune = 0;
	this->verde = ref.verde;
	this->winitial = ref.winitial;
	this->hinitial = ref.hinitial;
	this->SetPosition(ref.my_rect.x, ref.my_rect.y);
	this->SetRectangle(ref.winitial, ref.hinitial);
}


void Cadouri::SetFramesPerStare()
{

}
void Cadouri::EventTheCaracter(SDL_Event event) 
{
	Uint32 x;
	x = SDL_GetTicks();
	if (x % 18 == 0)
	{
		timp = timp + 0.1;
		if (timp == 4)
		{
			timp = 2;
		}
	}
}



void Cadouri:: UpdateTheCaracter(SDL_Renderer*& renderer)
{
	this->TextureRender(renderer, false);
	if (collidingMap == 0)
	{

		this->p_obj.SetForceY(9);
		this->p_obj.Update(2);

		this->pos.my_Y = this->pos.my_Y - p_obj.GetDeplasare().my_Y;
		this->MoveRectagle();

	}
	else
	{
		this->p_obj.SetForceY(9.8);
		this->p_obj.Update(timp);
		this->MoveRectagle();
		contorground++;
		cout << contorground;
		if (contorground == 30)
		{


			contorground = 0;
			this->SetPosition(rand() % (620 - 20 + 1), -50);
			collidingMap = 0;
		}



	}

	if (coliziune)
	{
		if (verde == 0)
		{
			this->p_obj.SetForceY(9.8);
			this->p_obj.Update(timp);
			this->MoveRectagle();
			this->SetRectangle(0, 0);
			this->SetPosition(rand() % (620 - 20 + 1), -50);
			this->SetRectangle(winitial, hinitial);
			coliziune = 0;

		}
		else
		{
			destroy_Santa = 1;

		}
	}
	else
	{
		this->p_obj.SetForceY(5);
		this->p_obj.Update(timp);
		this->MoveRectagle();
		this->my_rect.y = this->my_rect.y + p_obj.GetDeplasare().my_Y;

	}
	if (this->pos.my_Y > 640)
	{
		this->SetPosition(rand() % (10 - 0 + 1), -50);
		this->MoveRectagle();
	}
}


void Cadouri:: CadouCollidingSanta(MosCraciun& mosul)
{
	if (SDL_HasIntersection(&mosul.getTheCollidedRect(), &this->getRect()) == SDL_TRUE && SDL_HasIntersection(&mosul.getRect(), &this->getTheCollidedRect()) == SDL_TRUE)
	{
		this->coliziune = 1;

	}
}

void Cadouri::setCollidingMap(bool x)
{
	this->collidingMap = x;
}


bool Cadouri:: getDestroySanta()
{
	return destroy_Santa;
}


bool Cadouri:: getColiziune()
{
	return coliziune;
}

