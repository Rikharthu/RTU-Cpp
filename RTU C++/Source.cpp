#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

class CoordPoint {
private:
	int X;
	int Y;
public:
	// default constructor
	CoordPoint();
	CoordPoint(int, int);
	// destructor
	~CoordPoint() {
		cout << "Message from the \"CoordPoint\" - destroyed!" <<
			endl;
	}
	// A function definition in a class definition is an inline function definition, 
	// even without the use of the inline specifier.
	int GetX() const {
		return X;
	}
	void SetX(int X) {
		this->X = X;
	}
	// not implemented
	// TODO how is const keyword used here?
	// A "const function", denoted with the keyword const after a function declaration, 
	// makes it a compiler error for this class function to change a member variable of the class
	int GetY() const;
	void SetY(int);
	void Print() const;
};

// Implementation:
CoordPoint::CoordPoint() : X(0), Y(0) {
}

CoordPoint::CoordPoint(int Px, int Py) : X(Px) {
	Y = Py;
}

// If a function is inline, the compiler places a copy of the code of that 
// function at each point where the function is called at compile time.
inline int CoordPoint::GetY() const {
	return Y;
}

inline void CoordPoint::SetY(int Y) {
	this->Y = Y;
}

inline void CoordPoint::Print() const {
	cout << "X = " << X << ", Y = " << Y;
}


void main(void) {
	CoordPoint CP1, 
		CP2(1, 2), 
		CP3 = CoordPoint(3, 4),
		*CP4 = new CoordPoint(5, 6), *CP5; // pointer needs a "new" keyword (выделить память)
	CP5 = new CoordPoint(7, 8);

	// GCC way
	// clrscr();
	// too system dependent
	system("CLS");
	// better do it this way:
	// cout << string(50, '\n');

	CP1.Print(); cout << endl;
	CP1.SetX(1);
	CP1.CoordPoint::Print(); cout << endl;

	cout << endl << "**************" << endl << endl;

	(*CP4).Print(); cout << endl;
	CP4->SetY(9);
	CP4->Print(); cout << endl;
	(*CP4).CoordPoint::Print(); cout << endl;
	CP5->CoordPoint::Print(); cout << endl;

	// destroy allocated pointers
	// TODO what about CP1, CP2 and CP3? Do the destroy automatically?
	delete CP4;
	delete CP5;

	/*while (kbhit()) // check if there is something in the input buffer
		getch();	// pauses the console until a key is hit and it returns a char pressed
	getch();*/
	getchar();
}
