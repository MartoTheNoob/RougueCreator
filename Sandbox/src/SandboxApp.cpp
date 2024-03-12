#include "RC.h"

class Sandbox : public RougueCreator::Application 
{
public:
	Sandbox() 
	{

	}

	~Sandbox() 
	{

	}
};

RougueCreator::Application* RougueCreator::CreateApplication()
{
	return new Sandbox();
}