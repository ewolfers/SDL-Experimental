#include <iostream>
#include "Driver.h"
#include "Window.h"

Driver::Driver(Uint32 flags) throw(Error) {
	if(SDL_Init(flags) != 0) throw Error();
}

Driver::~Driver() {
	SDL_Quit();
}

int main(int argc, char* argv[]) {
	try {
		Driver test(SDL_INIT_VIDEO);
	} catch (const Error& err) {
		std::cerr << "Error while initializing SDL: "
				  << err.what() << std::endl;
	}
	
	try {
		Window window;
		Window window2("Test", 100, 100, 500, 500, SDL_WINDOW_OPENGL);
		SDL_Delay(5000);
	} catch (const Error& err) {
		std::cerr << "Error while initializing SDL windows: "
				  << err.what() << std::endl;
	}
	
	return 0;
}