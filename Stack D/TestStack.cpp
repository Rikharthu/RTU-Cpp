#include <iostream>
using namespace std;
#include "stack.h"
#include <iostream>
using namespace std;
#include "stack.h"

	int  main()
	{
		Stack s1;
		s1.reset();
		s1.clean();
		s1.print();

		s1.push(100);
		s1.print();
		s1.push(200);
		s1.push(300);
		s1.print();
		cout << endl << "pop from s1 " << s1.pop();
		s1.print();
		cout << endl << "at the top of s1 " << s1.topOf();
		cout << endl << "pop from s1 " << s1.pop();
		s1.print();
		cout << endl << "pop from s1 " << s1.pop();
		s1.print();
		
		getchar();
	}


