#include <Rocknot.h>
class Sandbox : public Rocknot::Application{
	public:
		Sandbox() {
			
		}
		~Sandbox() {

		}
};

Rocknot::Application* Rocknot::CreateApplication() {
	return new Sandbox();
}