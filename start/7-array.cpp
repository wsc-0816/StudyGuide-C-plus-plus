// This is a file about array 
#include <iostream>
using namespace std;
 void arrayShow() {
 	cout << "Array is a type of data structure. It can store all the values with the same data type. \n";
 	cout << "The format when you want to innitialize a new array \n";
 	cout << "typeName  arrayName[arraySize] \n";
 	cout << "Eg: float example[4] \n";
 	cout << "arraySize only can be an integer \n";
 	int example[3] = {5,6,7};
 	cout << "The first element is " << example[0] << " The index is 0 \n";
 	cout << "The second element is " << example[1] << " The index is 1 \n";
 	cout << "The third element is " << example[2] << " The index is 2 \n";
    cout << "Important \n"<<"Important \n"<<"Important \n";
    cout << "All  arrays will count from 0, that means the index of first element is 0 \n";
    cout << "The size of this array is " << sizeof(example) << endl;
    cout << "Also we can change or do something directly with elements as long as we konw the index. \n";
    cout << "The first element is " << example[0]<< " We add 10 on it" <<endl;
    example[0] = example[0] + 10;
    cout << "The first element now is " << example[0] << "  \n";
 }

 int main(){
 	arrayShow();
 	return 0;
 }