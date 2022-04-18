#pragma once
#include "Car.h"
#include <iostream>
#include <sstream>

using namespace std;

class Lorry :
	public Car
{
private:
	double carryingAbility;

public:
	double GetCarryingAbility() const { return carryingAbility; }
	void SetCarryingAbility(double carryingAbility) { this->carryingAbility = carryingAbility; }
	
	Lorry(const double carryingAbility = 0);
	Lorry(const Lorry& l);
	~Lorry(void);

	operator string () const;

	friend ostream& operator << (ostream& out, const Lorry& l);
	friend istream& operator >> (istream& in, Lorry& l);

	double Change2();
};

