// This file is about math calculation in C++
#include <iostream>
using namespace std;

void showCalculationInteger(){
	cout << "This file will introduce some basic calculation.\n";
	cout << "This is 2 + 4, and result is " << 2 + 4 << endl;
	cout << "This is 2 - 4, and result is " << 2 -4 << endl;
	cout << "This is 2 * 4, and result is " << 2 * 4 << endl;
	cout << "This is 2 / 4, and result is " << 2/4 << endl;//Guess what will happen
	cout << "This ia 4 / 2, and result is " << 4/2 << endl;
	cout << "Can you see any different between two division above? \n";
	// This is because when we do the "/" division with most of programming languages 
	// computer always ingores the demical part of the result.
	// Eg: 2/4 = 0.5 , the computer will only show 0, .5 will be ignored by computers
	//     7/2 = 3.5, the computer will only show 3, .5 will be ignored by computers
	cout << "----------------------------------------------------- \n";
	cout << "This is 2 % 4 and the result is " << 2 % 4 << endl ;
	cout << "This is 6 % 3  and the result is " << 6 % 3 << endl ;
	cout << "This is 7 % 6 and the result is " << 7 % 6 << endl ;
	// This mark '%' means remainder.
	// % only can be used in integer not float or double.
}
void showCalculationFloat(){
	cout << "What if we want a demical result? \n";
	float temp1;
	float temp2;
	cout << "Enter your first number: \n";
	cin >> temp1;
	cout << "Enter your second number: \n";
	cin >> temp2;
	cout << "--------------------------- \n";
	cout << temp1 << " +  " << temp2 << " = " << temp1 + temp2 << endl;
	cout << temp1 << " -  " << temp2 << " = " << temp1 - temp2 << endl;
	cout << temp1 << " *  " << temp2 << " = " << temp1 * temp2 << endl;
	cout << temp1 << " /  " << temp2 << " = " << temp1 / temp2 << endl;
	cout << "What will happen if you type two interger numbers?  Restart and try it \n";
	// Because we have already defined temp1 and temp2 as the float.



}
int main(){
	showCalculationInteger();
	showCalculationFloat();
	return 1;
}