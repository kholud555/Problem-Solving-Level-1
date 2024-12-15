

#include <iostream>
using namespace std;

int Read_positive_number(string massage)
{
	int Number;
	do 
	{
		cout << massage << endl;
		cin >> Number;

	} while (Number < 0);

	return Number;
}
int calculate_factorial_of_N(int N)
{
	int multi = 1;
	for (int factorial = N; factorial >= 1; --factorial)
	{
		multi *= factorial;

	}
	return multi;
}

int main()
{
	cout << calculate_factorial_of_N(Read_positive_number("please enter a positive number ???" )) << endl;

	/*cout << "\n-----------------------\n";

	int w, count = 1, mult = 1;
	cout << " please enter intger number\n";
	cin >> w;
	while (w <= 0)
	{
		cout << "wrong number ";
		cout << "please enter a positive number ?" << endl;
		cin >> w;
	}

	while (count <= w)
	{
		mult *= count;
		count++;
	}
	cout << "factorial = " << mult << endl;*/



}

