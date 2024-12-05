

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
void print_the_sum( int sum)
{
    cout << "The result of sum is = " << sum << endl;
}

int main()
{
    int num1, num2, num3;

    Read_numbers(num1, num2, num3);
    print_the_sum(sum0f3Numbers(num1, num2, num3));
    
}

