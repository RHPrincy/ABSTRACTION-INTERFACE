#include <iostream>
#include "Vehicule.hpp"
#ifndef MOTO_H
#define MOTO_H

class Moto:public Vehicule
{
	public:
		Moto();
		~Moto();
		void conduire();
};
#endif
