#include "TextureRectangle.h"

TextureRectangle::TextureRectangle(SDL_Renderer *&renderer, const char *filename)
{
	//creare suprafata
	SDL_Surface* sur;
	this->filename = new char[strlen(filename) + 1];
	strcpy_s(this->filename, strlen(filename) + 1, filename);
	//sur = ResourceManager::GetInstance().GetSurface(filename);
	//SDL_Surface* surface;
	sur = IMG_Load(filename);
	my_texture = SDL_CreateTextureFromSurface(renderer, sur); //transform suprafata in texture
	
	
}

TextureRectangle::TextureRectangle(const TextureRectangle& ref)
{
	this->my_rect = ref.my_rect;
	if (ref.my_texture != nullptr)
	{
		this->my_texture = my_texture;
	}
	else
	{
		this->my_texture = nullptr;
	}
	if (ref.filename != nullptr)
	{
		this->filename = new char[strlen(ref.filename) + 1];
		strcpy_s(this->filename, strlen(ref.filename) + 1, ref.filename);
	}
	else
	{
		this->filename = nullptr;
	}
	this->coliziune = ref.coliziune;
	this->TheCollidedRect = ref.TheCollidedRect;
}

TextureRectangle::~TextureRectangle()
{
	SDL_DestroyTexture(my_texture);
	if (filename != nullptr)
	{
		delete[] filename;
		filename = nullptr;
	}
}

void TextureRectangle::operator=(const TextureRectangle& ref)
{
	this->my_rect = ref.my_rect;
	if (ref.filename != nullptr)
	{
		this->filename = new char[strlen(ref.filename) + 1];
		strcpy_s(this->filename, strlen(ref.filename) + 1, ref.filename);
	}
	else
	{
		this->filename = nullptr;
	}
	
}

void TextureRectangle::TextureRender(SDL_Renderer*& renderer, bool var)
{
	if (var == true)	//resetez texture-ul doar daca pun variabila pe true
	{
		SetTexture(renderer);
	}
	if (my_texture != nullptr)
	{
		SDL_RenderCopy(renderer, my_texture, nullptr, &my_rect); //aici transport imaginea(acum un texture) in interiorul patratului;

	}
}

void TextureRectangle::SetRectangle(int w, int h)
{
	my_rect.x = this->pos.my_X;
	my_rect.y = this->pos.my_Y;
	my_rect.h = h;
	my_rect.w = w;
	//this->my_CollidedRect.SetColiziune(my_rect);
	SetTheCollidedRect();
}

void TextureRectangle::SetFile(const char *filename)
{
	if (this->filename != nullptr)
	{
		delete[]this->filename;
	}
	if (filename != nullptr)
	{
		this->filename = new char[strlen(filename) + 1];
		strcpy_s(this->filename, strlen(filename) + 1, filename);
	}
	else
	{
		this->filename = nullptr;
	}
	
}

void TextureRectangle::SetTexture(SDL_Renderer*& renderer)
{
	if (my_texture != nullptr)
	{
		SDL_DestroyTexture(my_texture);
	}
	SDL_Surface* sur;
	sur = IMG_Load(filename);
	my_texture = SDL_CreateTextureFromSurface(renderer, sur); //transform suprafata in texture
	SDL_FreeSurface(sur);
}


void TextureRectangle::UpdateMoveX()
{
	this->pos.my_X--;
	if (this->pos.my_X < -640)
	{
		this->pos.my_X = 635;
		cout << endl << "Am depasit" << endl;
	}
	MoveRectagle();
	
}

SDL_Rect TextureRectangle::getRect()
{
	return this->my_rect;
}

void TextureRectangle::DetectedCollision(TextureRectangle &objref)
{
	/*Coliziune rect;
	rect = objref.my_CollidedRect;
	this->my_CollidedRect.DetectedCollision(rect);
	cout << "Incerc" << endl;*/
	
	if (SDL_HasIntersection(&this->my_rect, &objref.my_rect) && SDL_HasIntersection(&this->TheCollidedRect, &objref.my_rect))
	{
		this->coliziune = SDL_TRUE;
		objref.coliziune = SDL_TRUE;
	}
}

void TextureRectangle::UpdateIfCollisionBetweenTwo(TextureRectangle& refobj)
{
	if (this->coliziune == SDL_TRUE && refobj.coliziune == SDL_TRUE)
	{
		SDL_DestroyTexture(refobj.my_texture);
		refobj.my_texture = nullptr;
	} 
/*	if (this->my_CollidedRect.GetSTARE() == SDL_TRUE && refobj.my_CollidedRect.GetSTARE() == SDL_TRUE)
	{
		cout << "Am detectat coliziune" << endl;
		SDL_DestroyTexture(refobj.my_texture);
		refobj.my_texture = nullptr;
	} */
	
}




void TextureRectangle::SetPosition(int x, int y)
{
	this->pos.my_X = x;
	this->pos.my_Y = y;
}




