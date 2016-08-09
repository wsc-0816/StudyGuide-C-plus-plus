// This file is about the string which is a useful data-type defined in the all languages.
#include <iostream>
#include <string> // You have to claim it before you use it. In C++. you have to make string class avaliable 
#include <cstring>
using namespace std;

void stringShow() {
 char charExample1[20];
 char charExample2[20] = "example";
 string str1;// create a empty one 
 string str2 = "waiting";// create one with value 
 cout << "The reason why we usually choose string not char is that string is unlimited" << endl;
 cout << "Enter your first input for char (The limit is 20) "<< endl;
 cin.getline (charExample1 ,20);
 cout << "Your first input is " << charExample1 << endl;
 cout << "Enter your second input for string"<< endl;
 getline( cin,str1);// This is a way to get the whole line, and cin here is assigned.
 cout <<"This is your second input : " << str1<< endl;
 cout << "Your second char in your string is " << str1[1]<< endl;

}  
void stringAdd(){
	string str1,str2;	
	cout << "Sometimes you need to add two strings even more"<< endl;
	cout << "Enter your first string : " << endl;
	getline (cin,str1);
	cout << "Enter your second string : " << endl;
	getline (cin,str2);
	cout << "Now we add them  str1 + str2: " << str1 +str2<< endl;
	str1 += str2;// This can be used in all of the calculations,it means str1 = str1 + str2
    cout << "Now we change the value of str1: " << str1 << endl;
}

int main(){
	stringShow();
	stringAdd();
	return 0;
}