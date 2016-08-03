// This file is about how to get the tnput from users .
#include <iostream>
using namespace std;
void getInput_old () {
	cout << "This file may need you to type some input; \n";
	cout << "First we need see the way we used before to get the input. \n";
	int size = 30;// Define a size of arrya before you use it. That means sometimes you cannot
	              // have any larger size than this.
	char example1[size];
	char example2[size]; 
	// what if you type a space between two words here,see what will happen ?
	cout << "What do you want to type here? \n";
	cin >> example1;
	cout << "What is your favorite song? \n";
	cin >> example2;
	cout << "This is your example1 : "<< example1 << " \n "
	" and this is your example2 : " << example2 << endl;
    cout << "This is because when you use 'cin >>', it use space to split different things.\n"
	      "That means this method only can get the input without space. \n"
	      "Now you may understand,cin >> gets input by recognize the space which is \0. \n";


}
void getInput_upgrade(){
	cout << "This file may need you to type some input; \n";
	cout << "First we need see the way we used before to get the input. \n";
	int size = 30;// Define a size of arrya before you use it. That means sometimes you cannot
	              // have any larger size than this.
	char example1[size];
	char example2[size]; 
	// what if you type a space between two words here,see what will happen ?
	cout << "What do you want to type here? \n";
	cin.getline(example1,size);
	cout << "What is your favorite song? \n";
	cin.getline(example2,size);
	cout << "This is your example1 : "<< example1 << "\n"
	" and this is your example2 : " << example2 << endl;

}

int main() {
	//getInput_old();
	getInput_upgrade();

	return 1;
}