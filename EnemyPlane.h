#pragma once
#include "MonsterHelp.h"
#include "Caracter.h"
class EnemyPlane :public Caracter
{
	bool shooted1, shooted2, shooted3;
	int contorZbor;
	SDL_Rect rectstanga, rectdreapta;
	int contor = 0;
	bool dead = false;
public:

	EnemyPlane(int nrstari, SDL_Renderer*& renderer, const char* filename);

	void SetFramesPerStare() final override;


	void EventTheCaracter(SDL_Event event) final override
	{


	};

	void UpdateTheCaracter(SDL_Renderer*& renderer) final override;

	void Move();


	void SetRectStanga();
	void VerifyIfShootedByPenguins(MonsterHelp& ref);
	void EvidentiatePlanesRect(SDL_Renderer* renderer);
	bool getDead();

	int CoordonataX();
};