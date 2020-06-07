#pragma once

#ifdef HS_PLATFORM_WINDOWS

extern Hufs::Application* Hufs::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Hufs::CreateApplication();
	app->Run();
	delete app;
}

#else
#error Hufs only support Windows!
#endif