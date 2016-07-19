//This file is about cout 
// cout is a function to print the output you want 
/* common sense : 
int    means integer               eg: 8, 16 ,500
string means word or sentence      eg: You , You are my sunshine 
*/
#include <iostream>
int main()
{
	using namespace std;
	cout << "This ";
	cout << "is ";
	cout << "a ";
	cout << "file ";
	cout << "about ";
	cout << "cout.";
	// After running this 6 cout, the output is :
	// This is a file about cout.

	cout << endl; // Pay attention,when you want to use endl, you don't need to 
				//put endl inside of " ". All the things inside of " " is string 
	cout << "This " << endl; // When you want use something outside of the "" , 
	cout << "is " << endl;  // you have yo use another << to connect what you want
	cout << "a " << endl;   // to use
	cout << "file " << endl;
	cout << "about " << endl;
	cout << "cout." << endl;
	/* After running this 6 cout, the outpus is:
	   This 
	   is 
	   a 
	   file 
	   about 
	   cout.
	 Also there is a space after each word.
	*/
	 cout << endl;
	 cout << "This " << "is " << 25 << " test.";// In this way you can print numbers and strings
											// The output is : This is 25 test.
	return 0;

}