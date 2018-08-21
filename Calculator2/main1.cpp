#include <iostream>
#include <stdint.h>
#include <math.h> 
#include <string>
using std::getline;

#include "calculator2.h"

using namespace std;

int main()
{
	Calculator myCal1;
	float num,result;
	string op;

	while (true) {

		cout << "Enter first_num = ";
		cin >> num;
		myCal1.setNum1(num);

		cout << "Operator = ";
		//getline(cin, op);
		cin >> op;
		myCal1.setOp(op);

		while ((op != "+") && (op != "-") && (op != "*") && (op != "/") && (op != "^"))
		{
			cout << "Please choose operator again" << endl;
			cout << "Operator = ";
			cin >> op;
			myCal1.setOp(op);
			//getline(cin, op);
		} 

		cout << "Enter Second_num = ";
		cin >> num;
		myCal1.setNum2(num);

		result = myCal1.calculate();
		cout << "Ans = " << result << endl;
	}
	return(0);
}