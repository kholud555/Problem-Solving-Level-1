
#include <iostream>
using namespace std;

int Read_age()
{
	int age;
	cout << "please enter your age?\n";
	cin >> age;
	return age;
}
bool vaildate_Number_in_range(int Number, int from, int to)
{
	return(Number >= from && Number <= to);

}
int Read_until_age_between( int from, int to)
{
	int age = 0;
	do
	{
		age = Read_age();
	} while (!vaildate_Number_in_range(age, from, to));
		return age;
}
void print_result(int age)
{
	cout << "Your age is " << age << endl;
}


int main()
{
	print_result(Read_until_age_between(18,45));

}

