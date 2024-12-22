

#include <iostream>
using namespace std;
int Read_totalsales()
{
	int totalsales;
	cout << "please enter totalsales \n";
	cin >> totalsales;

	return totalsales;
}
float Get_comission_percentage(float totalsales)
{
	if (totalsales >= 1000000)

		return 0.01;
	else if (totalsales >= 500000)
		return 0.02;
	else if (totalsales >= 100000)
		return 0.03;
	else if (totalsales >= 50000)
		return 0.05;
	else
		return 0;


}
float calculate_comission_percentage(float totalsales)
{

	return Get_comission_percentage(totalsales) * totalsales;
}

int main()
{ 
	float totalsales = Read_totalsales();
	cout << "comission percentage = " << Get_comission_percentage(totalsales) << endl;
	cout << "Total comission = " << calculate_comission_percentage(totalsales) << endl;
}
	

	

