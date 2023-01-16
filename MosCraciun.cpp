#include "MosCraciun.h"

MosCraciun::MosCraciun(int nrstari, SDL_Renderer*& renderer, const char* filename) :Caracter(nrstari, renderer, filename)
{
	contor = 0;
	sare = 2;
	contorSare = 0;
	contorslide = 0;
	butond = false;
	butona = false;
	butons = false;
	p_obj.setAll(2, 0);
}


void MosCraciun::SetFramesPerStare()
{
	
	this->MatriceStari[0] = new const char* [13];
	this->MatriceStari[0][0] = "Personaje/MosCraciun/Merge/Walk (1).png";
	this->MatriceStari[0][1] = "Personaje/MosCraciun/Merge/Walk (2).png";
	this->MatriceStari[0][2] = "Personaje/MosCraciun/Merge/Walk (3).png";
	this->MatriceStari[0][3] = "Personaje/MosCraciun/Merge/Walk (4).png";
	this->MatriceStari[0][4] = "Personaje/MosCraciun/Merge/Walk (5).png";
	this->MatriceStari[0][5] = "Personaje/MosCraciun/Merge/Walk (6).png";
	this->MatriceStari[0][6] = "Personaje/MosCraciun/Merge/Walk (7).png";
	this->MatriceStari[0][7] = "Personaje/MosCraciun/Merge/Walk (8).png";
	this->MatriceStari[0][8] = "Personaje/MosCraciun/Merge/Walk (9).png";
	this->MatriceStari[0][9] = "Personaje/MosCraciun/Merge/Walk (10).png";
	this->MatriceStari[0][10] = "Personaje/MosCraciun/Merge/Walk (11).png";
	this->MatriceStari[0][11] = "Personaje/MosCraciun/Merge/Walk (12).png";
	this->MatriceStari[0][12] = "Personaje/MosCraciun/Merge/Walk (13).png";

	this->MatriceStari[1] = new const char* [16];
	this->MatriceStari[1][0] = "Personaje/MosCraciun/Sare/Jump (1).png";
	this->MatriceStari[1][1] = "Personaje/MosCraciun/Sare/Jump (2).png";
	this->MatriceStari[1][2] = "Personaje/MosCraciun/Sare/Jump (3).png";
	this->MatriceStari[1][3] = "Personaje/MosCraciun/Sare/Jump (4).png";
	this->MatriceStari[1][4] = "Personaje/MosCraciun/Sare/Jump (5).png";
	this->MatriceStari[1][5] = "Personaje/MosCraciun/Sare/Jump (6).png";
	this->MatriceStari[1][6] = "Personaje/MosCraciun/Sare/Jump (7).png";
	this->MatriceStari[1][7] = "Personaje/MosCraciun/Sare/Jump (8).png";
	this->MatriceStari[1][8] = "Personaje/MosCraciun/Sare/Jump (9).png";
	this->MatriceStari[1][9] = "Personaje/MosCraciun/Sare/Jump (10).png";
	this->MatriceStari[1][10] = "Personaje/MosCraciun/Sare/Jump (11).png";
	this->MatriceStari[1][11] = "Personaje/MosCraciun/Sare/Jump (12).png";
	this->MatriceStari[1][12] = "Personaje/MosCraciun/Sare/Jump (13).png";
	this->MatriceStari[1][13] = "Personaje/MosCraciun/Sare/Jump (14).png";
	this->MatriceStari[1][14] = "Personaje/MosCraciun/Sare/Jump (15).png";
	this->MatriceStari[1][15] = "Personaje/MosCraciun/Sare/Jump (16).png";



	this->MatriceStari[2] = new const char* [24];
	this->MatriceStari[2][0] = "Personaje/MosCraciun/Slide/Slide (1).png";
	this->MatriceStari[2][1] = "Personaje/MosCraciun/Slide/Slide (2).png";
	this->MatriceStari[2][2] = "Personaje/MosCraciun/Slide/Slide (3).png";
	this->MatriceStari[2][3] = "Personaje/MosCraciun/Slide/Slide (4).png";
	this->MatriceStari[2][4] = "Personaje/MosCraciun/Slide/Slide (5).png";
	this->MatriceStari[2][5] = "Personaje/MosCraciun/Slide/Slide (6).png";
	this->MatriceStari[2][6] = "Personaje/MosCraciun/Slide/Slide (7).png";
	this->MatriceStari[2][7] = "Personaje/MosCraciun/Slide/Slide (7).png";
	this->MatriceStari[2][8] = "Personaje/MosCraciun/Slide/Slide (7).png";
	this->MatriceStari[2][9] = "Personaje/MosCraciun/Slide/Slide (7).png";
	this->MatriceStari[2][10] = "Personaje/MosCraciun/Slide/Slide (7).png";
	this->MatriceStari[2][11] = "Personaje/MosCraciun/Slide/Slide (7).png";
	this->MatriceStari[2][12] = "Personaje/MosCraciun/Slide/Slide (7).png";
	this->MatriceStari[2][13] = "Personaje/MosCraciun/Slide/Slide (7).png";
	this->MatriceStari[2][14] = "Personaje/MosCraciun/Slide/Slide (7).png";
	this->MatriceStari[2][15] = "Personaje/MosCraciun/Slide/Slide (8).png";
	this->MatriceStari[2][16] = "Personaje/MosCraciun/Slide/Slide (9).png";
	this->MatriceStari[2][17] = "Personaje/MosCraciun/Slide/Slide (10).png";
	this->MatriceStari[2][18] = "Personaje/MosCraciun/Slide/Slide (11).png";
	this->MatriceStari[2][19] = "Personaje/MosCraciun/Slide/Slide (12).png";
	this->MatriceStari[2][20] = "Personaje/MosCraciun/Slide/Slide (13).png";
	this->MatriceStari[2][21] = "Personaje/MosCraciun/Slide/Slide (14).png";
	this->MatriceStari[2][22] = "Personaje/MosCraciun/Slide/Slide (15).png";
	this->MatriceStari[2][23] = "Personaje/MosCraciun/Slide/Slide (16).png";



	this->MatriceStari[3] = new const char* [17];
	this->MatriceStari[3][0] = "Personaje/MosCraciun/Dead/Dead (1).png";
	this->MatriceStari[3][1] = "Personaje/MosCraciun/Dead/Dead (2).png";
	this->MatriceStari[3][2] = "Personaje/MosCraciun/Dead/Dead (3).png";
	this->MatriceStari[3][3] = "Personaje/MosCraciun/Dead/Dead (4).png";
	this->MatriceStari[3][4] = "Personaje/MosCraciun/Dead/Dead (5).png";
	this->MatriceStari[3][5] = "Personaje/MosCraciun/Dead/Dead (6).png";
	this->MatriceStari[3][6] = "Personaje/MosCraciun/Dead/Dead (7).png";
	this->MatriceStari[3][7] = "Personaje/MosCraciun/Dead/Dead (8).png";
	this->MatriceStari[3][8] = "Personaje/MosCraciun/Dead/Dead (9).png";
	this->MatriceStari[3][9] = "Personaje/MosCraciun/Dead/Dead (10).png";
	this->MatriceStari[3][10] = "Personaje/MosCraciun/Dead/Dead (11).png";
	this->MatriceStari[3][11] = "Personaje/MosCraciun/Dead/Dead (12).png";
	this->MatriceStari[3][12] = "Personaje/MosCraciun/Dead/Dead (13).png";
	this->MatriceStari[3][13] = "Personaje/MosCraciun/Dead/Dead (14).png";
	this->MatriceStari[3][14] = "Personaje/MosCraciun/Dead/Dead (15).png";
	this->MatriceStari[3][15] = "Personaje/MosCraciun/Dead/Dead (16).png";
	this->MatriceStari[3][16] = "Personaje/MosCraciun/Dead/Dead (17).png";

}




void MosCraciun::EventTheCaracter(SDL_Event event)
{

	
		
	
	if (event.type == SDL_KEYDOWN)
	{
		if (event.key.keysym.sym == SDLK_d)
		{
			butond = true;
			butona = false;
			butonw = false;
			timp = timp + 0.025;
			if (timp > timpinitial+2)
			{
				timp = timpinitial;
			}
		}
		else if (event.key.keysym.sym == SDLK_a)
		{
			butond = false;
			butona = true;
			butonw = false;
			butons = false;
			timp = timp + 0.025;
			if (timp > timpinitial + 2)
			{
				timp = timpinitial;
			}
		}
		else if (event.key.keysym.sym == SDLK_w)
		{
			butond = false;
			butona = false;
			butonw = true;
			butons = false;
			timp = timpinitial;
		}

		else if (event.key.keysym.sym == SDLK_s)
		{
			butond = false;
			butona = false;
			butonw = false;
			butons = true;
			timp = timpinitial;
		
		}
			
	}
	if (event.type == SDL_KEYUP)
	{
		butond = false;
		butona = false;
		//butons = false;
		timp = timpinitial;
	}
	
		
	

	
}

void MosCraciun::UpdateTheCaracter(SDL_Renderer*& renderer)
{

	if (grounded)
	{

		p_obj.SetForceY(9.9);
		p_obj.Update(timp);
		if (butond)
		{
			this->pos.my_X = this->pos.my_X + p_obj.GetDeplasare().my_X;
			MoveRectagle();
		}
		if (butona)
		{
			this->pos.my_X = this->pos.my_X - p_obj.GetDeplasare().my_X;
			MoveRectagle();
		}
		if (butons)
		{
			this->SetTheCollidedRect();
			this->pos.my_X = this->pos.my_X + p_obj.GetDeplasare().my_X;
			MoveRectagle();
			this->SetFile(MatriceStari[2][contorslide]);
			this->TextureRender(renderer, true);
			stillSliding = 1;
			contorslide++;
			if (contorslide == 24)
			{
				contorslide = 0;
				stillSliding = 0;
				butons = 0;
				rectS = 0;
			}

		}
		if (butonw)
		{
			p_obj.SetForceY(10);
			p_obj.Update(timp);
			this->pos.my_Y = this->pos.my_Y - p_obj.GetDeplasare().my_Y;
			this->pos.my_X = this->pos.my_X + p_obj.GetDeplasare().my_X;
			MoveRectagle();
			this->SetFile(MatriceStari[1][contorSare]);
			this->TextureRender(renderer, true);
			stillJumping = 1;
			contorSare++;
			if (contorSare == 15)
			{
				contorSare = 0;
				stillJumping = 0;
				butonw = 0;
			}


		}
		if (stillJumping == 0 && stillSliding == 0)
		{
			this->SetFile(MatriceStari[0][contor]);
			this->TextureRender(renderer, true);
			contor++;
		}




	}
	else
	{
		p_obj.SetForceY(9);
		p_obj.Update(timp);

		if (stillJumping == 1)
		{
		
			p_obj.SetForceY(10);
			p_obj.Update(timp);
			this->pos.my_Y = this->pos.my_Y - p_obj.GetDeplasare().my_Y;
			this->pos.my_X = this->pos.my_X + p_obj.GetDeplasare().my_X*1.3;
			MoveRectagle();
			this->SetFile(MatriceStari[1][contorSare]);
			this->TextureRender(renderer, true);
			stillJumping = 1;
			contorSare++;
			if (contorSare == 15)
			{
				contorSare = 0;
				stillJumping = 0;
				butonw = 0;
			}
			
		}

		if (stillSliding == 1 )
		{
			this->pos.my_X = this->pos.my_X + p_obj.GetDeplasare().my_X ;
			MoveRectagle();
			this->SetFile(MatriceStari[2][contorslide]);
			this->TextureRender(renderer, true);
			stillSliding = 1;
			contorslide++;
			if (contorslide == 15)
			{
				contorslide = 0;
				stillSliding = 0;
				butons = 0;
			}
		}
		if (butond)
		{
			
			MoveRectagle();
			butond = 0;

		}
		if (butona)
		{
			MoveRectagle();
			butona = 0;
		}
		if (butonw)
		{

			MoveRectagle();
			butonw = 0;

		}
		if (butons)
		{

			MoveRectagle();
			butons = 0;

		}
		if (stillJumping == 0 && stillSliding == 0)
		{
			this->pos.my_Y = this->pos.my_Y - p_obj.GetDeplasare().my_Y;
			this->pos.my_X = this->pos.my_X + p_obj.GetDeplasare().my_X;
			MoveRectagle();
			this->SetFile(MatriceStari[0][contor]);
			this->TextureRender(renderer, true);
			contor++;
		}

		
		
	}
	if (contor == 12)
	{
		contor = 0;
	}
}
	



//TO DO: Maybe if you collect something you can use your mouse for 5 seconds
bool MosCraciun::MutCuMouse(SDL_Event event)
{
	if (event.type == SDL_MOUSEMOTION)
	{
		this->my_rect.x = event.motion.x;
		this->my_rect.y = event.motion.y;
	}
	return true;

}


void MosCraciun::setGrounded(bool x)
{
	this->grounded = x;
}
void MosCraciun:: setTimp(float x)
{
	this->timp = x;
	this->timpinitial = x;
}


void MosCraciun::destroy_Santa()
{
	this->my_rect.w = 0;
	this->my_rect.y = 0;
}