



#include <iostream>
using namespace std;
enum enweekday{sunday = 1 , monday = 2,tuesday = 3, wednesday = 4, thursday = 5,friday = 6,saturday = 7};
void show_weekdays_menue()
{
    cout << "****************************************\n";
    cout << "                   week days             \n";
    cout << "****************************************\n";
    cout << "please enter the number of your day?\n";
    cout << "(1) sunday\n";
    cout << "(2)monday\n";
    cout << "(3) tuesday\n";
    cout << "(4) wednesday\n";
    cout << "(5) thurday\n";
    cout << "(6) friday\n";
    cout << "(7) saturday\n";
    cout << "****************************************\n";
    cout << "your choice?\n";
}
enweekday read_weekday()
{
    int number_of_day;
    cin >> number_of_day;
    return(enweekday)number_of_day;
}
string match_num_with_day(enweekday particular_num)
{
   switch (particular_num)
    {
    case enweekday::sunday:
        return "sun";
        break;
    case enweekday::monday:
        return "mon";
        break;
    case enweekday::tuesday:
        return "tues";
        break;
    case enweekday ::wednesday:
        return "wed";
        break;
        case enweekday ::thursday:
        return "thurs";
        break;
        case enweekday::friday:
        return "fri";
        break;
        case enweekday ::saturday:
        return "sat";
        break;
    default:
        return "Not a day";


    }
}
int main()
{
    show_weekdays_menue();
   
    cout << "today is " << match_num_with_day(read_weekday()) << endl;
}

