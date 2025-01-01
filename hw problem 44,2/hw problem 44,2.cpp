
#include <iostream>
using namespace std;
enum enDayofweek{ sat = 1, sun = 2, mon = 3, tues = 4, wed = 5, thurs = 6, fri = 7 };
int Read_Number_in_Range(string Message, int from, int to)
{
    int Number;
    do 
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number < from || Number > to);
    return Number;
}
enDayofweek Read_day_of_week()
{
    return (enDayofweek)Read_Number_in_Range("please enter day number sat1,sun2, mon3, tues4, wed5, thurs6,fri7", 1, 7);
}
string Get_Number_of_day(enDayofweek Day)
{
    switch (Day)
    {
    case enDayofweek::sat:
        return "It is saturday.";
    case enDayofweek::sun:
        return "It is sunday.";
    case enDayofweek::mon:
        return "It is Monday.";
    case enDayofweek::tues:
        return "It is tuesday.";
    case enDayofweek::wed:
        return "It is wednesday.";
    case enDayofweek::thurs:
        return "It is thursday.";
    case enDayofweek::fri:
        return "It is friday.";
    default:
        return "It is not vaild number";
    }
}
int main()
{
    cout << Get_Number_of_day(Read_day_of_week()) << endl;
}

