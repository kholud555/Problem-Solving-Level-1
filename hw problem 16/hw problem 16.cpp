// hw problem 16.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void Read_Numbers(float & a, float & d)
{
    cout << "please enter A ?\n";
    cin >> a;
    cout << "please enter  D ?\n";
    cin >> d;
}
float calculate_rectangle_area_by_side_and_diogonal(float a, float d)
{
    float Area = a * sqrt(pow(d, 2) - pow(a, 2));
    return Area;
    
}
void print_result(float  area)
{
    cout << " Area = " << area << endl;
}

int main()
{
    float a, d;
    Read_Numbers(a,  d);
    print_result(calculate_rectangle_area_by_side_and_diogonal(a, d));
  
}

