

#include <iostream>
# include <string>
using namespace std;
int Read_number()
{
	int number;
	cout << "Enter a number : " << endl;
	cin >> number;

	return number;
}
float calculate_half_num_value(int number)
{
	
	return (float) number / 2;
}
void print_half_number_calculation(int number)
{
	string Result = "\n The half of " + to_string(number) + " is " + to_string(calculate_half_num_value(number));
	cout << Result << endl;
}

int main()
{
	print_half_number_calculation(Read_number());
   
}

