#pragma once

#include <iostream>

using namespace std;

//Класс Animal(животное).
//Хранит всю необходимую информацию о животном.

class Animal{
private:
	string passport; //серия и номер паспорта
	string name;     //краткое описание (тип, порода)
	string gender;   //пол (м, ж)
	float expenses;  //расходы за месяц (сколько потрачено на содержание)
	float revenue;   //доходы за месяц (за какую сумму продано животное или 0)
	float income;    //прибыль = доходы - расходы.

public:
	Animal(string pass, string nam, string gen, float exp, float rev); //конструктор с параметрами
	Animal();        //конструктор без параметров
	~Animal();       //деструтктор
	
	string getPassport(); //возвращает серию и номер паспорта
	string getName();     //возвращает краткое описание (тип, порода)
	string getGender();     //возвращает пол (м, ж)
	float getExpenses();  //возвращает расходы за месяц (сколько потрачено на содержание)
	float getRevenue();   //возвращает доходы за месяц (за какую сумму продано животное или 0)
	float getIncome();    //возвращает прибыль за месяц
};