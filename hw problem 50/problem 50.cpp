

#include <iostream>
using namespace std;
string Read_pin_code()
{
    string pincode;
    cout << "please enter PIN code\n";
    cin >> pincode;
    return pincode;
}
bool login()
{
    string pincode;
    int counter = 3;
    do
    {
        counter--;
        pincode = Read_pin_code();
        
        if (pincode == "1234")
        {
                return 1;
        }
        else
        {
            cout << "\n wrong PIN" << "you have "<< counter <<" more tries\n";
            system("color 4f");
        }


    } while (counter >=1 && pincode != "1234");
    return 0;
}

int main()
{
    if (login())
    {
        system("color 2f");
        cout << "Your account balance is" << 7500 << endl;
    }
    else
    {
        cout << "The account blocked call bank to help.";
    }

}

