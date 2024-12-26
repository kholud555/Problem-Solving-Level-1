

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
float TotalBillAfterserviceAndTax(float Totalbill)
{
    Totalbill = Totalbill * 1.1;
    Totalbill = Totalbill * 1.16;
    return Totalbill;
}
int main()
{
    float Totalbill = Read_positive_Number("please enter bill value");
     
    cout << endl;
    cout << "Total Bill = " << Totalbill << endl;
    cout << " Total Bill after service fee and sales tax = "
        << TotalBillAfterserviceAndTax(Totalbill) << endl;
}

