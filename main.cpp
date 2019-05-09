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
	int *ptr = &num2;
	
	cout << "Value of num2 is: " << num2 << endl;
	cout << "Value of ptr is: " << ptr << endl;
	num2 = 9999;
	cout << "Value of num2 is: " << num2 << endl;
	cout << "Value of ptr is: " << ptr << endl;
	ptr = &num1;;
	cout << "Value of num2 is: " << num2 << endl;
	cout << "Value of ptr is: " << ptr << endl;
	num2 = 9999;
	cout << "Value of num2 is: " << num2 << endl;
	cout << "Value of ptr is: " << ptr << endl;
	num2 = 9999;
	return 0;
}