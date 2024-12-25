

#include <iostream>
using namespace std;
enum enoperator_type { addation ='+', substraction = '-', Multiplication = '*', division = '/' };
float Read_numbers(string message)
{
	float Num = 0;
	cout << message << endl;
	cin >> Num;
	return Num;
}
enoperator_type read_operator_type()
 {
	char OT = '+';
	cout << "Please enter operation type (+ ,- ,* ,/) ?\n";
	cin >> OT;
	
   return (enoperator_type)OT;
}
float calculation_with_operator( float Num1, float Num2  ,enoperator_type optype)
{
	switch (optype)
	{
	case enoperator_type::addation:
		return  (Num1 + Num2);
	case enoperator_type::substraction:
		return abs(Num1 - Num2) ;
	case enoperator_type::Multiplication:
		return (Num1 * Num2);
	case enoperator_type::division:
		return (Num1 / Num2);
	defualt:
		return (Num1 + Num2);
	}
}

int main()
{
	float Num1 = Read_numbers("Please enter the first number ? ");
	float Num2 = Read_numbers("Please enter the second number ?");
	enoperator_type optype = read_operator_type();
	cout << endl << "Result = " << calculation_with_operator(Num1, Num2, optype) << endl;


}

