#pragma once
#include <iostream>
#include <string>
using namespace std;

class Person {
private:
	string name;
	int age;
public:
	Person();
	Person(string name, int age);
	Person(string name);
	Person(Person& another_person);

	void print();
	string getName();
	int getAge();

};