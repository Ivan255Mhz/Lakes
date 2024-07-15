#pragma once
#include "Reservoir.h"
#include <iostream>


std::ostream& operator<< (std::ostream out, const Reservoir& obj) {

	out << "Name - " << obj.NameReservoir << std::endl;
	out << "Length - " << obj.Length << std::endl;
	out << "Width - " << obj.Width << std::endl;
	out << "Depth - " << obj.Depth << std::endl;
	out << std::endl;
	out << "Square Reservoir - " << obj.SquareReservoir << std::endl;
	out << "Water Surface - " << obj.WaterSurface << std::endl;
	out << "Type Of Reservoir - " << obj.TypeOfReservoir << std::endl;
	out << std::endl;

	return out;
}









