/*
This file is about the single data-type of the char.
char means the single character,like a,c, % ,etc.epresents 
Every char is represented by a unicode value which will show by a number.
For example, char a is ,char * is .
Usually the system will use ASCII as the default method to show .
*/
#include <iostream>
using namespace std;
void charType(){

char alarm = '\a';// This char is going to let the computer ring when you open a terminal.
cout << alarm << "Do not";// You cannot see the "Do not" after you use alarm.
cout << "-------------------------------------------------------\n";// You can use \n to jump to 
cout << "Here is the some examples about the char and meaning \n";// next line.
char cha1 = 'A';// Notice here: the char means the single character, you can only use the '' to 
char cha2 = 'B';// represent the char NOT ""
char cha3 = 'a';
char cha4 = 'b';
char cha5 = '?';
cout << "This is cha1 " << cha1 << "\n";
cout << "This is cha2 " << cha2 << "\n";
cout << "This is cha3 " << cha3 << "\n";
cout << "This is cha4 " << cha4 << "\n";
cout << "This is cha5 " << cha5 << "\n";
cout << "-------------------------------------------------------\n";
cout << "Now let's see the ASCII code for the char. \n";
int in1 = cha1;// Why can we give a char to an int?
int in2 = cha2;
int in3 = cha3;
int in4 = cha4;
int in5 = cha5;// Again, in C++ we use numbers to represent the char
cout << "This is " << cha1 << " and the value is "<< in1 <<endl;
cout << "This is " << cha2 << " and the value is "<< in2 <<endl;
cout << "This is " << cha3 << " and the value is "<< in3 <<endl;
cout << "This is " << cha4 << " and the value is "<< in4 <<endl;
cout << "This is " << cha5 << " and the value is "<< in5 <<endl;
cout << "-------------------------------------------------------\n";
cout << "Now let's do something for fun \n";
cout << "We add two on each char,see what's happening \n";
cha1 = cha1 + 2;//Since the computer think the char is a number, so we can do some math in
cha2 = cha2 + 2;// the appropriate range
cha3 = cha3 + 2;
cha4 = cha4 + 2;
cha5 = cha5 + 2;
in1 = cha1;
in2 = cha2;
in3 = cha3;
in4 = cha4;
in5 = cha5;
cout << "This is " << cha1 << " and the value is "<< in1 <<endl;
cout << "This is " << cha2 << " and the value is "<< in2 <<endl;
cout << "This is " << cha3 << " and the value is "<< in3 <<endl;
cout << "This is " << cha4 << " and the value is "<< in4 <<endl;
cout << "This is " << cha5 << " and the value is "<< in5 <<endl;
cout << "-------------------------------------------------------\n";


}

int main(){
	charType();
	return 1;
}

