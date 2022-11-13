#include "ClassUserInterface.h"
#include <iostream>

using namespace std;

//методы класса UserInterface

// конструктор
UserInterface::UserInterface()
{	
	
}

// деструктор
UserInterface::~UserInterface()
{
	
}

// главное меню
void UserInterface::interact()
{
	char ch1 = 0; // переменная для выбора пункта в главном  меню
	char ch2 = 0; // переменная для выбора пункта в подменю
	char ch3 = 0; // переменная для ответа да/нет

	do //работаем с главным меню
	{
		system("cls"); // очистка консоли
		// Главное меню
		cout << "Меню:" << endl;
		cout << "--------------------------" << endl;
		cout << "1. Ввод данных" << endl;
		cout << "2. Вывод данных" << endl;
		cout << "3. Сохранить в файл" << endl;
		cout << "4. Составить отчет" << endl;
		cout << "0. Выход" << endl;
		cout << "--------------------------" << endl;
		cout << "Ваш выбор: ";
		//ch1 = getaChar();
		cin >> ch1;

		// работа с выбранным пунктом меню
		switch (ch1)
		{
		case '1': // ввод данных
			do // работаем с подменю
			{
				system("cls"); // очистка консоли
				cout << "\nВы выбрали пункт 1. Ввод данных\n" << endl;
				cout << "Выберите:" << endl;
				cout << "--------------------------" << endl;
				cout << "1. Ввод новых данных с клавиатуры" << endl;
				cout << "0. Назад" << endl;
				cout << "--------------------------" << endl;
				cout << "Ваш выбор: ";
				//ch2 = getaChar();
				cin >> ch2;

				switch (ch2)
				{
				case '1': // Ввод новых данных с клавиатуры
					cout << "\nВы выбрали пункт 1. Ввод новых данных с клавиатуры\n" << endl;
				
					ch2 = '0';
					system("pause");
					break;
				case '0': // Возврат в главное меню
					cout << "\nВы выбрали пункт 0. Назад\n" << endl;
					system("pause");
					break;
				default:
					cout << "\nНет такого пункта меню!\n" << endl;
					system("pause");
					break;
				}
			} while (ch2 != '0'); // пока не соберется возвращаться в главное меню
			break;
		case '2': // вывод данных
				system("cls"); // очистка консоли
				cout << "\nВы выбрали пункт 2. Вывод данных\n" << endl;
				ptrAnimalList->display();
				system("pause");
			break;
		case '3': // сохранение в файл

				cout << "\nВы выбрали пункт 3. Сохранение в файл\n" << endl;

				do
				
			break;
		case '4': // составить отчет
		{
			system("cls"); // очистка консоли
			cout << "\nВы выбрали пункт 4. Составление отчета\n" << endl;

			system("pause");
		}
			break;
		case '0': // выход
			cout << "\nЗавершение работы программы!..\n" << endl;
			system("pause");
			break;
		default:
			cout << "\nНет такого пункта меню!\n" << endl;
			system("pause");
			break;
		}
	} while (ch1 != '0'); // пока не выберем "Выход"
}