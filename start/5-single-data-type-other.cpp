
/*
This file is about other important data type and some useful symbol
Including the bool float and symbol const 

*/
#include <iostream>
using namespace std;
/*
There are only two values for bool type : true and false
In C++, the computer will explain all the non-zero value for true, zero for false;
*/
void boolType() {
	cout << "in C++, we can not see the true and false directly in the output." <<endl;
	bool temp1 = true;
	bool temp2 = false;
	cout << "This is the first value of bool which is " << temp1 <<endl;
	cout << "This is the second value of bool which is " << temp2 <<"\n";
	cout << "------------------------------------------------\n";
	cout << "Let's try with number value for bool \n";
	int test1 = temp1;// The default value for true is 1;
	int test2  =  temp2;
	cout << "We now see the " << temp1 << " which is " << test1 << endl;
	cout << "We now see the " << temp2 << " which is " << test2 << endl;
	cout << "------------------------------------------------\n";
	bool new_temp1 = 100;
	bool new_temp2 = -89;
	bool new_temp3 = 0 ;
	cout << "We now see the 100 for bool which is " << new_temp1 << endl;
	cout << "We now see the -89 for bool which is " << new_temp2 << endl;
	cout << "We now see the 0 for bool which is " << new_temp3 << endl;

} 

void constWay(){
	cout << "Qualifiers are usually in the front of the type name, so it will be: \n";
	cout << " qualifier type variable_name = value \n" ; 
	cout << "const means decided, you cannot change the value of it any more except when you initialize it \n";
	const int test = 10;// const works for every data type not only int.
	// test = 98; 
	cout << "The test value is " << test << endl;
}

void floatType(){
	cout << "float means demicals, int is only the integer. \n";
	cout << "Two ways to express float. \n";
	cout << "1: just write down the number  " << 1.896 << endl; 
	cout << "2: Using e to express the numbers, for example "<< endl;
	cout << "8.16e+3 means that 8.16 times 1000,e means 10,the number after e means how many 10 you need \n"; 
	cout << "8.16e+3 is " << 8.16e+3 << endl;
	cout << "8.16e3 is " << 8.16e3 << endl;
	cout << "We can see that the + mark after e can be ignored \n";
	cout << "8.16E3 is " << 8.16E3 << endl;
	cout << "We can see that there is no difference between using e and E  \n";
	cout << "8.16e-3 is " << 8.16e-3 << endl;
	cout << "We can see that e- means division, that is 8.16 /1000. \n";
	cout << "-8.16E3 is "<< -8.16E3 <<endl;
	cout << "Sometimes you can see  -8.16E3f or -8.16E3F, it means float \n";



}

int main () {
	//boolType();
	//onstWay();
	floatType();
	return 1;
}