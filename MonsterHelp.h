#pragma once
#include "Caracter.h"
#include "Physics.h"
class MonsterHelp :public Caracter
{
	int shoot, tintit;
	int contorMonster;
	int tinteste;
	int directie;
	int xinitial;
	int yinitial;
	int winitial;
	int hinitial;
	int stay;
	Vector2D pozitie;
	bool identificat;
	Physics p_obj;
	float timp;
	SDL_Rect my_headRect;
	int accomplished;
	int contor=0;
public:

	MonsterHelp(int nrstari, SDL_Renderer*& renderer, const char* filename, int xinitial, int stay, int directie, int yinitial, int winitial, int hinitial);

	void SetFramesPerStare() final override;


	void EventTheCaracter(SDL_Event event) final override;
	void UpdateTheCaracter(SDL_Renderer*& renderer) final override;



	float GetTheActualX();

	float GetTheActualY();

	void setAccomplished(bool val);

	void SetMyHeadRect();
	void EvRect(SDL_Renderer* renderer);

	SDL_Rect GetTheHeadRect();
};




