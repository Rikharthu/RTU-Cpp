#include <iostream>
using namespace std;

#include "Figure.h"

Figure::Figure()
{
	x = y = 0.0;
	cout << "Figure constructor\n";//for demo only! }
}

Figure::~Figure()
{
	cout << "Figure destructor\n"; //for demo only!
}

Figure::Figure(double x, double y)
{
	setCoord( x, y);
}
