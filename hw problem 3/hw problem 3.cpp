

#include <iostream>
using namespace std;
enum enNum_type { odd = 1 , even = 2 };

int Read_num()
{
    int num;
    cout << "please enter a number :" << endl;
    cin >> num;
    return num;
}
enNum_type check_num_type(int num)
{
    int the_Result = num % 2;
    if (the_Result == 0)
        return enNum_type::even;
    else
        return enNum_type::odd;

}
void print_num_type(enNum_type Number_type)
{
    if (Number_type == enNum_type::even)
        cout << "\n Number is even .\n";
    else
        cout << " \n Number is odd .\n";
}

int main()
{
    print_num_type(check_num_type(Read_num()));
}
