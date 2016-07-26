/*This file is about the function
Function is about the how you want to do the with coding. 
For example, you want to do addition with 5 and 6. First you need to type "5"
then "+" ,last "6".Assume the computer knows what you type, so How can computer do 
addition? Here is your coding
*/
//-------------------------------------------------------
/*
There are two types of the functions.
1 The function with the return value 
2 The function without the return value
The functions you have seen previously are the functions with return value.
*/
// --------------------------------------------------------
#include <iostream>
using namespace std;
int doAdd(int n1,int n2){// Type 1, function with return value 
	cout << "Show the number you want to add" << endl;
	cout << "The first number is "<< n1 << endl;
	cout << "The second number is " << n2 << endl;
	int result = n1 + n2;   // Do add here, remember, before you create
                           // a variable,you must declare what type it is 
	                       // Is it "int" or something else? 
	cout << "The result is " << result << endl;
	return result;
}
//------------------------------------------------------
void doMultiplication(int n1,int n2){// Type 2 , function without return value 
	cout << "Show the number you want to multiple" << endl;
	cout << "The first number is "<< n1 << endl;
	cout << "The second number is " << n2 << endl;
	int result = n1 * n2;
	cout << "The result is " << result << endl;
	// We end here, because we do not set any return value, so we do not 
	// need to write any "return ......"
}

int main(){// Please see the difference how we use "doAdd" and "doMultiplication"
	int a = 5;
	int b = 6;
	cout << "DO addition here-----------------------" << endl;
	int check = doAdd(a,b);// Because we set a return value for doAdd, so we can
	                       // create a variable to store the result.
	cout << "Second addition -------------------------------------" << endl;
	doAdd(a,b);            // Also we can also only do the function here without
	                       // storing the result.
	//------------------------------------------------------------------------
	cout << "DO multiplication here---------------------------" << endl;
	doMultiplication(a,b);
	//int wrong = doMultiplication(a,b);
	// Alert here, we do not set any return value for this function, so we cannot
	// use "int wrong = doMultiplication(a,b);" here, you can try with this 
	return 0;
}
//The format of a function 
/*
type  function-name(arguments){
	statements 
}
1. type means waht you want to get for your return value.
2. You can define your function-name by your own, but usually we name a function
   by typing we we want to do. It is more clearly to see the meaning.
3. arguments means inputs, you set as much as you want for your arguments. Also, 
   you can leave it blank for no input 
4. statements means how you want excute this function. Always, the computer will
   excute a function line by line inside of a function. 
*/