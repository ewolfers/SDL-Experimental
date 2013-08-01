#ifndef _WINDOW_H_
#define _WINDOW_H_

#include "SDL2/SDL.h"
#include "Error.h"

class Window {
	public:
		Window() throw(Error);
		Window(const char*, int, int, int, int, Uint32) throw(Error);
		virtual ~Window() throw();
	private:
		SDL_Window *win;
};

#endif