#include <iostream>
#include "SDL.h"

class rbk
{
public:

	bool play()
	{

		return true;
	}
};

int main(int argc, char** argv)
{
	rbk* app = new rbk;
	while (app->play());
	delete app;
	app = nullptr;
	return 0;
}
