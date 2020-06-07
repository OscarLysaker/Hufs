#include <Hufs.h>

class Sandbox : public Hufs::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}


};

Hufs::Application* Hufs::CreateApplication()
{
	return new Sandbox();
}