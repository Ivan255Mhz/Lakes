#include "ReserBase.h"

void Removal(ReserBase & base) {
	
	int choise{};
	std::cout << "�������� ��������" << std::endl;
	std::cout << "1. ������� � �����" << std::endl;
	std::cout << "2. ������� �� �������" << std::endl;
	std::cin >> choise;

	switch (choise)
	{
	case 1:
	{
		base.pop_back();
	}break;

	case 2: 
	{
		int index{};
		std::cout << "�������� index" << std::endl;
		std::cin >> index;
		if (index >= base.size()) {
			std::cout << "Error , ��������� �������" << std::endl;
			break;
		}
		base.DeleteByIndex(index);

	}break;

	default:
	{
		std::cout << "Error , ��������� �������" << std::endl;
	}break;

	}
		
}

void Comparison(ReserBase& base) {
	int index_one{};
	std::cout << "�������� ������ ������� �������" << std::endl;
	std::cin >> index_one;

	if (index_one >= base.size()) {
		std::cout << "Error , ��������� �������" << std::endl;
		return;
	}

	int index_two{};
	std::cout << "�������� ������ ������� �������" << std::endl;
	std::cin >> index_two;

	if (index_two >= base.size()) {
		std::cout << "Error , ��������� �������" << std::endl;
		return;
	}

	if (base[index_one].ComparisonOfTheWaterArea(base[index_two])) {
		std::cout << "������ ������ ������ ������� " << std::endl;
	}
	std::cout << "������ ������ ������ ������� " << std::endl;
}

void SortBase(ReserBase& base) {
	int choise{};
	std::cout << "�������� ��������" << std::endl;
	std::cout << "1. ���������� �� �����" << std::endl;
	std::cout << "2. ���������� �� ������" << std::endl;
	std::cout << "3. ���������� �� �������" << std::endl;
	std::cin >> choise;
	switch (choise)
	{
	case 1:
	{
		base.sort_Length();
	}break;

	case 2:
	{
		base.sort_Width();
	}break;

	case 3:
	{
		base.sort_Depth();
	}break;

	default:
	{
		std::cout << "Error , ��������� �������" << std::endl;
	}break;

	}
}