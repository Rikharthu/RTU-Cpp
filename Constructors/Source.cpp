#include <iostream>
#include <cstdio>
#include <string>
#include "Person.h"
using namespace std;


void main(void) {
	Person p1;
	p1.print();
	Person p2 = Person("John", 19);
	p2.print();
	Person p3 = Person("Alfred");
	p3.print();

	Person p4 = Person(p2);
	p4.print();
	cout <<"&p2="<< &p2 << ", &p4=" << &p4 << endl;

	Person p5 = p4;
	cout << "&p5=" << &p5 << ", &p4=" << &p4 << endl;

	getchar();
}
