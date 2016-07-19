//This file is about cin 
// cin ia method that can get information from out side.
// That means user can control the input .
#include <iostream>
 int main(){
   using namespace std;
   
   int carrots; // When you want to get user's input,you must declare the 
    			// name and type to stroe the information. Initialization : 0   

   cout << "What number do you want to test?";
   cout << endl; // Switch to next line 
   cin >> carrots; // Get input, also please press enter to do next step.
   cout << "Add two more on your number";
   carrots = carrots + 2; // Add two to your number.
   cout << "Now your number is " << carrots << endl;// Print out the final answer.
   return 0;

 }
// If you don't type in a right data type,
// the system will take the initial value which is 0.
// Eg:
/* What number do you want to test?
   d
   Add two more on your numberNow your number is 2
*/
