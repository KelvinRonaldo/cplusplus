#include <iostream>
#include <iomanip>

#include "Person.h"

using namespace std;

int main(void){

	{
		Person me;
		me.name = "Kelvin";
		me.age = 22;

		me.talk();
		me.makeHappy();
		me.walk();
		me.makeSad();
		me.talk();
	}
	{
		Person me;
		me.name = "Day";
		me.age = 23;

		me.talk();
		me.makeHappy();
		me.walk();
		me.makeSad();
		me.talk();

	}



	return 0;
}