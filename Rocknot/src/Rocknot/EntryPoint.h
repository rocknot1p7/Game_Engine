#pragma once

#ifdef RN_PLATFORM_WINDOWS

	extern Rocknot::Application* Rocknot::CreateApplication();

int main(int argc,char** argv) {
	printf("rocknot");
	auto app = Rocknot::CreateApplication();
	app->Run();
	delete app;
}

#endif