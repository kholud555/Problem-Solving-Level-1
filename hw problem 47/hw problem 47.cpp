

#include <iostream>
using namespace std;
float Read_positive_Number(string Message)
{
    float Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}
float Total_month(float loanamount, float monthlypayment)
{
    return (float)loanamount / monthlypayment;
}

int main()
{
    float loanamount = Read_positive_Number("please enter loan amount ? \n");
    float monthlypayment = Read_positive_Number("please enter monthly payment ? \n");
;

    cout << "Total months to pay  = " << Total_month(loanamount,monthlypayment)  << endl;
}

