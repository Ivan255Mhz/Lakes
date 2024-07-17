#include "ReserBase.h"

void Removal(ReserBase & base) {
	
	int choise{};
	std::cout << "Выбирете действие" << std::endl;
	std::cout << "1. Удалить с конца" << std::endl;
	std::cout << "2. Удалить по индексу" << std::endl;
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
		std::cout << "Выбирете index" << std::endl;
		std::cin >> index;
		if (index >= base.size()) {
			std::cout << "Error , повторите попытку" << std::endl;
			break;
		}
		base.DeleteByIndex(index);

	}break;

	default:
	{
		std::cout << "Error , повторите попытку" << std::endl;
	}break;

	}
		
}

void Comparison(ReserBase& base) {
	int index_one{};
	std::cout << "Выберете индекс первого водаема" << std::endl;
	std::cin >> index_one;

	if (index_one >= base.size()) {
		std::cout << "Error , повторите попытку" << std::endl;
		return;
	}

	int index_two{};
	std::cout << "Выберете индекс второго водаема" << std::endl;
	std::cin >> index_two;

	if (index_two >= base.size()) {
		std::cout << "Error , повторите попытку" << std::endl;
		return;
	}

	if (base[index_one].ComparisonOfTheWaterArea(base[index_two])) {
		std::cout << "Первый водоем больше второго " << std::endl;
	}
	std::cout << "Второй водоем больше первого " << std::endl;
}

void SortBase(ReserBase& base) {
	int choise{};
	std::cout << "Выбирете действие" << std::endl;
	std::cout << "1. Сортировка по длине" << std::endl;
	std::cout << "2. Сортировка по ширене" << std::endl;
	std::cout << "3. Сортировка по глубине" << std::endl;
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
		std::cout << "Error , повторите попытку" << std::endl;
	}break;

	}
}