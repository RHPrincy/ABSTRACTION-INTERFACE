#include <iostream>
#include <string>
using namespace std;

#ifndef VEHICULE_HPP
#define VEHICULE_HPP

class Vehicule
{
	public:
		Vehicule();
		~Vehicule();
		void marque(string vehiculeMarque);
		virtual void conduire() = 0;
};
#endif
