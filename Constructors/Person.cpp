#include "Person.h"
#include <iostream>
using namespace std;

Person::Person() {
	cout << "Person()" << endl;
	name = "Default";
	age = 404;
}

Person::Person(string name, int age=3) {
	cout << "Person(name, age)" << endl;
	this->name = name;
	this->age = age;
}

Person::Person(string name) {
	cout << "Person(name)" << endl;
	this->name = name;
	this->age = 404;
}

Person::Person(Person& another_person) {
	cout << "Person(Person& another_person), copy constructor" << endl;
	this->name = another_person.name;
	this->age = another_person.age;
}

int Person::getAge() {
	return this->age;
}

string Person::getName() {
	return this->name;
}

void Person::print() {
	cout << "name: " << name << ", age: " << age << endl;
}