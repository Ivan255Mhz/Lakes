
#include <iostream>
#include "Reservoir.h"
#include"ReserBase.h"


int main()
{
	setlocale(LC_ALL, "ru");
	
	Reservoir a;

	ReserBase b;

	b.push_back(a);
	
	std::cout << a;
	

	return 0;
}

