#include <iostream>
#include "Vehicule.hpp"
#ifndef AUTO_H
#define AUTO_H

class Auto:public Vehicule
{
	public:
		Auto();
		~Auto();
		void conduire();
};
#endif

