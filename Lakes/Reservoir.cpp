
#include "Reservoir.h"



std::ostream& operator<< (std::ostream& out, const Reservoir& obj) {

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

Reservoir Reservoir_Factory() {
	std::string NameReservoir;
	double Length{};
	double Width{};
	double Depth{};
	system("cls");
	std::cout << "¬ведите название водоема : ";
	std::cin >> NameReservoir;
	system("cls");
	std::cout << "¬ведите длину водоема : ";
	std::cin >> Length;
	system("cls");
	std::cout << "¬ведите ширину водоема : ";
	std::cin >> Width;
	system("cls");
	std::cout << "¬ведите глубину водоема : ";
	std::cin >> Depth;
	system("cls");

	Reservoir temp(NameReservoir, Length, Width, Depth);
	return temp;
}







