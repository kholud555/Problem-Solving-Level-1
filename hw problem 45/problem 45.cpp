

#include <iostream>
using namespace std;
enum enmounths{january = 1, febrauary = 2, march = 3,april = 4, may = 5, june = 6,july = 7, augest = 8, spetamber = 9, october = 10, novmber = 11, december = 12};
void show_mounth_menu()
{
    cout << "****************************************\n";
    cout << "        mounths of the year             \n";
    cout << "****************************************\n";
    cout << "please enter the number of your mounth?\n";
    cout << "(1) january\n";
    cout << "(2)febraury\n";
    cout << "(3) march\n";
    cout << "(4) april\n";
    cout << "(5) may\n";
    cout << "(6) june\n";
    cout << "(7) july\n";
    cout << "(8) augest\n";
    cout << "(9)septmber\n";
    cout << "(10)october \n";
    cout << "(11) november\n";
    cout << "(12) december\n";
    cout << "****************************************\n";
    cout << "your choice?\n";
}
enmounths read_the_mounth()
{
    int mounth;
    cin >> mounth;
    return (enmounths)mounth;
}
string match_mounth_with_num(enmounths particular_mounth)
{
    switch (particular_mounth)
    {
    case enmounths::january:
       return "january";
        break;
    case enmounths::febrauary:
        return "february";
        break;
    case enmounths::march:
        return "march";
        break;
    case enmounths::april:
        return "april";
        break;
    case enmounths::may:
        return "may";
        break;
    case enmounths::june: 
        return"june";
        break;
    case enmounths::july:
        return "july";
        break;
    case enmounths::augest:
        return "augest";
        break;
    case enmounths::spetamber:
        return "septmber";
        break;
    case enmounths::october:
        return "october";
        break;
    case enmounths::novmber:
        return "november";
        break;
    case enmounths::december:
       return "december";
        break;
    default:
        return "Not a mounth";
    }
}
int main()
{
    show_mounth_menu();
    cout << "the mounth is " << match_mounth_with_num(read_the_mounth()) << endl;
    

   
   
   

}

