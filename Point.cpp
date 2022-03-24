#include "Point.h"
#include <iostream>
#include <cmath>

using namespace std;

void Point::SetFirst(double value)
{
	first = value;
}

void Point::SetSecond(double value)
{
	second = value;
}


bool Point::Init(double x, double y)
{
	if (fabs(x) <= 100 && fabs(y) <= 100)
	{
		first = x;
		second = y;
		return true;
	}
	else
	{
		return false;
	}
}

void Point::Read()
{
	double x, y;
	do
	{
		cout << "Input complex value:" << endl;
		cout << " X = "; cin >> x;
		cout << " Y = "; cin >> y;
		
	} while (!Init(x, y));
}
void Point::Display() const
{
	cout << endl;
	cout << " X = " << first << endl;
	cout << " Y = " << second << endl;
}
double Point::Distance() const
{
	double s = sqrt((first * first) + (second * second));
	return s;
}