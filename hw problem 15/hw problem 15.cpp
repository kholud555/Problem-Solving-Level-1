
#include <iostream>
using namespace std;
void Read_numbers( int &a , int &b)
{
    cout << "please enter a ?\n";
    cin >> a;
    cout << "please enter  b ?\n";
    cin >> b;
}
int  calculate_rectangle_area(int a, int b)
{
    return a * b;
}
void print_rectangle_area(int area)
{
    cout << "  rectangle area = " << area << endl;
}


int main()
{
     int a, b;
    
    Read_numbers(a, b);
    print_rectangle_area(calculate_rectangle_area(a, b));
}

