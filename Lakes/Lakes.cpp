
// не идеально 

#include"ReserBase.h"


int main()
{
	setlocale(LC_ALL, "ru");
	
	ReserBase base;

	
	int choise{};
	
	do {

		std::cout << "Выберете действие" << std::endl;
		std::cout << "1. Добавить водоем" << std::endl;
		std::cout << "2. Удалить водоем" << std::endl;
		std::cout << "3. Сравнить водную поверхность водоемов" << std::endl;
		std::cout << "4. Вывести базу в текстовый файл" << std::endl;
		std::cout << "5. Вывести базу в бинарный файл" << std::endl;
		std::cout << "6. Сортировка" << std::endl;
		std::cout << "7. Вывести базу в консоль" << std::endl;
		std::cout << "8. Выход" << std::endl;
		cin >> choise;
		switch (choise)
		{
		case 1:
		{
			base.push_back(Reservoir_Factory());
		}break;
		
		case 2:
		{
			Removal(base);
		}break;

		case 3:
		{
			Comparison(base);
		}break;

		case 4:
		{
			base.Text_File();
		}break;

		case 5:
		{
			base.Binary_File();
		}break;

		case 6:
		{
			SortBase(base);
		}break;

		case 7:
		{
			system("cls");
			base.print();
			system("pause");
			system("cls");

		}break;

		case 8:
		{
			
		}break;

		
		
		default:
		{
			std::cout << "Error , повторите попытку" << std::endl;
		}

		}


	} while (choise!=8);
	

	

	return 0;
}

