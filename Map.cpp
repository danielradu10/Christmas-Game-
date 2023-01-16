#include "Map.h"


#pragma once
#include "Cadouri.h"


	
Map::Map(int x1, int  y1, int x2, int y2, int x3, int  y3, int  x4, int y4, int x5, int y5, int x6, int y6)
	{
		this->x1 = x1;
		this->y1 = y1;
		this->x2 = x2;
		this->y2 = y2;
		this->x3 = x3;
		this->y3 = y3;
		this->x4 = x4;
		this->y4 = y4;
		this->x5 = x5;
		this->y5 = y5;
		this->x6 = x6;
		this->y6 = y6;
	};
Map::	~Map()
	{
		for (int i = 0; i < 11; i++)
		{
			if (MapTextures[i] != nullptr)
			{
				delete[]MapTextures[i];
			}
		}
		delete MapTextures;
	}
void Map::SetMap(SDL_Renderer* renderer)
	{

		MapTextures = new TextureRectangle * [11];
		MapTextures[0] = new TextureRectangle[3];
		MapTextures[1] = new TextureRectangle[3];
		MapTextures[2] = new TextureRectangle[3];
		MapTextures[3] = new TextureRectangle[3];
		MapTextures[4] = new TextureRectangle[3];
		MapTextures[5] = new TextureRectangle[3];

		//pentru level 1;
		MapTextures[6] = new TextureRectangle[16];
		MapTextures[7] = new TextureRectangle[3];
		MapTextures[8] = new TextureRectangle[3];
		MapTextures[9] = new TextureRectangle[3];
		MapTextures[10] = new TextureRectangle[3];

		MapTextures[0][0].SetFile("Assets/Tot/Tiles/1.png");
		MapTextures[0][1].SetFile("Assets/Tot/Tiles/2.png");
		MapTextures[0][2].SetFile("Assets/Tot/Tiles/3.png");

		MapTextures[1][0].SetFile("Assets/Tot/Tiles/4.png");
		MapTextures[1][1].SetFile("Assets/Tot/Tiles/5.png");
		MapTextures[1][2].SetFile("Assets/Tot/Tiles/6.png");


		MapTextures[2][0].SetFile("Assets/Tot/Tiles/1.png");
		MapTextures[2][1].SetFile("Assets/Tot/Tiles/2.png");
		MapTextures[2][2].SetFile("Assets/Tot/Tiles/3.png");

		MapTextures[3][0].SetFile("Assets/Tot/Tiles/4.png");
		MapTextures[3][1].SetFile("Assets/Tot/Tiles/5.png");
		MapTextures[3][2].SetFile("Assets/Tot/Tiles/6.png");

		MapTextures[4][0].SetFile("Assets/Tot/Tiles/14.png");
		MapTextures[4][1].SetFile("Assets/Tot/Tiles/15.png");
		MapTextures[4][2].SetFile("Assets/Tot/Tiles/16.png");

		MapTextures[5][0].SetFile("Assets/Tot/Tiles/14.png");
		MapTextures[5][1].SetFile("Assets/Tot/Tiles/15.png");
		MapTextures[5][2].SetFile("Assets/Tot/Tiles/16.png");

		MapTextures[6][0].SetFile("Assets/Tot/Object/IceBox.png");
		MapTextures[6][1].SetFile("Assets/Tot/Object/IceBox.png");
		MapTextures[6][2].SetFile("Assets/Tot/Object/Sign_1.png");
		MapTextures[6][3].SetFile("Assets/Tot/Object/SnowMan.png");
		MapTextures[6][4].SetFile("Assets/Tot/Object/Tree_1.png");
		MapTextures[6][5].SetFile("Assets/Tot/Object/Sign_2.png");
		MapTextures[6][6].SetFile("Assets/Tot/Object/IceBox.png");
		MapTextures[6][7].SetFile("Assets/Tot/Object/IceBox.png");
		MapTextures[6][8].SetFile("Assets/Tot/Object/Tree_2.png");
		MapTextures[6][9].SetFile("Assets/Tot/Object/Stone.png");
		MapTextures[6][10].SetFile("Assets/Tot/Object/Tree_1.png");
		MapTextures[6][11].SetFile("Assets/Tot/Object/Tree_1.png");
		MapTextures[6][12].SetFile("Assets/Tot/Object/Tree_1.png");
		MapTextures[6][13].SetFile("Assets/Tot/Object/Tree_1.png");
		MapTextures[6][14].SetFile("Assets/Tot/Object/Tree_1.png");
		MapTextures[6][15].SetFile("Assets/Tot/Object/Tree_1.png");

		MapTextures[7][0].SetFile("Assets/Tot/Tiles/1.png");
		MapTextures[7][1].SetFile("Assets/Tot/Tiles/2.png");
		MapTextures[7][2].SetFile("Assets/Tot/Tiles/3.png");

		MapTextures[8][0].SetFile("Assets/Tot/Tiles/4.png");
		MapTextures[8][1].SetFile("Assets/Tot/Tiles/5.png");
		MapTextures[8][2].SetFile("Assets/Tot/Tiles/6.png");


		MapTextures[9][0].SetFile("Assets/Tot/Tiles/1.png");
		MapTextures[9][1].SetFile("Assets/Tot/Tiles/2.png");
		MapTextures[9][2].SetFile("Assets/Tot/Tiles/3.png");

		MapTextures[10][0].SetFile("Assets/Tot/Tiles/4.png");
		MapTextures[10][1].SetFile("Assets/Tot/Tiles/5.png");
		MapTextures[10][2].SetFile("Assets/Tot/Tiles/6.png");


		MapTextures[0][0].SetTexture(renderer);
		MapTextures[0][1].SetTexture(renderer);
		MapTextures[0][2].SetTexture(renderer);

		MapTextures[1][0].SetTexture(renderer);
		MapTextures[1][1].SetTexture(renderer);
		MapTextures[1][2].SetTexture(renderer);


		MapTextures[2][0].SetTexture(renderer);
		MapTextures[2][1].SetTexture(renderer);
		MapTextures[2][2].SetTexture(renderer);

		MapTextures[3][0].SetTexture(renderer);
		MapTextures[3][1].SetTexture(renderer);
		MapTextures[3][2].SetTexture(renderer);

		MapTextures[4][0].SetTexture(renderer);
		MapTextures[4][1].SetTexture(renderer);
		MapTextures[4][2].SetTexture(renderer);

		MapTextures[5][0].SetTexture(renderer);
		MapTextures[5][1].SetTexture(renderer);
		MapTextures[5][2].SetTexture(renderer);

		MapTextures[6][0].SetTexture(renderer);
		MapTextures[6][1].SetTexture(renderer);
		MapTextures[6][2].SetTexture(renderer);
		MapTextures[6][3].SetTexture(renderer);
		MapTextures[6][4].SetTexture(renderer);
		MapTextures[6][5].SetTexture(renderer);
		MapTextures[6][6].SetTexture(renderer);
		MapTextures[6][7].SetTexture(renderer);
		MapTextures[6][8].SetTexture(renderer);
		MapTextures[6][9].SetTexture(renderer);
		MapTextures[6][10].SetTexture(renderer);
		MapTextures[6][11].SetTexture(renderer);
		MapTextures[6][12].SetTexture(renderer);
		MapTextures[6][13].SetTexture(renderer);
		MapTextures[6][14].SetTexture(renderer);
		MapTextures[6][15].SetTexture(renderer);
		MapTextures[7][0].SetTexture(renderer);
		MapTextures[7][1].SetTexture(renderer);
		MapTextures[7][2].SetTexture(renderer);

		MapTextures[8][0].SetTexture(renderer);
		MapTextures[8][1].SetTexture(renderer);
		MapTextures[8][2].SetTexture(renderer);


		MapTextures[9][0].SetTexture(renderer);
		MapTextures[9][1].SetTexture(renderer);
		MapTextures[9][2].SetTexture(renderer);

		MapTextures[10][0].SetTexture(renderer);
		MapTextures[10][1].SetTexture(renderer);
		MapTextures[10][2].SetTexture(renderer);





	}


bool Map:: Verify_If_Santa_Is_Grounded(TextureRectangle& obiectmapa, MosCraciun& mosul)
	{

		if (SDL_HasIntersection(&mosul.getTheCollidedRect(), &obiectmapa.getRect()) == SDL_TRUE && SDL_HasIntersection(&mosul.getRect(), &obiectmapa.getRect()) == SDL_TRUE)
		{
			return true;
		}
	}


void Map:: Verify_If_Cadou_Hit(Cadouri& cadou, TextureRectangle& obiectmapa)
	{
		if (SDL_HasIntersection(&cadou.getTheCollidedRect(), &obiectmapa.getRect()) == SDL_TRUE && SDL_HasIntersection(&cadou.getRect(), &obiectmapa.getRect()) == SDL_TRUE)
		{
			cadou.setCollidingMap(true);
		}
	}

void Map:: DrawMap(SDL_Renderer* renderer, MosCraciun& mosul, int level, Cadouri cadou[])
	{
		if (level == 1)
		{
			MapTextures[6][0].SetPosition(25, 380);
			MapTextures[6][0].SetRectangle(100, 100);
			//MapTextures[6][0].EvidentiateTheRect(renderer);
			MapTextures[6][0].TextureRender(renderer, true);

			MapTextures[6][1].SetPosition(125, 380);
			MapTextures[6][1].SetRectangle(100, 100);
			//MapTextures[6][1].EvidentiateTheRect(renderer);
			MapTextures[6][1].TextureRender(renderer, true);


			MapTextures[6][9].SetPosition(164.5, 331);
			MapTextures[6][9].SetRectangle(50, 50);
			//MapTextures[6][3].EvidentiateTheRect(renderer);
			MapTextures[6][9].TextureRender(renderer, true);



			MapTextures[6][2].SetPosition(25, 330);
			MapTextures[6][2].SetRectangle(50, 50);
			//MapTextures[6][2].EvidentiateTheRect(renderer);
			MapTextures[6][2].TextureRender(renderer, true);

			MapTextures[6][3].SetPosition(295, 400);
			MapTextures[6][3].SetRectangle(50, 50);
			//MapTextures[6][3].EvidentiateTheRect(renderer);
			MapTextures[6][3].TextureRender(renderer, true);



			MapTextures[0][0].SetPosition(247.5, 450);
			MapTextures[0][0].SetRectangle(50, 50);
			MapTextures[0][0].TextureRender(renderer, false);
			//MapTextures[0][0].EvidentiateTheRect(renderer);
			MapTextures[0][1].SetPosition(297.5, 450);
			MapTextures[0][1].SetRectangle(50, 50);
			MapTextures[0][1].TextureRender(renderer, false);
			//MapTextures[0][1].EvidentiateTheRect(renderer);
			MapTextures[0][2].SetPosition(342.5, 450);
			MapTextures[0][2].SetRectangle(50, 50);
			MapTextures[0][2].TextureRender(renderer, false);


			MapTextures[6][4].SetPosition(230, 200);
			MapTextures[6][4].SetRectangle(100, 100);
			//MapTextures[6][3].EvidentiateTheRect(renderer);
			MapTextures[6][4].TextureRender(renderer, true);


			MapTextures[6][8].SetPosition(322, 220);
			MapTextures[6][8].SetRectangle(90, 80);
			//MapTextures[6][3].EvidentiateTheRect(renderer);
			MapTextures[6][8].TextureRender(renderer, true);

			MapTextures[6][5].SetPosition(580, 330);
			MapTextures[6][5].SetRectangle(50, 50);
			//MapTextures[6][5].EvidentiateTheRect(renderer);
			MapTextures[6][5].TextureRender(renderer, true);

			MapTextures[6][6].SetPosition(415, 380);
			MapTextures[6][6].SetRectangle(100, 100);
			//MapTextures[6][3].EvidentiateTheRect(renderer);
			MapTextures[6][6].TextureRender(renderer, true);

			MapTextures[6][7].SetPosition(515, 380);
			MapTextures[6][7].SetRectangle(100, 100);
			//MapTextures[6][3].EvidentiateTheRect(renderer);
			MapTextures[6][7].TextureRender(renderer, true);




			MapTextures[4][0].SetPosition(240, 300);
			MapTextures[4][0].SetRectangle(50, 50);
			MapTextures[4][0].TextureRender(renderer, false);
			//MapTextures[4][0].EvidentiateTheRect(renderer);
			MapTextures[4][1].SetPosition(290, 300);
			MapTextures[4][1].SetRectangle(50, 50);
			MapTextures[4][1].TextureRender(renderer, false);
			//	MapTextures[4][1].EvidentiateTheRect(renderer);
			MapTextures[4][2].SetPosition(340, 300);
			MapTextures[4][2].SetRectangle(50, 50);
			MapTextures[4][2].TextureRender(renderer, false);

		}


		if (level == 2)
		{
			//obiect = rand()%(5 - 0 + 1) + 0;
			bool CADE1, CADE2, CADE3, CADE4, CADE5, CADE6, CADE7, CADE8;
			bool CADE9, CADE10, CADE11, CADE12, CADE13, CADE14, CADE15, CADE16, CADE17, CADE18, CADE19, CADE20;
			int x, y;
			for (int obiect = 0; obiect < 6; obiect++)
			{
				switch (obiect)
				{
				case 0:
					x = x1;
					y = y1;

					MapTextures[0][0].SetPosition(x, y);
					MapTextures[0][0].SetRectangle(50, 50);
					MapTextures[0][0].TextureRender(renderer, false);
					//MapTextures[0][0].EvidentiateTheRect(renderer);
					MapTextures[0][1].SetPosition(x + 50, y);
					MapTextures[0][1].SetRectangle(50, 50);
					MapTextures[0][1].TextureRender(renderer, false);
					//MapTextures[0][1].EvidentiateTheRect(renderer);
					MapTextures[0][2].SetPosition(x + 100, y);
					MapTextures[0][2].SetRectangle(50, 50);
					MapTextures[0][2].TextureRender(renderer, false);
					//MapTextures[0][2].EvidentiateTheRect(renderer);
					CADE1 = this->Verify_If_Santa_Is_Grounded(MapTextures[0][0], mosul);
					CADE2 = this->Verify_If_Santa_Is_Grounded(MapTextures[0][1], mosul);
					CADE3 = this->Verify_If_Santa_Is_Grounded(MapTextures[0][2], mosul);


					break;
				case 1:
					x = x2;
					y = y2;

					MapTextures[1][0].SetPosition(x, y);
					MapTextures[1][0].SetRectangle(50, 50);
					MapTextures[1][0].TextureRender(renderer, false);
					//MapTextures[1][0].EvidentiateTheRect(renderer);
					MapTextures[1][1].SetPosition(x + 50, y);
					MapTextures[1][1].SetRectangle(50, 50);
					MapTextures[1][1].TextureRender(renderer, false);
					//MapTextures[1][1].EvidentiateTheRect(renderer);
					MapTextures[1][2].SetPosition(x + 100, y);
					MapTextures[1][2].SetRectangle(50, 50);
					MapTextures[1][2].TextureRender(renderer, false);
					//MapTextures[1][2].EvidentiateTheRect(renderer);
					CADE4 = this->Verify_If_Santa_Is_Grounded(MapTextures[1][0], mosul);
					CADE5 = this->Verify_If_Santa_Is_Grounded(MapTextures[1][1], mosul);
					CADE6 = this->Verify_If_Santa_Is_Grounded(MapTextures[1][2], mosul);


					break;
				case 2:
					x = x3;
					y = y3;
					MapTextures[2][0].SetPosition(x, y - 50);
					MapTextures[2][0].SetRectangle(50, 50);
					MapTextures[2][0].TextureRender(renderer, false);
					//MapTextures[0][0].EvidentiateTheRect(renderer);
					MapTextures[2][1].SetPosition(x + 50, y - 50);
					MapTextures[2][1].SetRectangle(50, 50);
					MapTextures[2][1].TextureRender(renderer, false);
					//MapTextures[0][1].EvidentiateTheRect(renderer);
					MapTextures[2][2].SetPosition(x + 100, y - 50);
					MapTextures[2][2].SetRectangle(50, 50);
					MapTextures[2][2].TextureRender(renderer, false);

					MapTextures[3][0].SetPosition(x, y);
					MapTextures[3][0].SetRectangle(50, 50);
					MapTextures[3][0].TextureRender(renderer, false);
					//MapTextures[1][0].EvidentiateTheRect(renderer);
					MapTextures[3][1].SetPosition(x + 50, y);
					MapTextures[3][1].SetRectangle(50, 50);
					MapTextures[3][1].TextureRender(renderer, false);
					//MapTextures[1][1].EvidentiateTheRect(renderer);
					MapTextures[3][2].SetPosition(x + 100, y);
					MapTextures[3][2].SetRectangle(50, 50);
					MapTextures[3][2].TextureRender(renderer, false);
					//MapTextures[3][2].EvidentiateTheRect(renderer);

					CADE7 = this->Verify_If_Santa_Is_Grounded(MapTextures[2][0], mosul);
					CADE8 = this->Verify_If_Santa_Is_Grounded(MapTextures[2][1], mosul);
					CADE9 = this->Verify_If_Santa_Is_Grounded(MapTextures[2][2], mosul);
					CADE10 = this->Verify_If_Santa_Is_Grounded(MapTextures[3][0], mosul);
					CADE11 = this->Verify_If_Santa_Is_Grounded(MapTextures[3][1], mosul);
					CADE12 = this->Verify_If_Santa_Is_Grounded(MapTextures[3][2], mosul);

					break;

				case 3:
					x = x4;
					y = y4;
					MapTextures[4][0].SetPosition(x - 130, y - 50);
					MapTextures[4][0].SetRectangle(50, 50);
					MapTextures[4][0].TextureRender(renderer, false);
					//MapTextures[4][0].EvidentiateTheRect(renderer);
					MapTextures[4][1].SetPosition(x - 80, y - 50);
					MapTextures[4][1].SetRectangle(50, 50);
					MapTextures[4][1].TextureRender(renderer, false);
					//	MapTextures[4][1].EvidentiateTheRect(renderer);
					MapTextures[4][2].SetPosition(x - 30, y - 50);
					MapTextures[4][2].SetRectangle(50, 50);
					MapTextures[4][2].TextureRender(renderer, false);
					//	MapTextures[4][2].EvidentiateTheRect(renderer);
					CADE13 = this->Verify_If_Santa_Is_Grounded(MapTextures[4][0], mosul);
					CADE14 = this->Verify_If_Santa_Is_Grounded(MapTextures[4][1], mosul);
					CADE15 = this->Verify_If_Santa_Is_Grounded(MapTextures[4][2], mosul);
					break;
				case 4:
					x = x5;
					y = y5;
					MapTextures[5][0].SetPosition(x, y);
					MapTextures[5][0].SetRectangle(50, 50);
					MapTextures[5][0].TextureRender(renderer, false);
					//MapTextures[5][0].EvidentiateTheRect(renderer);
					MapTextures[5][1].SetPosition(x + 50, y);
					MapTextures[5][1].SetRectangle(50, 50);
					MapTextures[5][1].TextureRender(renderer, false);
					//MapTextures[5][1].EvidentiateTheRect(renderer);
					MapTextures[5][2].SetPosition(x + 100, y);
					MapTextures[5][2].SetRectangle(50, 50);
					MapTextures[5][2].TextureRender(renderer, false);
					//MapTextures[5][2].EvidentiateTheRect(renderer);
					CADE16 = this->Verify_If_Santa_Is_Grounded(MapTextures[5][0], mosul);
					CADE17 = this->Verify_If_Santa_Is_Grounded(MapTextures[5][1], mosul);
					CADE18 = this->Verify_If_Santa_Is_Grounded(MapTextures[5][2], mosul);
					break;



				default:
					break;

				}
			}
			mosul.setGrounded(CADE1 || CADE2 || CADE3 || CADE4 || CADE5 || CADE6 || CADE7 || CADE8 || CADE9 || CADE10 ||
				CADE11 || CADE12 || CADE13 || CADE14 || CADE15 || CADE16 || CADE17 || CADE18);
		}

		if (level == 3)
		{
			bool CADE1, CADE2, CADE3, CADE4, CADE5, CADE6;
			bool CADE7, CADE8, CADE9, CADE10, CADE11, CADE12;
			bool CADE13, CADE14, CADE15, CADE16, CADE17, CADE18;
			bool CADE19, CADE20, CADE21, CADE22, CADE23, CADE24;


			bool cadou0, cadou1, cadou2, cadou3, cadou4, cadou5, cadou6, cadou7, cadou8, cadou9, cadou10, cadou11, cadou12;
			MapTextures[0][0].SetPosition(25, 380);
			MapTextures[0][0].SetRectangle(50, 50);
			MapTextures[0][0].TextureRender(renderer, false);

			MapTextures[0][1].SetPosition(75, 380);
			MapTextures[0][1].SetRectangle(50, 50);
			MapTextures[0][1].TextureRender(renderer, false);

			MapTextures[0][2].SetPosition(125, 380);
			MapTextures[0][2].SetRectangle(50, 50);
			MapTextures[0][2].TextureRender(renderer, false);

			CADE1 = this->Verify_If_Santa_Is_Grounded(MapTextures[0][0], mosul);
			CADE2 = this->Verify_If_Santa_Is_Grounded(MapTextures[0][1], mosul);
			CADE3 = this->Verify_If_Santa_Is_Grounded(MapTextures[0][2], mosul);


			MapTextures[1][0].SetPosition(25, 430);
			MapTextures[1][0].SetRectangle(50, 50);
			MapTextures[1][0].TextureRender(renderer, false);

			MapTextures[1][1].SetPosition(25 + 50, 430);
			MapTextures[1][1].SetRectangle(50, 50);
			MapTextures[1][1].TextureRender(renderer, false);

			MapTextures[1][2].SetPosition(25 + 100, 430);
			MapTextures[1][2].SetRectangle(50, 50);
			MapTextures[1][2].TextureRender(renderer, false);


			CADE4 = this->Verify_If_Santa_Is_Grounded(MapTextures[1][0], mosul);
			CADE5 = this->Verify_If_Santa_Is_Grounded(MapTextures[1][1], mosul);
			CADE6 = this->Verify_If_Santa_Is_Grounded(MapTextures[1][2], mosul);




			MapTextures[2][0].SetPosition(175, 380);
			MapTextures[2][0].SetRectangle(50, 50);
			MapTextures[2][0].TextureRender(renderer, false);

			MapTextures[2][1].SetPosition(175 + 50, 380);
			MapTextures[2][1].SetRectangle(50, 50);
			MapTextures[2][1].TextureRender(renderer, false);

			MapTextures[2][2].SetPosition(175 + 100, 380);
			MapTextures[2][2].SetRectangle(50, 50);
			MapTextures[2][2].TextureRender(renderer, false);


			MapTextures[3][0].SetPosition(175, 430);
			MapTextures[3][0].SetRectangle(50, 50);
			MapTextures[3][0].TextureRender(renderer, false);

			MapTextures[3][1].SetPosition(175 + 50, 430);
			MapTextures[3][1].SetRectangle(50, 50);
			MapTextures[3][1].TextureRender(renderer, false);

			MapTextures[3][2].SetPosition(175 + 100, 430);
			MapTextures[3][2].SetRectangle(50, 50);
			MapTextures[3][2].TextureRender(renderer, false);


			MapTextures[7][0].SetPosition(325, 380);
			MapTextures[7][0].SetRectangle(50, 50);
			MapTextures[7][0].TextureRender(renderer, false);

			MapTextures[7][1].SetPosition(325 + 50, 380);
			MapTextures[7][1].SetRectangle(50, 50);
			MapTextures[7][1].TextureRender(renderer, false);

			MapTextures[7][2].SetPosition(325 + 100, 380);
			MapTextures[7][2].SetRectangle(50, 50);
			MapTextures[7][2].TextureRender(renderer, false);


			MapTextures[8][0].SetPosition(325, 430);
			MapTextures[8][0].SetRectangle(50, 50);
			MapTextures[8][0].TextureRender(renderer, false);

			MapTextures[8][1].SetPosition(325 + 50, 430);
			MapTextures[8][1].SetRectangle(50, 50);
			MapTextures[8][1].TextureRender(renderer, false);

			MapTextures[8][2].SetPosition(325 + 100, 430);
			MapTextures[8][2].SetRectangle(50, 50);
			MapTextures[8][2].TextureRender(renderer, false);


			MapTextures[9][0].SetPosition(475, 380);
			MapTextures[9][0].SetRectangle(50, 50);
			MapTextures[9][0].TextureRender(renderer, false);

			MapTextures[9][1].SetPosition(475 + 50, 380);
			MapTextures[9][1].SetRectangle(50, 50);
			MapTextures[9][1].TextureRender(renderer, false);

			MapTextures[9][2].SetPosition(475 + 100, 380);
			MapTextures[9][2].SetRectangle(50, 50);
			MapTextures[9][2].TextureRender(renderer, false);


			MapTextures[10][0].SetPosition(475, 430);
			MapTextures[10][0].SetRectangle(50, 50);
			MapTextures[10][0].TextureRender(renderer, false);

			MapTextures[10][1].SetPosition(475 + 50, 430);
			MapTextures[10][1].SetRectangle(50, 50);
			MapTextures[10][1].TextureRender(renderer, false);

			MapTextures[10][2].SetPosition(475 + 100, 430);
			MapTextures[10][2].SetRectangle(50, 50);
			MapTextures[10][2].TextureRender(renderer, false);


			MapTextures[6][10].SetPosition(475 + 60, 280);
			MapTextures[6][10].SetRectangle(100, 100);
			MapTextures[6][10].TextureRender(renderer, false);

			MapTextures[6][11].SetPosition(455, 280);
			MapTextures[6][11].SetRectangle(100, 100);
			MapTextures[6][11].TextureRender(renderer, false);

			MapTextures[6][12].SetPosition(355, 280);
			MapTextures[6][12].SetRectangle(100, 100);
			MapTextures[6][12].TextureRender(renderer, false);

			MapTextures[6][13].SetPosition(255, 280);
			MapTextures[6][13].SetRectangle(100, 100);
			MapTextures[6][13].TextureRender(renderer, false);

			MapTextures[6][14].SetPosition(155, 280);
			MapTextures[6][14].SetRectangle(100, 100);
			MapTextures[6][14].TextureRender(renderer, false);

			MapTextures[6][15].SetPosition(55, 280);
			MapTextures[6][15].SetRectangle(100, 100);
			MapTextures[6][15].TextureRender(renderer, false);
			CADE7 = this->Verify_If_Santa_Is_Grounded(MapTextures[2][0], mosul);
			CADE8 = this->Verify_If_Santa_Is_Grounded(MapTextures[2][1], mosul);
			CADE9 = this->Verify_If_Santa_Is_Grounded(MapTextures[2][2], mosul);
			CADE10 = this->Verify_If_Santa_Is_Grounded(MapTextures[3][0], mosul);
			CADE11 = this->Verify_If_Santa_Is_Grounded(MapTextures[3][1], mosul);
			CADE12 = this->Verify_If_Santa_Is_Grounded(MapTextures[3][2], mosul);

			CADE13 = this->Verify_If_Santa_Is_Grounded(MapTextures[7][0], mosul);
			CADE14 = this->Verify_If_Santa_Is_Grounded(MapTextures[7][1], mosul);
			CADE15 = this->Verify_If_Santa_Is_Grounded(MapTextures[7][2], mosul);
			CADE16 = this->Verify_If_Santa_Is_Grounded(MapTextures[8][0], mosul);
			CADE17 = this->Verify_If_Santa_Is_Grounded(MapTextures[8][1], mosul);
			CADE18 = this->Verify_If_Santa_Is_Grounded(MapTextures[8][2], mosul);

			CADE19 = this->Verify_If_Santa_Is_Grounded(MapTextures[9][0], mosul);
			CADE20 = this->Verify_If_Santa_Is_Grounded(MapTextures[9][1], mosul);
			CADE21 = this->Verify_If_Santa_Is_Grounded(MapTextures[9][2], mosul);
			CADE22 = this->Verify_If_Santa_Is_Grounded(MapTextures[10][0], mosul);
			CADE23 = this->Verify_If_Santa_Is_Grounded(MapTextures[10][1], mosul);
			CADE24 = this->Verify_If_Santa_Is_Grounded(MapTextures[10][2], mosul);


			for (int i = 0; i < 20; i++)
			{
				this->Verify_If_Cadou_Hit(cadou[i], MapTextures[0][0]);
				this->Verify_If_Cadou_Hit(cadou[i], MapTextures[0][1]);
				this->Verify_If_Cadou_Hit(cadou[i], MapTextures[0][2]);
				this->Verify_If_Cadou_Hit(cadou[i], MapTextures[1][0]);
				this->Verify_If_Cadou_Hit(cadou[i], MapTextures[1][1]);
				this->Verify_If_Cadou_Hit(cadou[i], MapTextures[1][2]);
				this->Verify_If_Cadou_Hit(cadou[i], MapTextures[2][0]);
				this->Verify_If_Cadou_Hit(cadou[i], MapTextures[2][1]);
				this->Verify_If_Cadou_Hit(cadou[i], MapTextures[2][2]);


				this->Verify_If_Cadou_Hit(cadou[i], MapTextures[7][0]);
				this->Verify_If_Cadou_Hit(cadou[i], MapTextures[7][1]);
				this->Verify_If_Cadou_Hit(cadou[i], MapTextures[7][2]);
				this->Verify_If_Cadou_Hit(cadou[i], MapTextures[8][0]);
				this->Verify_If_Cadou_Hit(cadou[i], MapTextures[8][1]);
				this->Verify_If_Cadou_Hit(cadou[i], MapTextures[8][2]);
				this->Verify_If_Cadou_Hit(cadou[i], MapTextures[9][0]);
				this->Verify_If_Cadou_Hit(cadou[i], MapTextures[9][1]);
				this->Verify_If_Cadou_Hit(cadou[i], MapTextures[9][2]);
			}
			



			mosul.setGrounded(CADE1 || CADE2 || CADE3 || CADE4 || CADE5 || CADE6 ||
				CADE7 || CADE8 || CADE9 || CADE10 || CADE11 || CADE12 ||
				CADE13 || CADE14 || CADE15 || CADE16 || CADE17 || CADE18 ||
				CADE19 || CADE20 || CADE21 || CADE22 || CADE23 || CADE24);

		}

	}



void Map:: UpdateTheMap() {

		x1--;
		if (x1 < -280)
		{
			x1 = 640;
			cout << endl << "Am depasit" << endl;
		}
		x2--;
		if (x2 < -280)
		{
			x2 = 640;
			cout << endl << "Am depasit" << endl;
		}
		x3--;
		if (x3 < -280)
		{
			x3 = 640;
			cout << endl << "Am depasit" << endl;
		}
		x4--;
		if (x4 < -280)
		{
			x4 = 640;
			cout << endl << "Am depasit" << endl;
		}
		x5--;
		if (x5 < -280)
		{
			x5 = 640;
			cout << endl << "Am depasit" << endl;
		}
		x6--;
		if (x6 < -280)
		{
			x6 = 640;
			cout << endl << "Am depasit" << endl;
		}

	}
