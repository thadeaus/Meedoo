#include <string>
#include "meedoo.h"

Meedoo::Meedoo(string n): m_name(n) {
m_health = 100;
m_age = 0; // 0 to 100
m_hunger = 0;
m_energy = 100;
m_sickness = 0;
m_sex = Male;
}

	// Getters for the Meedoo
void Meedoo::getStats() {
	cout << "Meedoo Name:" << m_name << endl;
	switch(m_sex) { 
	 	case Male : cout << "Meedoo Sex:" << "Male" << endl; break;
	 	case Female : cout << "Meedoo Sex:" << "Female" << endl; break;
	}
	cout << "Meedoo Age:" << m_age << endl;
	cout << "Meedoo Health:" << m_health << endl;
	cout << "Meedoo Energy:" << m_energy << endl;
	switch(m_sickness) {
		case 0 : cout << "Meedoo Sickness:" << "Not Sick! :)" << endl; break;
		case 1 : cout << "Meedoo Sickness:" << "Sick! :(" << endl; break;
	}
}
	// Destructor
	Meedoo::~Meedoo() {
		// blank for now
	}
}