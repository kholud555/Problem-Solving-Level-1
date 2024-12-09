
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
	return (Number >= from && Number <= to);
}
void print_result(int  age)
{
	if (vaildate_Number_in_range(age, 18, 45))
		cout << age << " is a vaild age\n";
	else
		cout << age << " is un invaild age \n";
}


int main()
{
	print_result(Read_age());
}
