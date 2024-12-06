
#include <iostream>
using namespace std;
void Read_numbers(int &num1, int &num2)
{
    cout << "please enter first namber  ?\n";
    cin >> num1;
    cout << "please enter second namber ?\n";
    cin >> num2;
}
int Maxof2numbers(int num1, int num2)
{
    if (num1 > num2)
        return num1;
    else
        return num2;
}
void print_max_num( int max_number)
{

    cout << "the Max number is " << max_number << endl;
}

int main()
{
    int num1, num2;
    Read_numbers(num1, num2);
    print_max_num(Maxof2numbers(num1, num2));
}

