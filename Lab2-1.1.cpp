#include "Point.h"
#include <iostream>
using namespace std;
Point makePoint(double x, double y)
{
	Point z;
	if (!z.Init(x, y))
		cout << "Wrong arguments to Init!" << endl;
	return z;
}

int main()
{
	Point z;
	
	double x, y;

	cout << " X = "; cin >> x;
	cout << " Y = "; cin >> y;

	z = makePoint(x, y);

	z.Display();

	cout << "Distance(z) = " << z.Distance() << endl;

	return 0;
}