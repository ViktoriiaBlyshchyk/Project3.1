#include "Lorry.h"

Lorry::Lorry(const double carryingAbility)  
	: carryingAbility(carryingAbility) 
{}

Lorry::Lorry(const Lorry& l)
{
	carryingAbility = l.carryingAbility;
}

Lorry::~Lorry(void)
{}

Lorry::operator string () const
{
	stringstream ss;
	ss << "carryingAbility = " << carryingAbility << endl;
	return ss.str();  
}

ostream& operator << (ostream& out, const Lorry& l)
{
	out << string(l);
	return out;
}

istream& operator >>(istream& in, Lorry& l)
{
	double carryingAbility;
	cout << endl;
	cout << "carryingAbility = "; in >> carryingAbility;

	carryingAbility = l.Change2();
	l.SetCarryingAbility(carryingAbility);

	return in;
}

double Lorry::Change2()
{
	double y;
	cout << "carryingAbility = "; cin >> y;
	carryingAbility = y;
	return y;
}

