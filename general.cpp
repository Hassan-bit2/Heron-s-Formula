// Find area of a triangle using Heron's Formula
#include <iostream>
#include <cmath>

using namespace std;

Area(int a, int b, int c, int s)
{
	cout << "Semi-perimeter of triangle = s = " << int(a + b + c)/2;
	cout << "Area of triangle is = " << int(s*(s-a)*(s-b)*(s-c));
}

/*Area(int a, int b, int c, int s)
{
	cout << "Area of triangle = " << int(s*(s-a)*(s-b)*(s-c));
}*/
int main()
{
	int a, b, c, s;
	cout << "Enter the length of sides of triangle\n";
	cin >> a;
	cin >> b;
	cin >> c;
	Area(a, b, c, s);
}
