

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
float Total_month(float loanamount, float howmanymonths)
{
    return (float)loanamount / howmanymonths;
}

int main()
{
    float loanamount = Read_positive_Number("please enter loan amount ?");
    float howmanymonths = Read_positive_Number("please enter How many months?");
    


   

    cout << " months  installment = " << Total_month (loanamount, howmanymonths) << endl;
}

