// This file is about union which is a special struct for the struct.
// In the union, all members use the same memory space。The default space is the maximum in the union.
#include <iostream>
#include <string>
using namespace std;

union test{
	int number;
	char good;
}a;

int main()
{
	a.number = 6;
	a.good = 'A';

	cout << "The first thing is " << a.number << " and the second thing is " << a.good << endl;

}