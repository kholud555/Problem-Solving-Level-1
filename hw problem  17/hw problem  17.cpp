

#include <iostream>
using namespace std;
void Read_numbers(float & a, float & h)
{
    cout << "please enter a  ?\n";
    cin >> a;
    cout << "please enter h ?\n";
    cin >> h;
}
float calculate_triangle_area(float a, float h)
{
    return  a / 2 * h;
}
void print_result(float result)
{
    cout << "Triangle area = " << result << endl;
}
int main()
{
    float a, h;
    Read_numbers(a, h);
    print_result(calculate_triangle_area(a, h));
}

