#include <iostream>
#include <fstream>
using namespace std;

#define DEBUG false

int add_numbers(int &x, int y){
		return x+=y;
}

int main(){
	/* 
	bool TRUE=true;
	
	if(DEBUG){ cout << "Value of TRUE: " << TRUE << endl; }
	
	cout << "This is something to the screen." << endl;
	if(TRUE){
		cout << "...and more to the screen." << endl;
	} else{
		cout << "...and less to the screen." << endl;
	}
	 */
	
	int num1=5;
	int num2=300;
	
	cout << "Adding 5 to 500: " << add_numbers(num1,num2) << endl;
	cout << "Adding 5 to 500: " << add_numbers(num1,num2) << endl;
	cout << "Adding 5 to 500: " << add_numbers(num1,num2) << endl;
	
	return 0;
}