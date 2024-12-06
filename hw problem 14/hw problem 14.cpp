

#include <iostream>
#include <string>
using namespace std;
void Read_numbers(int &num1 ,int &num2)
{
	
	cout << "please enter the  number A ?\n";
	cin >> num1;
	cout << "please enter the  number B?\n";
	cin >> num2;

}
void swap(int &A, int &B) 
{
	int temp;
	temp = A;
	A = B;
	B = temp;
}
void print_numbers(int num1, int num2)
{
	cout << "\nNumber 1 = " << num1 << endl;
	cout << "Number 2 = " << num2 << endl;
}




int main()
{
	int num1, num2;
	Read_numbers(num1, num2);

	print_numbers(num1, num2);

	swap(num1, num2);

	print_numbers(num1, num2);
	
}

