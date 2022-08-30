#pragma once
#include "Core.h"

namespace Rocknot{
	class ROCKNOT_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};
	// to be defined in client
	Application* CreateApplication();
}

