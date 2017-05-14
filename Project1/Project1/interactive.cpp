/*   Created  by rbh 08/01/15
*   Modified by rbh 11/01/16
*   Modified by nas 12/01/17
*/

#include <iostream>

#include "Rational.h"
#include <string>

using namespace std;

int main()
{

	cout << "Enter the left operand: ";
	Rational x;
	cin >> x;

	cout << "Enter the operator: ";
	string op;
	cin >> op;

	cout << "Enter the right operand: ";
	Rational y;
	cin >> y;

	Rational result;
	if (op == "+")
	{
		result = x + y;
	}
	else if (op == "-")
	{
		result = x - y;
	}
	else if (op == "*")
	{
		result = x * y;
	}
	else if (op == "/")
	{
		result = x / y;
	}
	else if (op == "abs")
	{
		result = x/y;
		Rational abs(result);
	}
	else if (op == "negate")
	{
		result = x / y;
		Rational negate(result);
	}
	else
	{
		cout << "Unrecognised operator" << endl;
		return 1;
	}
	cout << result << endl;

	system("Pause");

	return 0;

}
