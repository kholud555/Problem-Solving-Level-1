

#include <iostream>
#include <cmath>
using namespace std;
struct strTask_duration
{
    int days, hours, minutes, seconds;
};
int Read_positive_number(string Message)
{
    int Number = 0;
    do
    {
        cout << Message;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}
strTask_duration Read_task_duration()
{
    strTask_duration task_duration;
    task_duration.days = Read_positive_number("please enter number of days:");
    task_duration.hours = Read_positive_number("please enter number of hours :");
    task_duration.minutes = Read_positive_number("please enter number of minutes :");
    task_duration.seconds = Read_positive_number("please enter number of seconds : ");

    return task_duration;
}
int Task_duration_in_seconds(strTask_duration task_duration)
{
    int DurationInseconds = 0;
    DurationInseconds = task_duration.days * 24 * 60 * 60;
    DurationInseconds += task_duration.hours * 60 * 60;
    DurationInseconds += task_duration.minutes * 60;
    DurationInseconds += task_duration.seconds;

    return DurationInseconds;
}


int main()
{
    cout << "Task duration = " << Task_duration_in_seconds(Read_task_duration()) << endl;
}

