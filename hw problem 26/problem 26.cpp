

#include <iostream>
using namespace std;
int Read_N()
{
    int N;
    cout << "please enter Number : ";
    cin >> N;
    return N;
}
void print_range_from_1_to_N_using_while(int N)
{
    cout << "Range printed using while statment:" << endl;
    int w = 0;
    while (w < N)
    {
        w++;
        cout << w << endl;
       
    }
}
void print_range_from_1_to_N_using_do_while(int N)
{
    int counter = 0;
    cout << "Range printed using Do.. while statment : \n";
    do {
        counter++;
        cout << counter << endl;
    } while (counter < N);
    
}
void print_range_from_1_to_N_using_for(int N)
{
    cout << "Range printed using for statment :\n";
    for (int counter = 1; counter <= N; ++counter)
    {
        cout << counter << endl;
    }
}
int main()
{
    int N = Read_N();
    print_range_from_1_to_N_using_do_while(N);
    print_range_from_1_to_N_using_for(N);
    print_range_from_1_to_N_using_while(N);
    
}

