

#include <iostream>
using namespace std;

void Read_numbers(int& num1, int& num2, int& num3)
{
    cout << "please enter first name ?\n";
    cin >> num1;
    cout << "please enter second name ?\n";
    cin >> num2;
    cout << "please enter third name ?\n";
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
void print_the_sum(float average)
{
    cout << "The result of sum is = " << average << endl;
}

int main()
{
    int num1, num2, num3;

    Read_numbers(num1, num2, num3);
    print_the_sum(average_ofNumbers(num1, num2, num3));
}

