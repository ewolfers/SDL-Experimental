#include "Window.h"

Window::Window() throw(Error) {
	win = SDL_CreateWindow(
		"SDL2 Window",
		SDL_WINDOWPOS_UNDEFINED,
		SDL_WINDOWPOS_UNDEFINED,
		640,
		480,
		SDL_WINDOW_OPENGL
	);
	if(win == NULL) throw Error();
}

Window::Window(const char* title, int x, int y, int w, int h, Uint32 flags) throw(Error) {
	win = SDL_CreateWindow(
		title,
		x,
		y,
		w,
		h,
		flags
	);
	if(win == NULL) throw Error();
}

Window::~Window() throw() {
	SDL_DestroyWindow(win);
}