

#include <iostream>
#include <string>
using namespace std;
string ask_name()
{
	string name;
	cout << "what is your name ?" << endl;
	getline(cin, name);
	return name;
}
void print_name(string Name)
{
	cout << "\n your name is : " << Name << endl;
}

int main()
{
	
	print_name(ask_name());
}

