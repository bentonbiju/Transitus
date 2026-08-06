#pragma once
#ifdef HZ_PLATFORM_WINDOWS
extern Transitus::Application* Transitus::CreateApplication();
int main(int argc, char** argv) {
	printf("Hazel Engine");
	auto app = Transitus::CreateApplication();
	app->Run();
	delete app;
}

#endif // HZ_PLATFORM_WINDOWS
