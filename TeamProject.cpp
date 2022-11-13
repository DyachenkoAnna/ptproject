#include <iostream>
#include <Windows.h>       //для SetConsoleCP() и SetConsoleOutputCP()
#include "ClassUserInterface.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	UserInterface theUserInterface;
	theUserInterface.interact();
	return 0;
}