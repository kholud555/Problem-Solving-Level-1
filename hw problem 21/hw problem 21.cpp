

#include <iostream>
#include <cmath>
using namespace std;
float Read_circumference()
{
    float l;
    cout << "please enter the first number?\n";
    cin >> l;
    return l;
}

float circle_area(float L)
{
    const float PI = 3.141592653589793238462643383279502884197;
    float area = pow(L, 2) / (PI * 4);
    return area;
}
void print_result(float area)
{
    cout << " circle area  = " << area << endl;
}
int main()
{
    print_result(circle_area(Read_circumference()));
 
}
