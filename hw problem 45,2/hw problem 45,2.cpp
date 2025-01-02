

#include <iostream>
using namespace std;
enum enmounths { january = 1, febrauary = 2, march = 3, april = 4,
                 may = 5, june = 6, july = 7, augest = 8, spetamber = 9,
                 october = 10, novmber = 11, december = 12 };
int Read_Number_in_range(string Message, int from, int to)
{
    int Number;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number < from || Number > to);
    return Number; 
}
enmounths Read_Number_of_mounth()
{
    return (enmounths)Read_Number_in_range("please enter number of mounth 1 to 12", 1, 12);
}
string Get_Number_of_mounth(enmounths mounth)
{
    switch (mounth)
    {
    case enmounths::january:
        return "january";
    case enmounths::febrauary:
        return "february";
    case enmounths::march:
        return "march";
    case enmounths::april:
        return "april";
    case enmounths::may:
        return "may";
    case enmounths::june:
        return"june";
    case enmounths::july:
        return "july";
    case enmounths::augest:
        return "augest";
    case enmounths::spetamber:
        return "septmber";
    case enmounths::october:
        return "october";
    case enmounths::novmber:
        return "november";
    case enmounths::december:
        return "december";
    default:
        return "Not a mounth";
    }
}
int main()
{
    cout << Get_Number_of_mounth(Read_Number_of_mounth()) << endl;
}

