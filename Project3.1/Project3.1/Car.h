#pragma once
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Car
{
private:
    string tradeMark;
    double enginePower;
    double numberOfCylinders;

public:
    string GetTradeMark() const { return tradeMark; }
    double GetEnginePower()  const { return enginePower; }
    double GetNumberOfCylinders() { return numberOfCylinders; }

    void SetTradeMark(string tradeMark) { this->tradeMark = tradeMark; }
    void SetEnginePower(double enginePower) { this->enginePower = enginePower; }
    void SetNumberOfCylinders(double numberOfCylinders) { this->numberOfCylinders = numberOfCylinders; }

    Car();
    Car(const string tradeMark, const double enginePower, const double numberOfCylinders);
    Car(const Car& c);
    ~Car(void);

    operator string () const;

    friend ostream& operator << (ostream& out, const Car& c);
    friend istream& operator >> (istream& in, Car& c);

    double Change1();
};

