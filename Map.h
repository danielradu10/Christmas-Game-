#pragma once
#include "Cadouri.h"
class Map
{

	TextureRectangle** MapTextures;
	int obstacol;
	int x1, x2, x3, x4, x5, x6;
	int y1, y2, y3, y4, y5, y6;

public:

	//TO DO: ~MAP
	Map(int x1, int  y1, int x2, int y2, int x3, int  y3, int  x4, int y4, int x5, int y5, int x6, int y6);
	~Map();
	void SetMap(SDL_Renderer* renderer);

	bool Verify_If_Santa_Is_Grounded(TextureRectangle& obiectmapa, MosCraciun& mosul);


	void Verify_If_Cadou_Hit(Cadouri& cadou, TextureRectangle& obiectmapa);

	void DrawMap(SDL_Renderer* renderer, MosCraciun& mosul, int level, Cadouri cadou[]);


	void UpdateTheMap();
};