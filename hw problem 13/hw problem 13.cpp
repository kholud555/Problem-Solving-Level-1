
#include <iostream>
using namespace std;
void Read_numbers(int &A, int &B, int &C )
{
    cout << "please enter  namber A ?\n";
    cin >> A;
    cout << "please enter  namber B ?\n";
    cin >> B;
    cout << "please enter namber C ?\n";
    cin >> C;
}
int Maxof3numbers(int A, int B,int C)
{
    if (A > B)
        if (A > C)
            return A;
        else C;

    else
        if (B > C)
            return B;
        else
            return C;

    

}
void print_max_num(int max_number)
{

    cout << "the Max number is " << max_number << endl;
}

int main()
{
    int A, B ,C;
    Read_numbers(A, B ,C);
    print_max_num(Maxof3numbers(A, B, C));
}
