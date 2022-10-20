#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>
using namespace std;


class Person{
private:
	bool happy;

public:
	string name;
	int age;

	Person();	
	~Person();	

	void talk();
	void walk();
	void makeHappy();
	void makeSad();
};


#endif