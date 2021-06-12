// Find area of a triangle using Heron's Formula
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float a, b, c, s, area;
	 
	cout << "Find area of triangle by Heron's Formula" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	s = (a+b+c)/2;
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	cout << "Area of triangle is = " << area;
}
