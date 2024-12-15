

#include <iostream>
using namespace std;
int Read_Power()
{
    int M;
  do
  {
      cout << " please enter the power\n";
      cin >> M;
  } while (M < 0);
    return M;
}
int Read_Number()
{
    int number;
    do
    {
        cout << " please enter the number \n";
        cin >> number;
    } while (number < 0);
   
    return number;
}

int loop_for_M(int Num,int M)
{
    if (M == 0)
    {
        return 1;
    }

    int p = 1;
    for (int counter = 1; counter <= M; ++counter)
    {
        p *= Num;

    }
    
    return p;
}

int main()
{
    cout << endl << "Result"<<loop_for_M(Read_Number(), Read_Power());
   

    
    /*cout << "\n----------------------\n";

    int os, number ,count = 1, calculation = 1;
    cout << " please enter integer  os \n";
    cin >> os;
    cout << " please enter integer number\n";
    cin >> number;


    while (os < 0 && number < 0)
    {
        cout << "wrong number ";
        cout << "please enter a intager m ?" << endl;
        cin >> os;
        cout << "please enter a intager number ?" << endl;
        cin >> number;
    }


    while (count <= os)
    {
        calculation *= number;
        count++;
    }

    cout << calculation  << endl;*/
}

