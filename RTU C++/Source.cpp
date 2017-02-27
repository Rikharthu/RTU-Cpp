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
	// methods not implemented in class declaration
	//+ A "const function", denoted with the keyword const after a function declaration, 
	//+ makes it a compiler error for this class function to change a member variable of the class
	int GetY() const;
	void SetY(int);
	void Print() const;
};

// Implementation:
CoordPoint::CoordPoint() : X(0), Y(0){

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
		*CP4 = new CoordPoint(5, 6), *CP5; // pointer needs a "new" keyword (âûäåëèòü ïàìÿòü)
	CP5 = new CoordPoint(7, 8);
	// CP1, CP2, CP3 ir statiskie objekti - tie tieks izvietoti stekā
	// CP4 un CP5 - ir dinamiskie objekti - izvietoti heap-atmiņā

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

	// before calling object pointer's methods you must dereference it with * operator
	(*CP4).Print(); cout << endl;
	// or use arrow "->"
	CP4->SetY(9);
	CP4->Print(); cout << endl;
	(*CP4).CoordPoint::Print(); cout << endl;
	CP5->CoordPoint::Print(); cout << endl;

	//+ Destroy dynamic objects
	// QUESTION what about CP1, CP2 and CP3? Do the destroy automatically?
	// dynamic ojects ( created with "new" keyword) must be delete
	// statis objects are destroyed automatically
	delete CP4;
	delete CP5;

	// QUESTION what does it do?
	/*while (kbhit()) // check if there is something in the input buffer
		getch();	// pauses the console until a key is hit and it returns a char pressed
	getch();*/
	getchar();
}
