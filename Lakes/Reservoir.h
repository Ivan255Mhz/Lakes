#pragma once
#include <iostream>
#include <vector>




class Reservoir
{
	
	std::string NameReservoir;
	double Length;
	double Width;
	double Depth;

	
	double SquareReservoir;
	double WaterSurface;
	std::string TypeOfReservoir;
	
    
public:

	friend std::ostream& operator<< (std::ostream out, const Reservoir& obj);

	Reservoir() : Length{ 0.0 }, Width{ 0.0 }, Depth{ 0.0 }, SquareReservoir{ getSquareReservoir() }, WaterSurface{ getWaterSurface() }, NameReservoir{"-"}
	, TypeOfReservoir(getTypeOfReservoir()){}

	Reservoir(double Length, double Width, double Depth) :Length{ Length }, Width{ Width }, Depth{Depth}, SquareReservoir{ getSquareReservoir() }, WaterSurface{ getWaterSurface() }, NameReservoir{ "-" }
	, TypeOfReservoir(getTypeOfReservoir()) {} 

	void setLength(double val) {
		Length = val;
		MultiTransform();
	}
	void setWidth(double val) {
		Width = val;
		MultiTransform();
	}
	void setDepth(double val) {
		Depth = val;
		MultiTransform();
	}

	double getLength() const {
		return Length;
	}
	double getWidth() const {
		return Width;
	}
	double getDepth() const {
		return Depth;
	}

	void print() const {
		std::cout << "Назавание водоема - "<<NameReservoir << std::endl;
		std::cout << "Длина - " << Length << std::endl;
		std::cout << "Глубина - " << Width << std::endl;
		std::cout << "Ширина - " << Depth << std::endl;
		std::cout << "Тип водоема - " << TypeOfReservoir << std::endl;
		std::cout << "Обьем водоема - " << SquareReservoir << std::endl;
		std::cout << "Прощадь водной поверхности - " << WaterSurface << std::endl;
		
	}

private:

	double getSquareReservoir() {
		return Length * Width * Depth;
	}

	double getWaterSurface() {
		if (Width == 0)
			return 0;
		return SquareReservoir / Width;
	}

	std::string getTypeOfReservoir() {
		if (SquareReservoir == 0)
			return"-";
		if (SquareReservoir < 280000)
			return "Pool";
		if (SquareReservoir > 280000 || SquareReservoir < 3800000)
			return "Lake";
		else
			return "Sea";
	}

	void MultiTransform() {
		SquareReservoir = getSquareReservoir();
		WaterSurface = getWaterSurface();
		TypeOfReservoir = getTypeOfReservoir();
		
	}


	bool ComparisonOfTheWaterArea(Reservoir& obj) {
		if (this->WaterSurface > obj.WaterSurface)
			return true;
		return false;
	}
};



std::ostream& operator<< (std::ostream out, const Reservoir& obj);


