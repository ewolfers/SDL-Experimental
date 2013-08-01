#ifndef _DRIVER_H_
#define _DRIVER_H_

#include "SDL2/SDL.h"
#include "Error.h"

class Driver {
	public:
		Driver(Uint32 flags = 0) throw(Error);
		virtual ~Driver();
};

#endif