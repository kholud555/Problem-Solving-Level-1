
#include <iostream>
#include <cmath>
using namespace std;
enum enPrimeNotPrime { Prime =1 , Notprime = 2};
float Read_Numbers(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}
enPrimeNotPrime check_prime(int Number)
{
    int M = round(Number / 2);
    for (int counter = 2; counter <= M; counter++)
    {
        if (M % counter == 0)
            return enPrimeNotPrime::Notprime;
    }
    return enPrimeNotPrime::Prime;
}
void Print_Number_type(int Number)
{
    switch (check_prime(Number))
    {
    case enPrimeNotPrime::Prime:
        cout << "The number is prime \n";
        break;
    case enPrimeNotPrime::Notprime:
        cout << "The number isn't prime\n";
        break;
    }
}


int main()
{
    Print_Number_type(Read_Numbers("Please enter Positive number \n"));
}

