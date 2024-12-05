

#include <iostream>
#include <string>
using namespace std;
struct strfull_name
{
    string first_name;
    string last_name;
};

strfull_name Read_info()
{
    strfull_name info;
    cout << "please enter your first name ?\n";
    getline(cin, info.first_name);
    cout << "please enter your second name?\n";
    getline(cin, info.last_name);

    return info;

    
}
string get_full_name(strfull_name info, bool Reverse)
{
    string full_name = " ";
    if (Reverse)
        full_name = info.last_name + " " + info.first_name;
    else

    full_name = info.first_name + " " + info.last_name;

    return full_name;
}
void print_full_name(string full_name)
{
    cout << "\n your full name is : " << full_name << endl;
}

int main()
{
    print_full_name(get_full_name(Read_info(),true));
}
