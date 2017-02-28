#include <iostream>
#include <cstdio>
#include <string>
//!+++ 3. Variants.
using namespace std;


class Vehicle {
private:
	string regNum;
	int year;
	string country;

public:
	// default constructor
	Vehicle();
	Vehicle(string, int, string);
	// destructor
	~Vehicle() {
		cout << "Vehicle #" << regNum << " recycled." << endl;
	}

	// getters and setters
	string getRegNum() const {
		return regNum;
	}

	void setRegNum(string regNum) {
		this->regNum = regNum;
	}

	// Not implemented 
	int getYear() const;
	void setYear(int);
	string getCountry() const;
	void setCountry(string);

	string toString() {
		return string("\"regNum\":\"" + regNum + "\",\n\"year\":"+to_string(year)+",\n\"country\":\""+country+"\"");
	}
};

// Vehicle implementation
// initializer list
Vehicle::Vehicle() : regNum("UNX-01"), year(1970), country("USA") { }

Vehicle::Vehicle(string regNum, int year, string country) {
	this->regNum = regNum;
	this->year = year;
	this->country = country;
}

inline int Vehicle::getYear() const{
	return year;
}

inline void Vehicle::setYear(int year){
	this->year = year;
}

inline string Vehicle::getCountry()const {
	return country;
}

inline void Vehicle::setCountry(string country) {
	this->country = country;
}


void main(void) {
	system("CLS");

	Vehicle v1,
		v2("KB-601",2008,"Germany"),
		v3=Vehicle("FO-3399",2006,"Japan"),
		*v4 = new Vehicle(),
		*v5 = new Vehicle("GU-83",2002,"USA");
	
	cout << "v1:\n" << v1.toString() << "\n"<<endl;
	v1.setCountry("Amerikaaa");
	cout << "v1 edited:\n" << v1.Vehicle::toString() << "\n" << endl;

	cout << "v3:\n"<<v3.toString() << "\n" << endl;
	cout<<"v4:\n"<<v4->toString()<<"\n" << endl;
	cout << "v5:\n" << (*v5).toString() << "\n" << endl;
	v5->setCountry("Korea");
	(*v5).setRegNum("AMR-666");
	cout << "v5:\n" << (*v5).toString() << "\n" << endl;

	delete v4;
	delete v5;

	//! wont work because v5 is already destroyed
	//cout << "v5:\n" << (*v5).toString() << "\n" << endl;

	getchar();
}
