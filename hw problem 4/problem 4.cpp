

#include <iostream>
using namespace std;
struct strinfo
{
	int age;
	bool has_drive_license;
};
strinfo Read_requires()
{
	strinfo info;
	cout << "please enter your age?\n";
	cin >> info.age;
	cout << "Do you have driverlicense ? 1/0\n";
	cin >> info.has_drive_license;
	
	return info;
}

bool Isaccepted(strinfo info)
{
	return (info.age > 21 && info.has_drive_license == 1);
}

void print_result(strinfo info)
{
	if (Isaccepted(info) == 1)

		cout << "\nHired" << endl;
	else
		cout << "\n Rejected " << endl;
	
}

int main()
{
	print_result(Read_requires());
	

}

