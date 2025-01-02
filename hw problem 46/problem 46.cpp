

#include <iostream>
using namespace std;
void PrintlettersAtoZ()
{
	for (int i = 65; i <= 90; i++) 
	{

		cout << char(i) << endl;
	}
}

int main()
{
	PrintlettersAtoZ();

	cout << "\n------------------------------\n";

	char letters = 65;
	while (letters <=  90)
	{
		cout << letters << endl;
		letters++;
	}
}
	
	

