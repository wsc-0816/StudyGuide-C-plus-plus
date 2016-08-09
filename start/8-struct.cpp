// This file is about the simple struct, which is an important way to define a  what you want.
/*
What is struct?
Struct is designed for the complicated data information. 
Example:
We want to define a stuct named student:
student {
    string name;
	float Score;
    char Course_grade; 
}; 
As we can see, this student struct has three different data types which cannot see in array.
*/
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
struct student {
	// This is how you define a struct 
    string name;
	float Score;
	char Course_grade[3];
};// Look here, ; mark is needed for the struct
void ShowStruct (){
	student example1 = {"Tom",63.2,'C'};// As usual, you need to claim it before you want to use
	student example2 = {"Peter",96.5,"A+"};// a variable 
	cout << "This is first student: " << example1.name << " and the average score is " <<example1.Score
	     << " so the course grade is "  << example1.Course_grade << endl;
	cout << "This is first student: " << example2.name << " and the average score is " <<example2.Score
	     << " so the course grade is "  << example2.Course_grade << endl;     
}
void yourStruct(){
	student case1 = {};
	cout << "Now it is your time to try a new struct \n";
	cout << "Enter student's name : \n";
	getline(cin,case1.name);
	float a;
	cout << "Enter student's score: \n";
	cin >> a;
	case1.Score = a;
	cout << "Enter student's course grade : \n";
    cin >> case1.Course_grade;
    cout << "So, the student you entered is " <<case1.name << " the score is " << case1.Score
     << " the course grade is " << case1.Course_grade << endl; 
}

int main() {
     yourStruct();
	ShowStruct();
}
/*
Also there are several ways to create a struct variable besides we can see above
1  
struct student {
    string name;
	float Score;
    char Course_grade; 
} example1 ,example2 ;
you create two variables named example1 and example2
2
struct student {
    string name;
	float Score;
    char Course_grade; 
} example1 ={
	"Tom",56.2,"A"
};
3 
 struct  { // No struct name
    string name;
	float Score;
    char Course_grade; 
}example1; // So in this way, you can crate a variable named example1, but you cannot use it 
           // for other variables 
*/