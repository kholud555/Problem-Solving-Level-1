

#include <iostream>
# include <cmath>
using namespace std;
void Read_nums(float &a, float &b, float &c)
{
    cout << "please enter a?\n";
    cin >> a;
    cout << "please enter b?\n";
    cin >> b;
    cout << "please enter b?\n";
    cin >> c;
}

float area_circle(float a, float b, float c)
{
    const float PI = 3.141592653589793238462643383279502884197;
    float p;
     p = (a + b + c) / 2;

     float t;
      t= (a * b * c) / (4 * sqrt(p * (p - a)) * (p - b) * (p - c));
          
 float area= PI * pow(t , 2);

 return area;
}
void print_result(float area)
{
    cout << " area circle = " << area << endl;
}


int main()

{
    float a;
    float b;
    float c;
    Read_nums(a, b, c);
    print_result(area_circle(a, b, c));
}

