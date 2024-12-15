
#include <iostream>
#include <cmath>
using namespace std;
void Read_Numbers(int Numbers[3])
{
    cout << "please enter the first number?\n";
    cin >> Numbers[0];
    cout << "please enter the second number?\n";
    cin >> Numbers[1];
    cout << "please enter the third number?\n";
    cin >> Numbers[2];
}

void  power_of_Numbers(int Numbers[3])
{
  
    cout << "first number = " << round(pow(Numbers[0], 2)) << endl;
    cout<<"second number = "<<round(pow(Numbers[1] ,3))<< endl;
    cout<<"third number =  "<< round(pow(Numbers[2], 4))<< endl;
}   

void Print_result(int Numbers[3])
{
    power_of_Numbers(Numbers);
}

int main()
{
    int Numbers[3];
    Read_Numbers(Numbers);
    Print_result(Numbers);
}

