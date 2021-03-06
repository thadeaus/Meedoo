#include <string>
#include <iostream>
#include "InputHandler.h"
#include "meedoo.h"

InputHandler::InputHandler() {}
InputHandler::~InputHandler() {}

bool InputHandler::Read(Meedoo& m) {
	std::string input;
	if( std::cin >> input ) {
		if(input == "feed" || input == "Feed") {
			std::cout << "FEED HERE" << std::endl;
		}
		else if( input == "clean" || input == "Clean") {
			std::cout << "CLEAN HERE" << std::endl;
		}
		else if( input == "medicine" || input == "Medicine") {
			std::cout << "GIVE MEDICINE" << std::endl;
		}
		else if( input == "stats" || input == "Stats" ) { 
			std::cout << "CHECK STATS" << std::endl;
			m.getStats();
		}
		else if( input == "exit" || input == "Exit" ) {
			std::cout << "Exiting" << std::endl;
			return false;
		}
		else if( input == "help" || input == "Help" ) {
			std::cout << "Commands: " << std::endl;
			std::cout << " - feed" << std::endl;
			std::cout << " - clean" << std::endl;
			std::cout << " - medicine" << std::endl;
			std::cout << " - stats" << std::endl << std::endl;
			std::cout << " - exit" << std::endl;
		}
		else {
			std::cout << "Type help to see list of commands" << std::endl;
		}
	}
	else {
		std::cerr << "Input Failed" << std::endl << std::endl;
	}
	return true;
}