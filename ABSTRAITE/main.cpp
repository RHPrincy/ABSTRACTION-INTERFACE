#include "Vehicule.hpp"
#include "Auto.hpp"
#include "Moto.hpp"

int main()
	{
		Auto Rally = Auto();
		Moto Cross = Moto();
		Rally.marque("Audi");
		Rally.conduire();
		Cross.marque("KAWASAKI");
		Cross.conduire();
		return (0);
	}