

#include <iostream>
using namespace std;
int Read_number_in_range(int from ,int to)
{
    int grade;
    do
    {
        cout << "please enter your grade from 0 to 100 ?\n";
        cin >> grade;
    } while (grade < from || grade > to);

    return grade;
}
char Get_Grade_letter(int grade)
{
    if (grade >= 90)
    
        return 'A';
    
    else if (grade >= 80)
    
        return 'B';

    else if (grade >= 70)
    
        return 'C';
    
    else if (grade >= 60)
    
        return 'D';

    
    else if (grade >= 50)
    
        return 'E';
    
    else
    
        return 'f';
    
}

int main()
{
    cout << endl << "Result = " << Get_Grade_letter(Read_number_in_range(0, 100)) << endl;
    

   
}

