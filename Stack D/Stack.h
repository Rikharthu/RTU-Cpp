#pragma once
class Stack {
private:
	int *s;
	int top;
	int max_len;
	enum { EMPTY = -1 };
public:
	Stack();
	Stack(int n);
	~Stack();
	bool push(int c);
	bool push(int *cp, int n);
	int pop() { return(s[top--]); }
	void reset() { top = EMPTY; }
	int topOf() { return(s[top]); }
	bool isFull() { return top == max_len - 1; }
	bool isEmpty() { return top == EMPTY; }

	void print(int n = 10); //for debugging only
	void clean();			//for debugging only
};