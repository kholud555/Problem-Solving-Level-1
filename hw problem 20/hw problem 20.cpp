

#include <iostream>
#include <cmath>
using namespace std;

float Read_square_side()
{
   float A;

    cout << "please enter square side A ?\n";
    cin >> A;

    return A;
}

float circle_area_inscribed_in_square(float A)
{
    const float PI = 3.141592653589793238462643383279502884197;
    float area= (PI * pow(A, 2) / 4);
    return area;
}
void print_result(float area)
{
    cout << "Area inscribed = " << area << endl;
}
    

int main()
{
    print_result(circle_area_inscribed_in_square(Read_square_side()));
    

  
}

