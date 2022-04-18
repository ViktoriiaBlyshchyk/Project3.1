#include "Car.h"

Car::Car()
	: tradeMark(""), enginePower(0), numberOfCylinders(0)
{}

Car::Car(const string tradeMark, const double enginePower, const double numberOfCylinders)
	: tradeMark(tradeMark), enginePower(enginePower), numberOfCylinders(numberOfCylinders)
{}

Car::Car(const Car& c)
	: tradeMark(c.tradeMark), enginePower(c.enginePower), numberOfCylinders(c.numberOfCylinders)
{}

Car::~Car(void)
{}

Car::operator string () const
{
	stringstream ss;
	ss << endl;
	ss << "tradeMark = " << tradeMark << endl;
	ss << "enginePower = " << enginePower << endl;
	ss << "numberOfCylinders = " << numberOfCylinders << endl;

	return ss.str();
}

ostream& operator << (ostream& out, const Car& c)
{
	out << string(c);
	return out;
}

istream& operator >> (istream& in, Car& c)
{
	string tradeMark;
	double enginePower;
	double numberOfCylinders;

	cout << endl;
	cout << "tradeMark = "; in >> tradeMark;
	cout << "enginePower = "; in >> enginePower;
	cout << "numberOfCylinders = "; in >> numberOfCylinders;
	enginePower = c.Change1();

	c.SetTradeMark(tradeMark);
	c.SetEnginePower(enginePower);
	c.SetNumberOfCylinders(numberOfCylinders);

	return in;
}

double Car::Change1()
{
	double x;
	cout << "enginePower = "; cin >> x;
	enginePower = x;
	return x;
}
