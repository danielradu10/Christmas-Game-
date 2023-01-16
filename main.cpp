#include "SDL.h"
#include "SDL_image.h"
#include "SDL_ttf.h"
#include <iostream>

#include "Map.h"
#include "EnemyPlane.h"
#include "MonsterHelp.h"
#include "Cadouri.h"
#include "Text.h"
#include "Cookie.h"
using namespace std;



int main(int argc, char* argv[])
{
	//Creez o fereastra
	SDL_Window* window;
	
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		std::cout << "SDL could not be initialized: " << SDL_GetError();

	}
	else
	{
		cout << "SDL video system ready to go" << endl;
	}

	if (TTF_Init() < 0)
	{
		cout << "Sir, I don't feel so good" << endl;
	}
	else
	{
		cout << "TTF, you're officially an avenger" << endl;
	}
	window = SDL_CreateWindow("C++ SDL2 Window", 200, 200, 640, 480, SDL_WINDOW_SHOWN);


	//creare render
	SDL_Renderer* renderer = nullptr;
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

	//text
	TTF_Font* font = TTF_OpenFont("Assets/arial.ttf", 32);
	SDL_Surface* surtext = TTF_RenderText_Solid(font, "Hello, sir", {255, 255, 255});

	SDL_Texture* text;
	text = SDL_CreateTextureFromSurface(renderer, surtext);
	SDL_FreeSurface(surtext);
	//"Assets/Tot/BG/BG.png"
	TextureRectangle t1(renderer, "Assets/Tot/BG/BG.png");
	TextureRectangle t2(renderer, "Assets/Tot/BG/BG.png");

	//75, 430, 900, 430, 1100, 430, 1300, 430, 1650, 300, 1800, 430
	Map m(75, 380,
		  75, 430,
		 330, 430,
		 680, 430,
		 780, 380,
		960, 430);
	m.SetMap(renderer);

	MosCraciun t3(4, renderer, "Personaje/MosCraciun/Merge/Walk (1).png");
	TextureRectangle t4(renderer, "Assets/Tot/Object/Crystal.png");

	t3.SetFramesPerStare();
	//TextureRectangle t4(renderer, "Personaje/MosCraciun/Merge/Walk (2).png");
	//setare propr patrat
	t1.SetPosition(0, 0);
	t1.SetRectangle(640, 480);
	t2.SetPosition(638, 0);
	t2.SetRectangle(640, 480);

	t3.SetPosition(100, 270);
	t3.SetRectangle(100, 100);
	t4.SetPosition(330, 330);
	t4.SetRectangle(50, 50);

	EnemyPlane plane(2, renderer, "Personaje / Plane / Fly(1)");
	plane.SetPosition(0, 30);
	plane.SetRectangle(170, 150);
	plane.SetFramesPerStare();


	EnemyPlane plane2(2, renderer, "Personaje / Plane / Fly(1)");
	plane2.SetPosition(-200, 30);
	plane2.SetRectangle(170, 150);
	plane2.SetFramesPerStare();


	EnemyPlane plane3(2, renderer, "Personaje / Plane / Fly(1)");
	plane3.SetPosition(-400, 30);
	plane3.SetRectangle(170, 150);
	plane3.SetFramesPerStare();

	MonsterHelp monster(1, renderer, "Personaje/Plane/monster-removebg-preview.png", 25, 0, 1, 315, 70, 81);
	monster.SetPosition(25, 315);
	monster.SetRectangle(70, 81);
	monster.SetFramesPerStare();


	MonsterHelp monster2(1, renderer, "Personaje/Plane/monster-removebg-preview.png", 240, 1, 0, 260, 50, 50);
	monster2.SetPosition(290, 260);
	monster2.SetRectangle(50, 50);
	monster2.SetFramesPerStare();

	MonsterHelp monster3(1, renderer, "Personaje/Plane/monster-removebg-preview.png", 415, 0, 0, 320, 70, 81);
	monster3.SetPosition(560, 320);
	monster3.SetRectangle(70, 81);
	monster3.SetFramesPerStare();

	Vector2D pozitieMouse;
	

	Cadouri vectorCadouri[30];
	
	Cadouri c1(0, renderer, "Assets/Cadouri/cadou1.png", 0, 84, 70, 20, 50);
	Cadouri c2(0, renderer, "Assets/Cadouri/cadou2.png", 0, 84, 70, 40, -50);
	Cadouri c3(0, renderer, "Assets/Cadouri/cadou3.png", 1, 84, 70, 70, -100);
	Cadouri c4(0, renderer, "Assets/Cadouri/cadou4.png", 0, 84, 70, 90, 10);
	Cadouri c5(0, renderer, "Assets/Cadouri/cadou5.png", 0, 84, 70, 100, 150);
	Cadouri c6(0, renderer, "Assets/Cadouri/cadouri6.png", 1, 84, 70, 300, -250);
	Cadouri c7(0, renderer, "Assets/Cadouri/cadou9.png", 0, 84, 70, 500, -350);
	Cadouri c8(0, renderer, "Assets/Cadouri/cadou8.png", 0, 84, 70, 600, -450);
	Cadouri c9(0, renderer, "Assets/Cadouri/cadou9.png", 0, 84, 70, 240, -50);
	Cadouri c10(0, renderer, "Assets/Cadouri/cadou1.png", 0, 84, 70, 300, -650);
	Cadouri c11(0, renderer, "Assets/Cadouri/cadou2.png", 0, 84, 70, 270, -750);
	Cadouri c12(0, renderer, "Assets/Cadouri/cadou3.png", 0, 84, 70, 520,-170);
	Cadouri c13(0, renderer, "Assets/Cadouri/cadou4.png", 0, 84, 70, 205, -175);
	Cadouri c14(0, renderer, "Assets/Cadouri/cadou5.png", 0, 84, 70, 140, -30);
	Cadouri c15(0, renderer, "Assets/Cadouri/cadou7.png", 0, 84, 70, 230, -15);
	Cadouri c16(0, renderer, "Assets/Cadouri/cadou8.png", 0, 84, 70, 320, 25);
	Cadouri c17(0, renderer, "Assets/Cadouri/cadou9.png", 0, 84, 70, 420, -800);
	Cadouri c18(0, renderer, "Assets/Cadouri/cadou9.png", 0, 84, 70, 200, -985);
	Cadouri c19(0, renderer, "Assets/Cadouri/cadou8.png", 0, 84, 70, 475, -1066);
	Cadouri c20(0, renderer, "Assets/Cadouri/cadou7.png", 0, 84, 70, 485, -1040);
	Cadouri c21(0, renderer, "Assets/Cadouri/cadou5.png", 0, 84, 70, 128, -780);
	Cadouri c22(0, renderer, "Assets/Cadouri/cadouri6.png", 0, 84, 70, 29, -950);
	Cadouri c23(0, renderer, "Assets/Cadouri/cadou9.png", 0, 84, 70, 30, -1600);
	Cadouri c24(0, renderer, "Assets/Cadouri/cadou8.png", 0, 84, 70, 268, -914);
	Cadouri c25(0, renderer, "Assets/Cadouri/cadou4.png", 0, 84, 70, 248, -220);
	Cadouri c26(0, renderer, "Assets/Cadouri/cadou8.png", 0, 84, 70, 340, -808);
	Cadouri c27(0, renderer, "Assets/Cadouri/cadou2.png", 0, 84, 70, 480, 30);
	Cadouri c28(0, renderer, "Assets/Cadouri/cadou4.png", 0, 84, 70, 577,-500);
	Cadouri c29(0, renderer, "Assets/Cadouri/cadou3.png", 0, 84, 70, 100, -650);
	Cadouri c30(0, renderer, "Assets/Cadouri/cadou2.png", 0, 84, 70, 220, -750);
	
	vectorCadouri[0] = c1;
	vectorCadouri[0].SetTexture(renderer);
	vectorCadouri[1] = c2;
	vectorCadouri[1].SetTexture(renderer);
	vectorCadouri[2] = c3;
	vectorCadouri[2].SetTexture(renderer);
	vectorCadouri[3] = c4;
	vectorCadouri[3].SetTexture(renderer);
	vectorCadouri[4] = c5;
	vectorCadouri[4].SetTexture(renderer);
	vectorCadouri[5] = c6;
	vectorCadouri[5].SetTexture(renderer);
	vectorCadouri[6] = c7;
	vectorCadouri[6].SetTexture(renderer);
	vectorCadouri[7] = c8;
	vectorCadouri[7].SetTexture(renderer);
	vectorCadouri[8] = c9;
	vectorCadouri[8].SetTexture(renderer);
	vectorCadouri[9] = c10;
	vectorCadouri[9].SetTexture(renderer);
	vectorCadouri[10] = c11;
	vectorCadouri[10].SetTexture(renderer);
	vectorCadouri[11] = c12;
	vectorCadouri[11].SetTexture(renderer);
	vectorCadouri[12] = c13;
	vectorCadouri[12].SetTexture(renderer);
	vectorCadouri[13] = c14;
	vectorCadouri[13].SetTexture(renderer);
	vectorCadouri[14] = c15;
	vectorCadouri[14].SetTexture(renderer);
	vectorCadouri[15] = c16;
	vectorCadouri[15].SetTexture(renderer);
	vectorCadouri[16] = c17;
	vectorCadouri[16].SetTexture(renderer);
	vectorCadouri[17] = c18;
	vectorCadouri[17].SetTexture(renderer);
	vectorCadouri[18] = c19;
	vectorCadouri[18].SetTexture(renderer);
	vectorCadouri[19] = c20;
	vectorCadouri[19].SetTexture(renderer);
	vectorCadouri[20] = c21;
	vectorCadouri[20].SetTexture(renderer);
	vectorCadouri[21] = c22;
	vectorCadouri[21].SetTexture(renderer);



	Cookie cookie1(renderer, "Assets/cookie.png", 60, 60, 400);
	cookie1.SetPosition(400, 260);
	cookie1.SetRectangle(60, 60);

	Cookie cookie2(renderer, "Assets/cookie.png", 60, 60, 600);
	cookie2.SetPosition(600, 260);
	cookie2.SetRectangle(60, 60);

	Cookie cookie3(renderer, "Assets/cookie.png", 60, 60, 800);
	cookie3.SetPosition(800, 260);
	cookie3.SetRectangle(60, 60);

	Cookie cookie4(renderer, "Assets/cookie.png", 60, 60, 1000);
	cookie3.SetPosition(1000, 260);
	cookie3.SetRectangle(60, 60);


	

	int contorlevel1 = 3;
	int cadourilevel2 = 0;
	int da = 0;
	int level = 0;

	int s = 0;
	int contorSlide = 0;
	int contorCookie = 0;
	int contorMeniu = 0;

	bool joculMerge = true;	//variabila(o structura) care sa ne tina jocul in loop pana cand il intrerupem
	while (joculMerge)
	{
		//Handle input
		SDL_Event event; //un obiect care contine tipurile de eventuri
						//event handlin
		
		while (SDL_PollEvent(&event))
		{


			if (event.type == SDL_QUIT)
			{
				joculMerge = false;
			}
			if (event.key.keysym.sym == SDLK_s)
			{
				
				s = 1;
			}

			if (level == 1)
			{
				plane.EventTheCaracter(event);
				plane2.EventTheCaracter(event);
				plane3.EventTheCaracter(event);
				monster.EventTheCaracter(event);
				monster2.EventTheCaracter(event);
				monster3.EventTheCaracter(event);
				pozitieMouse.GetMousePos(event);
			}
			if (level ==2)
			{
				t3.EventTheCaracter(event);
				for (int i = 0; i < 10; i++)
				{
					vectorCadouri[i].EventTheCaracter(event);
				}
			}
			if (level == 3)
			{
				t3.EventTheCaracter(event);
			}
			
			
		}

		// Handle Updates

		
		SDL_Delay(16);
		
		
		
		da++;
		//cout << da<<" ";

		t1.TextureRender(renderer, false);
		t2.TextureRender(renderer, false);
	

		if (level == 1)
		{

			Text titl;
			titl.SetFilesDimVector(1);
			titl.SetFilesNamesVector("AVIOANE:");
			titl.settexture(renderer);
			titl.SetRect(5, 00, 100, 50);
			titl.afisareText(renderer);
			const char* vectAV[4] = { "0", "1", "2", "3"

			};
			Text contor;
			contor.SetFilesDimVector(1);
			contor.SetFilesNamesVector(vectAV[contorlevel1]);
			contor.settexture(renderer);
			contor.SetRect(110, 0, 45, 45);
			contor.afisareText(renderer);
			m.DrawMap(renderer, t3, 1, vectorCadouri);
			plane.UpdateTheCaracter(renderer);
			
			plane2.UpdateTheCaracter(renderer);
			plane3.UpdateTheCaracter(renderer);
			monster.UpdateTheCaracter(renderer);
			monster.EvRect(renderer);
			monster2.UpdateTheCaracter(renderer);
			monster2.EvRect(renderer);
			monster3.UpdateTheCaracter(renderer);
			monster3.EvRect(renderer);
			plane.Move();
			plane.SetRectStanga();
			plane.EvidentiatePlanesRect(renderer);

			plane2.SetRectStanga();
			plane2.EvidentiatePlanesRect(renderer);

			plane3.SetRectStanga();
			plane3.EvidentiatePlanesRect(renderer);

			plane2.Move();
			plane3.Move();
			
			plane.VerifyIfShootedByPenguins(monster); 
			plane.VerifyIfShootedByPenguins(monster2);
			plane.VerifyIfShootedByPenguins(monster3);

			plane2.VerifyIfShootedByPenguins(monster);
			plane2.VerifyIfShootedByPenguins(monster2);
			plane2.VerifyIfShootedByPenguins(monster3);
			
			plane3.VerifyIfShootedByPenguins(monster);
			plane3.VerifyIfShootedByPenguins(monster2);
			plane3.VerifyIfShootedByPenguins(monster3);


			if (plane.getDead() && plane2.getDead() == 0 && plane3.getDead() == 0)
			{
				contorlevel1 = 2;
			}

			if (plane.getDead() == 0 && plane2.getDead() && plane3.getDead() == 0)
			{
				contorlevel1 = 2;
			}

			if (plane.getDead() == 0 && plane2.getDead() == 0 && plane3.getDead())
			{
				contorlevel1 = 2;
			}

			if (plane.getDead() && plane2.getDead() && plane3.getDead() == 0)
			{
				contorlevel1 = 1;
			}

			if (plane.getDead() == 0 && plane2.getDead() && plane3.getDead() )
			{
				contorlevel1 = 1;
			}

			if (plane.getDead() && plane2.getDead() == 0 && plane3.getDead())
			{
				contorlevel1 = 1;
			}


			if (plane.getDead() && plane2.getDead() && plane3.getDead())
			{
				contorlevel1 = 0;
				level = -1;
			}

			if (!(plane.getDead() && plane2.getDead() && plane3.getDead()) && plane3.CoordonataX() > 640)
			{
				SDL_Quit();
			}
		}
		if (level == 2 )
		{
		//	t1.UpdateMoveX();
		//	t2.UpdateMoveX();
			const char* a[1];
			a[0] = "CADOURI: ";
			const char* contorC[30] = {
				"1",
				"2",
				"3",
				"4",
				"5",
				"6",
				"7",
				"8",
				"9",
				"10",
				"11",
				"12",
				"13",
				"14",
				"15",
				"16",
				"17",
				"18",
				"19",
				"20",
				"21",
				"22",
				"23",
				"24",
				"25",
				"26",
				"27",
				"28",
				"29",
				"30",
			};
			Text titl;
			titl.SetFilesDimVector(1);
			titl.SetFilesNamesVector(a[0]);
			titl.settexture(renderer);
			titl.SetRect(5, 00, 100, 50);

			Text contor;
			contor.SetFilesDimVector(1);
			contor.SetFilesNamesVector(contorC[cadourilevel2]);
			contor.settexture(renderer);
			contor.SetRect(110, 0, 45, 45);
			contor.afisareText(renderer);
			m.DrawMap(renderer, t3, 3, vectorCadouri);
			titl.afisareText(renderer);
			t3.setTimp(5);
			//t4.UpdateMoveX();
			for (int i = 0; i < 10; i++)
			{
				vectorCadouri[i].CadouCollidingSanta(t3);
				std::cout << endl << "PENTRU I = " << i << endl;
				if (vectorCadouri[i].getColiziune() == true)
				{
					
					cadourilevel2++;
				
					
				}
			
				vectorCadouri[i].UpdateTheCaracter(renderer);
				vectorCadouri[i].SetTheCollidedRect();
				vectorCadouri[i].EvidentiateTheRect(renderer);
				if (vectorCadouri[i].getDestroySanta() == true)
				{
					t3.destroy_Santa();
					t3.SetPosition(75, 400);
					SDL_Quit();
				}
				
			}
				if (cadourilevel2 == 30)
				{
					level = -2;
					t3.SetPosition(75, 200);
				}
			
			t3.UpdateTheCaracter(renderer);
			t3.SetTheCollidedRect();
			//t3.EvidentiateTheRect(renderer);
			
		}
		if (level == 0)
		{
			TextureRectangle tabla(renderer, "Assets/tablapoveste.png");
			tabla.SetPosition(50, 50);
			tabla.SetRectangle(350, 350);
			tabla.TextureRender(renderer, false);


			TextureRectangle text(renderer, "Assets/distruge.png");
			text.SetPosition(130, 170);
			text.SetRectangle(190, 110);
			text.TextureRender(renderer, false);


			text.TextureRender(renderer, true);
			TextureRectangle ren(renderer, "Assets/ren.png");
			ren.SetPosition(350, 100);
			ren.SetRectangle(300, 300);
			ren.TextureRender(renderer, false);



			contorMeniu++;
			if (contorMeniu == 50)
			{
				level = 1;
				contorMeniu = 0;
			}
		}
		if (level == -1)
		{
			TextureRectangle tabla(renderer, "Assets/tablapoveste.png");
			tabla.SetPosition(50, 50);
			tabla.SetRectangle(350, 350);
			tabla.TextureRender(renderer, false);


			TextureRectangle text(renderer, "Assets/cadourileverzi.png");
			text.SetPosition(130, 170);
			text.SetRectangle(190, 110);
			text.TextureRender(renderer, false);
		

			text.TextureRender(renderer, true);
			TextureRectangle ren(renderer, "Assets/ren.png");
			ren.SetPosition(350, 100);
			ren.SetRectangle(300, 300);
			ren.TextureRender(renderer, false);


			
			contorMeniu++;
			if (contorMeniu == 50)
			{
				level = 2;
				contorMeniu = 0;
			}
			//tabla.SetPosition(638, 0);
			//tabla.SetRectangle(640, 480);
		}

		if (level == -2)
		{
			TextureRectangle tabla(renderer, "Assets/tablapoveste.png");
			tabla.SetPosition(50, 50);
			tabla.SetRectangle(350, 350);
			tabla.TextureRender(renderer, false);


			TextureRectangle text(renderer, "Assets/rezista.png");
			text.SetPosition(130, 170);
			text.SetRectangle(190, 110);
			text.TextureRender(renderer, false);


			text.TextureRender(renderer, true);
			TextureRectangle ren(renderer, "Assets/ren.png");
			ren.SetPosition(350, 100);
			ren.SetRectangle(300, 300);
			ren.TextureRender(renderer, false);



			contorMeniu++;
			if (contorMeniu == 50)
			{
				level = 3;
				contorMeniu = 0;
			}
			//tabla.SetPosition(638, 0);
			//tabla.SetRectangle(640, 480);
		}
		if (level == 3)
		{

			t1.UpdateMoveX();
			t2.UpdateMoveX();
			t4.UpdateMoveX();



			t3.DetectedCollision(t4);
		
			t3.setTimp(4);
			
			t3.UpdateTheCaracter(renderer);
		
			
			
			
			t3.SetTheCollidedRect();
			
			t3.EvidentiateTheRect(renderer);
			m.UpdateTheMap();
			
			m.DrawMap(renderer, t3, 2, vectorCadouri);
		
			t4.TextureRender(renderer, false);
			cookie1.TextureRender(renderer, false);
			cookie1.setColectat(t3);
			
			cookie1.Update();
			cookie1.EvidentiateTheRect(renderer);
			cookie2.TextureRender(renderer, false);
			cookie2.setColectat(t3);
			
			cookie2.Update();
			cookie3.TextureRender(renderer, false);
			cookie3.setColectat(t3);
			cookie3.Update();
			cookie4.TextureRender(renderer, false);
			cookie4.setColectat(t3);
			cookie4.Update();
			t3.UpdateIfCollisionBetweenTwo(t4);

		}
		SDL_RenderPresent(renderer);	// aici afisam ceea ce punem noi

	}
	std::cout << "M-am oprit" << endl;
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window); //pentru ca am alocat memorie pentru un pointer la SDL_Window
	SDL_Quit();
	
	return 0;
}