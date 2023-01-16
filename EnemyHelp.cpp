#include "EnemyPlane.h"

#include "MonsterHelp.h"
EnemyPlane::EnemyPlane(int nrstari, SDL_Renderer*& renderer, const char* filename) :Caracter(nrstari, renderer, filename)
{
	shooted1 = 0;
	shooted2 = 0;
	shooted3 = 0;
	contorZbor = 0;
}



void EnemyPlane::SetFramesPerStare() 
{
	this->MatriceStari[0] = new const char* [5];
	this->MatriceStari[0][0] = "Personaje/Plane/Shoot (1).png";
	this->MatriceStari[0][1] = "Personaje/Plane/Shoot (2).png";
	this->MatriceStari[0][2] = "Personaje/Plane/Shoot (3).png";
	this->MatriceStari[0][3] = "Personaje/Plane/Shoot (4).png";
	this->MatriceStari[0][4] = "Personaje/Plane/Shoot (5).png";

	this->MatriceStari[1] = new const char* [1];
	this->MatriceStari[1][0] = "Personaje/Plane/Dead (1).png";

}


void EnemyPlane::UpdateTheCaracter(SDL_Renderer*& renderer)
{
	if (shooted1 == 1 && shooted2 == 1 && shooted3 == 1)
	{
		this->SetFile(MatriceStari[1][0]);
		this->SetTexture(renderer);
		this->TextureRender(renderer, true);
		dead = true;

	}
	else
	{
		this->SetFile(MatriceStari[0][contorZbor]);
		this->SetTexture(renderer);
		this->TextureRender(renderer, true);
	}
	contorZbor++;
	if (contorZbor == 5)
	{
		contorZbor = 0;
	}
}


void EnemyPlane::Move()
{
	this->pos.my_X++;
	this->MoveRectagle();

}


void EnemyPlane::SetRectStanga()
{
	this->rectstanga.x = this->my_rect.x + 35;
	this->rectstanga.y = this->my_rect.y + this->my_rect.w / 2 + 18;
	this->rectstanga.w = this->my_rect.w / 2 - 15;
	this->rectstanga.h = this->my_rect.h / 10;
}


void EnemyPlane::VerifyIfShootedByPenguins(MonsterHelp& ref)
{
	if (SDL_HasIntersection(&this->rectstanga, &ref.GetTheHeadRect()))
	{
		contor++;
		cout << contor << endl;

		if (contor == 3)
		{
			this->shooted3 = true;
		}

		if (contor == 2)
		{
			this->shooted2 = true;
		}
		if (contor == 1)
		{
			this->shooted1 = 1;
		}

		ref.setAccomplished(true);
	}
}


void EnemyPlane::EvidentiatePlanesRect(SDL_Renderer* renderer)
{
	//	this->EvidentiateTheRect(renderer);
	SDL_SetRenderDrawColor(renderer, 255, 0, 255, SDL_ALPHA_OPAQUE);
	SDL_RenderDrawRect(renderer, &this->rectstanga);

}

bool EnemyPlane::getDead()
{
	return dead;
}

int EnemyPlane::CoordonataX()
{
	return this->my_rect.x;
}
