#pragma once
#include "SDL.h"
#include "SDL_image.h"
#include "Vector2D.h"
#include <iostream>
using namespace std;
class TextureRectangle
{
protected:
	SDL_Rect my_rect;
	Vector2D pos;
	SDL_Rect TheCollidedRect;
	SDL_Texture* my_texture;
	char* filename;
	bool coliziune;
	//Coliziune  my_CollidedRect;

public:

	//constructor fara parametri
	TextureRectangle() {

		this->filename = nullptr;
		my_texture = 0;
		};
	//constructor cu parametri
	TextureRectangle(SDL_Renderer*& renderer, const char *filename);
	//constructor de copiere
	TextureRectangle(const TextureRectangle& ref);

	//destructor
	~TextureRectangle();

	//operatori
	void operator = (const TextureRectangle& ref);
	

	//metode
	//afisare si reincarcare a texturii daca e nevoie
	void TextureRender(SDL_Renderer*& renderer, bool var);
	//setarea patratului in care afisam

	void SetPosition(int x, int y);
	void SetRectangle(int w, int h);
	void MoveRectagle()
	{
		my_rect.x = pos.my_X;
		my_rect.y = pos.my_Y;
	}
	//miscare pe axa Ox (pentru background)
	void UpdateMoveX();
	//Setter pentru numele fisierului
	void SetFile(const char *filename);
	//Setter pentru texture (in caz ca il schimb (de ex: la animatii)
	void SetTexture(SDL_Renderer*& renderer);
	//functie care returneaza patratul in care afisez
	SDL_Rect getRect();

	SDL_Rect getTheCollidedRect()
	{
		return this->TheCollidedRect;
	}
	//functie pentru setarea variabilei de coliziune
	void DetectedCollision(TextureRectangle& refobj);
	//update in caz de coliziune
	void UpdateIfCollisionBetweenTwo(TextureRectangle& refobj);

	//pentru debug, evidentierea patratului in care se afla obiectul
	void EvidentiateTheRect(SDL_Renderer* renderer)
	{
		SDL_SetRenderDrawColor(renderer, 255, 0, 255, SDL_ALPHA_OPAQUE);
		SDL_RenderDrawRect(renderer, &this->my_rect);
		//SetTheCollidedRect();
		SDL_RenderDrawRect(renderer, &this->TheCollidedRect);

	}

	//Setarea celui de al doilea patrat care ma ajuta la coliziuni
	virtual void SetTheCollidedRect()
	{
		this->TheCollidedRect.x = my_rect.x + my_rect.w / 5 + 12;
		this->TheCollidedRect.y = my_rect.y;
		this->TheCollidedRect.h = my_rect.h-10;
		this->TheCollidedRect.w = my_rect.w / 2.75 - 12;
	}


};