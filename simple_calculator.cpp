#include <iostream>
using namespace std;

int main()
{
	char op;
	float number1, number2;
	cin >> op;
	cin >> number1 >> number2;
	switch (op)
	{	
        case '+':
			cout << number1 + number2;
			break;
		case '-':
			cout << number1 - number2;
			break;
		case '*':
			cout << number1 * number2;
			break;
		case '/':
			cout << number1 / number2;
			break;
		default:
			cout << "Error! this operator is not declarer";
			
	}
	return 0;
}
