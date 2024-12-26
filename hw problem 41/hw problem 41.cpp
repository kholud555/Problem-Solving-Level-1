
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
float HoursToDays(float Number_of_hours)
{
    return (float)Number_of_hours / 24;
}
float HoursToWeek(float Number_of_hours)
{
    return (float) Number_of_hours/24  / 7;
}
float DaysToweeks(float Number_of_days)
{
    return (float)Number_of_days  / 7;
}
int main()
{
    float Number_of_hours = Read_positive_Number("please enter number of hours:");
    float Number_of_days = HoursToDays(Number_of_hours);
    float Number_of_weeks = DaysToweeks(Number_of_days);

    cout << endl;
    cout << "Total Hours = " << Number_of_hours << endl;
    cout << "Total Days = " << Number_of_days << endl;
    cout << "Total weeks =" << HoursToWeek(Number_of_hours) << endl;
}
