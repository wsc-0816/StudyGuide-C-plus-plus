// This file is about the array of the char which is a special array contains the char
# include <iostream>
using namespace std;
void charIntType(){
	cout << "This is a one way to express many chars. \n";
	char example1[11] = {'b','l','a','c','k',' ','n','i','g','h','t'};
    char example2[12] = {'b','l','a','c','k',' ','n','i','g','\0','h','t'};
    cout << "This is first example: \n";
    for (int i = 0;i <sizeof(example1);i++){
		cout << example1[i]<<" \n";
	}
	cout << "----------------------------------------------- \n";
	cout << "This is second example: \n";
	for (int i = 0;i <sizeof(example2);i++){
		cout << example2[i]<<" \n";
	}
	cout << "----------------------------------------------- \n";
	cout << "This is another way to express many chars. \n";
	char example3[5] = "abcd";// Attention here: the size of a string should include the \0
	char example4[] = "Cloudy day";
	cout << "This is third example: \n";
	 for (int i = 0;i <sizeof(example3);i++){
		cout << example3[i]<<" \n";
	}
	cout << "----------------------------------------------- \n";
	cout << "This is fourth example: \n";
	 for (int i = 0;i <sizeof(example4);i++){
		cout << example4[i]<<" \n";
	}
	cout << "----------------------------------------------- \n";

}

int main (){
    charIntType();
	return 5;
}