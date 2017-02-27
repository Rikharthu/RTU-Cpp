#pragma once
#include <string>

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
		cout << "Автомобиль #" << regNum << " утилизирован" << endl;
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
		return "{\n\"regNum\":\"" + regNum + "\"";
	}
};