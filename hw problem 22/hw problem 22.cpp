

#include <iostream>
#include <cmath>
using namespace std;
void  Read_triangle_data(float &a, float  &b)
{
    cout << "please enter the first number?\n";
    cin >> a;
    cout << "please enter the second number?\n";
    cin >> b;

}
float circle_area_by_triangle(float a, float b)
{
   const float PI = 3.141592653589793238462643383279502884197;
 float area =((PI * pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b)));
 return area;
}
void print_result(float area)
{
    cout << "circle area inscribed = " << area << endl;
        
}

int main()
{
    float a, b;
    Read_triangle_data (a, b);
    print_result(circle_area_by_triangle(a, b));

   

    
}

