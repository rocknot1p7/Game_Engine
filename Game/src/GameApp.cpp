#include<Game_Engine.h>
class Game :public Game_Engine::Application
{
public:
	Game() {

	}
	~Game() {

	}
};
Game_Engine::Application* Game_Engine::CreateApplication()
{
	return new Game();
}