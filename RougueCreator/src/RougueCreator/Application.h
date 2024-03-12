#pragma once

#include "Core.h"

namespace RougueCreator {
	class RC_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//To be defined in client
	Application* CreateApplication();
}

