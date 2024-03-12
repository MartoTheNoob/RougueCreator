#pragma once

#ifdef RC_PLATFORM_WINDOWS

extern RougueCreator::Application* RougueCreator::CreateApplication();

int main(int argc, char** argv)
{
	auto app = RougueCreator::CreateApplication();
	printf("DEAD FOR ARCH\n");
	app->Run();
	delete app;
}
#else 
#error FUCK ARCH
#endif
