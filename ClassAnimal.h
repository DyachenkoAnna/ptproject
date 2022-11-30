#pragma once

#include <iostream>

using namespace std;

//����� Animal(��������).
//������ ��� ����������� ���������� � ��������.

class Animal{
private:
	string passport; //����� � ����� ��������
	string name;     //������� �������� (���, ������)
	string gender;   //��� (�, �)
	float expenses;  //������� �� ����� (������� ��������� �� ����������)
	float revenue;   //������ �� ����� (�� ����� ����� ������� �������� ��� 0)
	float income;    //������� = ������ - �������.

public:
	Animal(string pass, string nam, string gen, float exp, float rev); //����������� � �����������
	Animal();        //����������� ��� ����������
	~Animal();       //�����������
	
	string getPassport(); //���������� ����� � ����� ��������
	string getName();     //���������� ������� �������� (���, ������)
	string getGender();     //���������� ��� (�, �)
	float getExpenses();  //���������� ������� �� ����� (������� ��������� �� ����������)
	float getRevenue();   //���������� ������ �� ����� (�� ����� ����� ������� �������� ��� 0)
	float getIncome();    //���������� ������� �� �����
};