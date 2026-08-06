#pragma once
#include "Core.h"
namespace Transitus {
	class HAZEL_API  Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};
	//To be defined in client
	Application* CreateApplication();
}


