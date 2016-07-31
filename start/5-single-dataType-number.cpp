/*
This file is about the single data type with single variable
Basic concepts:
For the computer memory, the basic unit is bit. One bit includes 2 numbers, 
1 and 0. This is the reason why we always say that computer is the binary system.
If we have 8 bits, for the different combinations, we will have 256 combonations. 
1 byte = 8 bits 
1 KB = 1024 bytes
1 MB = 1024 KB 
*/
#include <iostream>
#include <climits>
using namespace std;

void IntegerType(){
cout << "This is ia function about the interger type----------------" << endl;
int int_eg = INT_MAX;// Initialize the value with the maximum of the int
short short_eg = SHRT_MAX;// So it is a way to give a value to a variable  
long long_eg = LONG_MAX;// also we can do : int a = 5;
unsigned int un_int = UINT_MAX; // unsigned means the positive values,no negative
unsigned short un_short = USHRT_MAX;
unsigned long un_long = ULONG_MAX;
cout << "This is the size of the different data type."<<endl;
// sizeof() is a function to evaluate the variable 
cout << "int is " << sizeof(int) <<" bytes." <<endl;
cout << "short is " << sizeof(short_eg) <<" bytes." <<endl;
cout << "long is " << sizeof(long_eg) <<" bytes." <<endl;
cout << "unsigned int is " << sizeof(un_int) <<" bytes." <<endl;
cout << "unsigned short is " << sizeof(un_short) <<" bytes." <<endl;
cout << "unsigned long is " << sizeof(un_long) <<" bytes." <<endl;

cout << "This is the maximum value of each data type-------------------" <<endl;
cout << "The maximum value of int is " << int_eg <<endl;
cout << "The maximum value of short is " << short_eg <<endl;
cout << "The maximum value of long is " << long_eg <<endl;
cout << "The maximum value of unsigned int is " << un_int <<endl;
cout << "The maximum value of unsigned short is " << un_short <<endl;
cout << "The maximum value of unsigned long is " << un_long <<endl;



cout << "This is minimum value of each data type------------------"<<endl;
cout << "The minimum value of int is " << int_eg + 1 <<endl;
cout << "The minimum value of short is -" << short_eg + 1 <<endl;
cout << "The minimum value of long is " << long_eg + 1<<endl;
cout << "The minimum value of unsigned int is " << un_int + 1 <<endl;
cout << "The minimum value of unsigned short is " << 0 <<endl;
cout << "The minimum value of unsigned long is " << un_long + 1 <<endl;



}

int main(){
	IntegerType();
}




