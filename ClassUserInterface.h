#pragma once

#include <iostream>
#include "ClassAnimalList.h"
#include "ClassAnimalInputScreen.h"

using namespace std;

class UserInterface
{
private:
	AnimalList* ptrAnimalList;
	AnimalInputScreen* ptrAnimalInputScreen;
public:
	UserInterface();
	~UserInterface();
	void interact();
};