// This file is about struct-array which means you can create a special array for your sturct.
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
struct student {
	// This is how you define a struct 
    string name;
	float Score;
	char Course_grade[3];
};
void arrayStruct (){
	student example[2] = {
		{"Tom",56.3,'F'},{"Edward",81.6,"A+"}
	};
	cout << "The first student is " << example[0].name << " and score is "
         << example[0].Score << " and the course grade is " << example[0].Course_grade << endl;
    cout << "The first student is " << example[1].name << " and score is "
         << example[1].Score << " and the course grade is " << example[1].Course_grade << endl;     

} 

int main(){
	arrayStruct();
	return 0;
}