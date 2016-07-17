#include <iostream> // This "include" will be used to cite the Library you 
                    // want to use. This <iostream> is the required library
                    // for the common programming.
          			// The "Library" means that it stores the data or function 
					// you want to use. It can be your file that you make or the
					// online library.

int  main()	
{					//"int" means the return value. This is required filed for 
					// all functions. Different function may have differnt return 
					//values. For the main function, it usually goes with int.
					// main() means the function you want to excute in the file.
					// Required function for all c++ file 

	using namespace std; // See explaination below 
	cout << "Come up and C++ me some time.";// "cout <<"" means print the words you want to see  
	cout << endl; 							// "cout << endl;" means to switch to next line  
	cout << "You won. " <<endl;				// The words you want to print must be inside of ""
	return 0;         						// according to the title you make 

}


// Explaination for "using namespace std":
// Purpose : avoid naming a variable for several times
// Example:
// #include <iostream> 
//  using namespace std;
// namespace example1
//{
//   int a = 10;
//   }
//  namespace example2
//{
// int a = 5	
// }
// void main()
//{
// int a = 1;
// cout << "Example1 a = " << example1 :: a <<endl  // :: here means to cite 
// cout << "Example2 a = " << example2 :: a <<endl  // the variable from class
// cout << "Main function  a = " << a <<endl
// }
//
// The output is :
// Example1 a = 10
// Example2 a = 5
// Mian function a =1
//





