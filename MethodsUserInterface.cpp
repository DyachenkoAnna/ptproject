#include "ClassUserInterface.h"
#include <iostream>

using namespace std;

//������ ������ UserInterface

// �����������
UserInterface::UserInterface()
{	
	
}

// ����������
UserInterface::~UserInterface()
{
	
}

// ������� ����
void UserInterface::interact()
{
	char ch1 = 0; // ���������� ��� ������ ������ � �������  ����
	char ch2 = 0; // ���������� ��� ������ ������ � �������
	char ch3 = 0; // ���������� ��� ������ ��/���

	do //�������� � ������� ����
	{
		system("cls"); // ������� �������
		// ������� ����
		cout << "����:" << endl;
		cout << "--------------------------" << endl;
		cout << "1. ���� ������" << endl;
		cout << "2. ����� ������" << endl;
		cout << "3. ��������� � ����" << endl;
		cout << "4. ��������� �����" << endl;
		cout << "0. �����" << endl;
		cout << "--------------------------" << endl;
		cout << "��� �����: ";
		//ch1 = getaChar();
		cin >> ch1;

		// ������ � ��������� ������� ����
		switch (ch1)
		{
		case '1': // ���� ������
			do // �������� � �������
			{
				system("cls"); // ������� �������
				cout << "\n�� ������� ����� 1. ���� ������\n" << endl;
				cout << "��������:" << endl;
				cout << "--------------------------" << endl;
				cout << "1. ���� ����� ������ � ����������" << endl;
				cout << "0. �����" << endl;
				cout << "--------------------------" << endl;
				cout << "��� �����: ";
				//ch2 = getaChar();
				cin >> ch2;

				switch (ch2)
				{
				case '1': // ���� ����� ������ � ����������
					cout << "\n�� ������� ����� 1. ���� ����� ������ � ����������\n" << endl;
				
					ch2 = '0';
					system("pause");
					break;
				case '0': // ������� � ������� ����
					cout << "\n�� ������� ����� 0. �����\n" << endl;
					system("pause");
					break;
				default:
					cout << "\n��� ������ ������ ����!\n" << endl;
					system("pause");
					break;
				}
			} while (ch2 != '0'); // ���� �� ��������� ������������ � ������� ����
			break;
		case '2': // ����� ������
				system("cls"); // ������� �������
				cout << "\n�� ������� ����� 2. ����� ������\n" << endl;
				ptrAnimalList->display();
				system("pause");
			break;
		case '3': // ���������� � ����

				cout << "\n�� ������� ����� 3. ���������� � ����\n" << endl;

				do
				
			break;
		case '4': // ��������� �����
		{
			system("cls"); // ������� �������
			cout << "\n�� ������� ����� 4. ����������� ������\n" << endl;

			system("pause");
		}
			break;
		case '0': // �����
			cout << "\n���������� ������ ���������!..\n" << endl;
			system("pause");
			break;
		default:
			cout << "\n��� ������ ������ ����!\n" << endl;
			system("pause");
			break;
		}
	} while (ch1 != '0'); // ���� �� ������� "�����"
}