#include <iostream>
using namespace std;
#include "stack.h"

Stack::Stack()
{
	max_len = 256;
	s = new int[max_len];
	top = EMPTY;
}

Stack::Stack(int size)
{
	max_len = size;
	s = new int[size];
	top = EMPTY;
}

Stack::~Stack()
{
	delete s;
}


bool Stack::push(int item)
{
	if (!isFull()) {
		top++;
		s[top] = item;
		return true;
	}
	else return false;
}

bool Stack::push(int *cp, int n)
{
	if ((top + n) > max_len) return false;
	for (int i = 0; i < n; i++)
		push(*(cp + i));
	return true;
}

void Stack::clean()
{
	for (int i = 0; i<max_len; i++)
		s[i] = 0;
	top = EMPTY;
}

void Stack::print(int n)
{
	cout << endl;
	for (int i = 0; i < n && i < max_len; i++)
		cout << s[i] << ';';
	cout << "  top index=" << top;
}

