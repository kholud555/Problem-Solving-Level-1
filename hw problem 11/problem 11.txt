
#include <iostream>
using namespace std;
enum enpass_fail { pass = 1 , fail = 2 };

void Read_numbers(int& num1, int& num2, int& num3)
{
    cout << "please enter first namber  ?\n";
    cin >> num1;
    cout << "please enter second namber ?\n";
    cin >> num2;
    cout << "please enter third namber ?\n";
    cin >> num3;
}
int sum0f3Numbers(int num1, int num2, int num3)
{

    return  num1 + num2 + num3;
}
float average_ofNumbers(int num1, int num2, int num3)
{

    return  (float)sum0f3Numbers(num1, num2, num3) / 3;
}
enpass_fail check_average(float average)
{
    if (average >= 50)
        return enpass_fail::pass ;
    else
        return enpass_fail::fail;
}
void print_the_sum( float average )
{
    cout << "your average is = " << average << endl;

    if (check_average(average) == enpass_fail::pass)
        cout << "you passed.\n";
    else
        cout << "you failed.\n";

    cout << "\nBest regards\n";
}

int main()
{
    int num1, num2, num3;

    Read_numbers(num1, num2, num3);
    print_the_sum(average_ofNumbers(num1, num2, num3));

    
    
    
}

