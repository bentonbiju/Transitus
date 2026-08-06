#include <Transitus.h>
class Sandbox : public Transitus::Application
{
public:
	Sandbox() {

	}
	~Sandbox() {

	}
};
Transitus::Application* Transitus::CreateApplication()
{
	return new Sandbox();
}