#include "MonsterHelp.h"


MonsterHelp:: MonsterHelp(int nrstari, SDL_Renderer*& renderer, const char* filename, int xinitial, int stay, int directie, int yinitial, int winitial, int hinitial) :Caracter(nrstari, renderer, filename)
{
	shoot = 0;
	tintit = 0;
	tinteste = 0;
	contorMonster = 0;
	timp = 3.5;
	this->directie = directie;
	this->xinitial = xinitial;
	this->yinitial = yinitial;
	this->winitial = winitial;
	this->hinitial = hinitial;
	this->stay = stay;
	p_obj.setAll(0, 12);
}


void MonsterHelp::SetFramesPerStare()
{
	this->MatriceStari[0] = new const char* [24];
	this->MatriceStari[0][0] = "Personaje/Pinguini/albastru1.png";
	this->MatriceStari[0][1] = "Personaje/Pinguini/albastru1.png";
	this->MatriceStari[0][2] = "Personaje/Pinguini/albastru1.png";

	this->MatriceStari[0][3] = "Personaje/Pinguini/albastru4.png";
	this->MatriceStari[0][4] = "Personaje/Pinguini/albastru4.png";
	this->MatriceStari[0][5] = "Personaje/Pinguini/albastru4.png";
	this->MatriceStari[0][6] = "Personaje/Pinguini/albastru5.png";
	this->MatriceStari[0][7] = "Personaje/Pinguini/albastru5.png";
	this->MatriceStari[0][8] = "Personaje/Pinguini/albastru5.png";

	this->MatriceStari[0][9] = "Personaje/Pinguini/albastru6.png";
	this->MatriceStari[0][10] = "Personaje/Pinguini/albastru6.png";
	this->MatriceStari[0][11] = "Personaje/Pinguini/albastru6.png";

	this->MatriceStari[0][12] = "Personaje/Pinguini/albastru7.png";
	this->MatriceStari[0][13] = "Personaje/Pinguini/albastru7.png";
	this->MatriceStari[0][14] = "Personaje/Pinguini/albastru7.png";
	this->MatriceStari[0][15] = "Personaje/Pinguini/albastru8.png";
	this->MatriceStari[0][16] = "Personaje/Pinguini/albastru8.png";
	this->MatriceStari[0][17] = "Personaje/Pinguini/albastru8.png";
	this->MatriceStari[0][18] = "Personaje/Pinguini/albastru9.png";
	this->MatriceStari[0][19] = "Personaje/Pinguini/albastru9.png";
	this->MatriceStari[0][20] = "Personaje/Pinguini/albastru9.png";
	this->MatriceStari[0][21] = "Personaje/Pinguini/albastru10.png";
	this->MatriceStari[0][22] = "Personaje/Pinguini/albastru10.png";
	this->MatriceStari[0][23] = "Personaje/Pinguini/albastru10.png";




}

void MonsterHelp:: EventTheCaracter(SDL_Event event) 
{

	if (event.type == SDL_MOUSEMOTION)
	{
		pozitie.GetMousePos(event);
		if (pozitie.my_X > this->GetTheActualX() && pozitie.my_X < this->GetTheActualX() + 60
			&& pozitie.my_Y > this->GetTheActualY() && pozitie.my_Y < this->GetTheActualY() + 60)
		{
			identificat = 1;
		}
		else
		{
			identificat = 0;
		}
		if (tinteste == 1)
		{
			pozitie.GetMousePos(event);
			cout << "SUNT AICI" << endl;
		}



	}
	if (event.type == SDL_MOUSEBUTTONDOWN)
	{

		if (event.button.button == SDL_BUTTON_LEFT && identificat == 1)
		{

			tinteste = 1;
			shoot++;

		}

	}

}


void MonsterHelp::UpdateTheCaracter(SDL_Renderer*& renderer) 
{
	if (identificat == 1)
	{
		cout << "Esti pe pinguin" << endl;
	}
	if (shoot == 2)
	{
		tinteste = 2;

	}


	if (tinteste == 0)
	{

		if (stay == 0)
		{
			if (this->pos.my_X < xinitial + 25)
			{
				this->directie = 1;

			}
			if (this->pos.my_X > xinitial + 155)
			{
				directie = 0;

			}
			if (directie == 1)
			{
				this->pos.my_X++;
				MoveRectagle();
			}
			else
			{
				this->pos.my_X--;
				MoveRectagle();
			}
			this->SetFile(MatriceStari[0][4]);
			this->SetTexture(renderer);
			this->TextureRender(renderer, true);
		}
		else
		{

			this->SetFile(MatriceStari[0][contorMonster]);
			this->SetTexture(renderer);
			this->TextureRender(renderer, true);
		}




	}

	else if (tinteste == 1)
	{

		if (stay == 0)
		{
			this->pos.my_X = pozitie.my_X;
			if (this->pos.my_X < xinitial - 20)
			{
				this->pos.my_X = xinitial - 20;

			}
			if (this->pos.my_X > xinitial + 135)
			{
				this->pos.my_X = xinitial + 135;

			}
			MoveRectagle();
			this->SetFile(MatriceStari[0][0]);
			this->SetTexture(renderer);
			this->TextureRender(renderer, true);
		}
		else
		{
			MoveRectagle();
			this->SetFile(MatriceStari[0][0]);
			this->SetTexture(renderer);
			this->TextureRender(renderer, true);
		}


	}
	else
	{
		p_obj.Update(4);
		this->pos.my_Y = this->pos.my_Y - p_obj.GetDeplasare().my_Y;
		this->MoveRectagle();
		this->SetFile(MatriceStari[0][0]);
		this->SetTexture(renderer);
		this->TextureRender(renderer, true);
	}

	contorMonster++;
	if (contorMonster == 24)
	{
		contorMonster = 0;
	}
	if (accomplished == 1)
	{


		this->SetRectangle(0, 0);
		this->SetPosition(xinitial, yinitial);
		contor++;
		cout << contor;
		if (contor == 10)
		{
			cout << "L-am setat" << endl;
			this->SetRectangle(winitial, hinitial);
			accomplished = 0;
			contor = 0;
		}

		shoot = 0;
		tintit = 0;
		tinteste = 0;
		contorMonster = 0;
	}
}



float MonsterHelp:: GetTheActualX()
{

	return this->getRect().x;
}

float MonsterHelp::GetTheActualY()
{

	return this->getRect().y;
}

void MonsterHelp::setAccomplished(bool val)
{
	this->accomplished = val;
}

void MonsterHelp::SetMyHeadRect()
{
	my_headRect.x = my_rect.x + 15;// +my_rect.w / 2;
	my_headRect.y = my_rect.y + 5;
	my_headRect.w = my_rect.w / 2;
	my_headRect.h = my_rect.h / 2;

}
void MonsterHelp::EvRect(SDL_Renderer* renderer)
{
	this->SetMyHeadRect();
	SDL_SetRenderDrawColor(renderer, 255, 0, 255, SDL_ALPHA_OPAQUE);
	SDL_RenderDrawRect(renderer, &this->my_headRect);
}

SDL_Rect MonsterHelp:: GetTheHeadRect()
{
	return this->my_headRect;
}
