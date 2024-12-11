

#include <iostream>
using namespace std;
enum enOddOrEven { odd = 1, even = 2 };
int Read_N()
{
    int N;
    cout << " please enter N \n";
    cin >> N;
    return N;
}
enOddOrEven checkOddOrEven(int N)
{
    if (N % 2 != 0)
        return enOddOrEven::odd;
    else
        return enOddOrEven::even;
}
int sum_range_from_1_to_N_using_for(int N)
{
    cout << "Range printed using for statment : ";
    int sum = 0;
    for (int counter = 1; counter <= N; counter++)
    {
        if( checkOddOrEven(counter)== enOddOrEven::odd)
       
            sum += counter;
   
    }
    return sum;
}
int  sum_range_from_1_to_N_using_do_while(int N)
{
    int counter = 0;
    int sum = 0;
    cout << "Range printed using Do.. while statment : ";
    do {
        counter++;

        if( checkOddOrEven(counter)== enOddOrEven::odd)
       
            sum += counter;
   
    } while (counter < N);
    return sum;
}
int sum_range_from_1_to_N_using_while(int N)
{
    cout << "Range printed using while statment : ";
    int count = 0;
    int while_sum = 0;
    
    while (count < N)
    {
        
        count++;
        if (checkOddOrEven(count)==enOddOrEven::odd)
        {
            while_sum += count;

        }
        
      
    }
    return  while_sum;
}

int main()
{
    int N = Read_N();
    cout << sum_range_from_1_to_N_using_do_while(N) << endl;
    cout << sum_range_from_1_to_N_using_for(N) << endl;
    cout << sum_range_from_1_to_N_using_while(N) << endl;
}

