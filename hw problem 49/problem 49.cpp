

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
    do
    {
        pincode = Read_pin_code();
        if (pincode == "1234")
        {
            return 1; //this will exit the function and return 1.
        }
        else
        {
            cout << "\n wrong PIN\n";
            system("color 4f"); //turn screen to Red.
        }
    } while (pincode != "1234");

    return 0;

}

int main()
{
    if (login())
    {
        system("color 2f"); //turn screen to green.
        cout << "Your account balance is" <<  7500 << endl;
    };
   

}

