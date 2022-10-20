#include <iostream>

#include "Person.h"

using namespace std;


Person::Person(){
	cout << "Aoooooba!" << endl;
}

Person::~Person(){
	cout << "Falooouuu!" << endl;
}

void Person::talk(){
	if(happy)
		cout << name << " said \"Hello!! I'm " << age << " yo\"" << endl;
	else
		cout << name << " said \"GET OUT!" << endl;
}

void Person::walk(){
	cout << name << " walked 3 meters" << endl;
}

void Person::makeHappy(){
	happy = true;
}

void Person::makeSad(){
	happy = false;
}