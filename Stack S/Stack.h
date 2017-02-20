#pragma once
const int MAX_STACK_LENGTH = 256;

class Stack {
private:
	int s[MAX_STACK_LENGTH];
	// indekss tam steka elementam, kur paslaik atrodas iterators
	int top;
	// top=EMPTY, top=FULL
	enum { EMPTY = -1, FULL = MAX_STACK_LENGTH - 1 };
public:
	void push(int c) { top++; s[top] = c; }
	// return current element and then decrement index
	int pop() { return(s[top--]); }
	void reset() { top = EMPTY; }
	int topOf() { return(s[top]); }
	bool isFull() { return top == FULL; }
	bool isEmpty() { return top == EMPTY; }

	void print(int n = 10); //for debugging only 
	void clean();			//for debugging only 
};
