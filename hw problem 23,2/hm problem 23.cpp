
#include <iostream>
#include <cmath>
using namespace std;
int area_circle_described(int b, int a, int c)
{
	const float PI = 3.14;
	int p = ((a + b + c) / 2);
	return (PI * pow((a + b + c), 2) / 4 * sqrt(p * (p - a) * (p - b) * (p - c)));
}

int main()
{
	short int a;
	short int b;
	short int c;
	const float PI = 3.14;
	
	cout << "please enter a ?\n";
	cin >> a;
	cout << "please enter b ?\n";
	cin >> b;
	cout << "please enter c ?\n";
	cin >> c;

	cout << area_circle_described(a, b, c) << endl;
	short int P = (a * b * c / 2);
	int denominator = 4 * sqrt(P * (P - a) * (P - b) * (P - c));
	int Numerator = a * b * c;
	int t = Numerator / denominator;
	//cout << "Area = " << round(PI * pow(t, 2)) << endl;
}

