
#include <iostream>
using namespace std;

void Read_marks( int marks[3])
{
	cout << "please enter the first mark?\n";
	cin >> marks[0];
	cout << "please enter the second mark?\n";
	cin >> marks[1];
	cout << "please enter the third mark?\n";
	cin >> marks[2];
}
int average_of_marks(int marks[3])
{
	int avg;
	return avg = (marks[0] + marks[1] + marks[2]) / 3;
}
void print_avg(int avg)
{
	cout << "The average of marks are " << (float)avg << endl;
}


int main()
{

	int marks[3];
	Read_marks(marks);
	print_avg(average_of_marks(marks));
	


}

