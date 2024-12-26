

#include <iostream>
using namespace std;
float Read_positive_number(string Message)
{
    int Number;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
 }
float calculate_bill_remaider(float totalbill, float cashpaid)
{
    return cashpaid  - totalbill;
}

int main()
{
    float totalbill = Read_positive_number("please enter totalbill :");
    float cashpaid = Read_positive_number("please enter cashpaid:");
   
    cout << endl;
    cout << "Total bill = " << totalbill << endl;
    cout << " Total cash bill = " << cashpaid << endl;

    cout << "****************************\n";
    cout << "Remaider = " << calculate_bill_remaider(totalbill, cashpaid) << endl;

   
    
   
}

