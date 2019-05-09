#include <iostream>
#include <fstream>
using namespace std;

#define DEBUG false

int add_numbers(int &x, int y){
	// x=x+y
	return x+=y;
}

int main(){
	int num1=5;
	int num2=300;
	int addr = &num2;
	int *ptr = *num2;
	
	cout << "Value of num2 is: " << num2 << endl;
	cout << "Value of ptr is: " << ptr << endl;
	
	return 0;
}