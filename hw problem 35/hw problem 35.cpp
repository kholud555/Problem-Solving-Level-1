

#include <iostream>
using namespace std;
struct strpeggy_bank_contenet
{
    int  penny, nickel ,dime ,quarter ,dollar;

};
strpeggy_bank_contenet Read_piggy_bank_content()
{
    strpeggy_bank_contenet PiggyBankContent;
    cout << "please enter pennie?\n";
    cin >> PiggyBankContent.penny;
    cout << "please enter nickel?\n";
    cin >> PiggyBankContent.nickel;
    cout << "please enter dime ?\n";
    cin >> PiggyBankContent.dime;
    cout << "please enter quarter ?\n";
    cin >> PiggyBankContent.quarter;
    cout << "please enter dollar ?\n";
    cin >> PiggyBankContent.dollar;

    return PiggyBankContent;
}
int calculate_total_pennies(strpeggy_bank_contenet PiggyBankContent)
{
    int total_pennies = 0;
     return total_pennies = PiggyBankContent.penny * 1 + PiggyBankContent.nickel * 5 + 
        PiggyBankContent.dime * 10 + PiggyBankContent.quarter * 25 + 
        PiggyBankContent.dollar * 100;
}

int main()
{
    int total_pennies = calculate_total_pennies(Read_piggy_bank_content());
    cout << endl << "Total pennies = " << total_pennies << endl;
    cout << endl << "Total Dollars = " << (float)total_pennies / 100 << endl;


    

   
}

