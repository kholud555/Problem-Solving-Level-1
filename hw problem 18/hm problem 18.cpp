

#include <iostream>
#include <cmath>
using namespace std;

int circle_area(int R)
{
    const float PI = 3.14;
    return PI * ceil(pow(R, 2));
}


int main()
{
     int R;
    cout << "please enter R ?\n ";
    cin >> R;
   
    cout << "Area = " << circle_area(R) <<  endl;
}

