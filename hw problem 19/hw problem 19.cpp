

#include <iostream>
using namespace std;
float Read_diameter()
{
    float  D;
    cout << "please enter radious D ?\n ";
    cin >> D;
    return D; 
}
float circle_area(float D)
{
    const float PI = 3.141592653589793238462643383279502884197;
    float area = (PI * pow(D, 2)) / 4;
    return area;
}
void print_result(float area)
{
    cout << "circle area = " << area << endl;
}

int main()
{

   
    print_result(circle_area(Read_diameter()));
}

