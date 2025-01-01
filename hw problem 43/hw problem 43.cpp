
#include <cmath> 
#include <iostream>
using namespace std;
struct strtaskduration
{
    int Number_of_days, Number_of_hours,Number_of_minutes ,Number_of_seconds;
};
int read_positive_Number(string Message)
{
    int Number;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}
strtaskduration seconds_to_task_duration(int Total_seconds)
{
    strtaskduration task_duration;
    const int secondsperday = 24 * 60 * 60;
    const int secondsperhours = 60 * 60;
    const int secondsperminutes = 60;

    int Remainder = 0;
    task_duration.Number_of_days = floor (Total_seconds / secondsperday);
     Remainder = (Total_seconds % secondsperday);
    task_duration.Number_of_hours = floor(Remainder / secondsperhours);
     Remainder = (Remainder % secondsperhours);
    task_duration.Number_of_minutes = floor(Remainder / secondsperminutes);
     Remainder = Remainder % secondsperminutes;
    task_duration.Number_of_seconds = floor(Remainder);
    return task_duration;
}
void Print_Resutl(strtaskduration task_duration)
{
    cout << task_duration.Number_of_days << "days ::";
    cout << task_duration.Number_of_hours << "hours ::";
    cout << task_duration.Number_of_minutes << "minutes ::";
    cout << task_duration.Number_of_seconds << "seconds.";
}

int main()
{
    int Total_seconds = read_positive_Number("please enter number of seconds :");
    Print_Resutl(seconds_to_task_duration(Total_seconds));
}

