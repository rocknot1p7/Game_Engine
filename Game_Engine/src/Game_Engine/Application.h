#pragma once

#include "Core.h"

namespace Game_Engine {

	class Game_Engine_API Application
	{
	public:
		Application();
		virtual~Application();
		void Run();
	};

	//To be defined in client
	Application* CreateApplication();


}
