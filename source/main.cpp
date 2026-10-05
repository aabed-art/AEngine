#include "Game.h"
#include <aEng.h>

int main()
{
	Game* game = new Game();
	aEng::Engine& engine = aEng::Engine::GetInstance();
	engine.SetApplication(game);

	if (engine.Init(1280, 720))
	{
		engine.Run();
	}

	engine.Destroy();

	return 0;
}