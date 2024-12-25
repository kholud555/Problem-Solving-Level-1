

#include <iostream>
# include<string>
using namespace std;
float Read_number( string Message)
{
    float Number = 0;
    cout << Message << endl;
    cin >> Number;

    return Number;
    
}
float sum_Numbers()
{
    int sum = 0, number = 0, counter = 1;
    do
    {
        number = Read_number("Please enter Number " + to_string(counter));
        if (number == -99)
        {
            break;
        }
        sum += number;
        counter++;

    } while (number != -99);
    return sum;
}

int main()
{
    cout << endl << "Result = " << sum_Numbers() << endl;
   
}

