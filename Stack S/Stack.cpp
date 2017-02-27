#include "stack.h"
#include <iostream>
using namespace std;

void Stack::clean()
{
	for (int i = 0; i<MAX_STACK_LENGTH; i++)
		s[i] = 0;
	top = EMPTY;
}

void Stack::print(int n)
{
	cout << endl;
	for (int i = 0; i < n && i < MAX_STACK_LENGTH; i++)
		cout << s[i] << ';';
	cout << "  top index=" << top;
}
