#pragma once
#include <string>
#include "game.h"
#include "credits.h"

extern Texture2D FarBackground;
extern Texture2D NearBackgound1;
extern Texture2D NearBackgound2;
extern Texture2D FloorBackground;
extern Texture2D enemy;
extern Texture2D dron1;
extern Texture2D bullet;

struct optionsButtons
{
	Rectangle option;
};

void Menu();

void DrawMenu(optionsButtons buttons[]);

void loadTexturesGame();

void CreateOptions(optionsButtons buttons[]);

int InputReader(optionsButtons buttons[]);

bool IsExitPressed();
