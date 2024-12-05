

#include <iostream>
using namespace std;
enum enpassFail { pass = 1 , fail = 2 };
int Read_Mark()
{
    int Mark;
    cout << " please enter your mark?" << endl;
    cin >> Mark;
    return Mark;
   
}
enpassFail check_Mark(int Mark)
{
    if (Mark >= 50)
        return enpassFail::pass;
    else
        return enpassFail::fail;
}
void print_result(int Mark)
{
    if (check_Mark(Mark) == enpassFail::pass)
        cout << "\n You passed" << endl;
    else
        cout << "\n You faild" << endl;
}
int main()
{
    print_result(Read_Mark());
}

