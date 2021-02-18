#include <iostream>
#include "SDL.h"

#define RELEASE(x) { delete x; x = nullptr; }
#define RELEASE_A(x) { delete[] x; x = nullptr; }

class rbk
{
public:
	SDL_Window* window = nullptr;
	SDL_Renderer* renderer = nullptr;

	int positions[54];
	int visibleFace, invisibleUpFace;

	rbk()
	{
		SDL_Init(SDL_INIT_VIDEO);
		SDL_CreateWindowAndRenderer(500, 500, 0, &window, &renderer);
		for (int i = 0; i < 54; i++)
			positions[i] = i;
		visibleFace = 0;
	}
	~rbk()
	{
		SDL_Quit();
	}

	bool Play()
	{

		return true;
	}
	void rotate(int rotation)
	{
		int u = invisibleUpFace;
		int f = visibleFace;
		int rotM[6][6][4]=
		{
			6,6,6,6,
		}
	}
};

int main(int argc, char** argv)
{
	rbk* app = new rbk;
	while (app->Play());
	RELEASE(app);
	return 0;
}
