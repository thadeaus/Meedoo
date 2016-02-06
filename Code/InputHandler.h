#ifndef INPUTHANDLER_H
#define INPUTHANDLER_H

#include "meedoo.h"

class InputHandler {
private:	
	static InputHandler* m_instance;
	InputHandler();
	~InputHandler();
public:
	static InputHandler* getInstance();
	static void destroyInstance();
	bool Read(Meedoo& m);
};

#endif