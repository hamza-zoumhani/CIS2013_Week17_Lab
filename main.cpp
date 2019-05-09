#include <iostream>
#include <fstream>
using namespace std;

#define DEBUG false

int add_numbers(int &x, int y){
		returnvalue= x+=y;
		return returnvalue;
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
	
	int change=0;
	int num1=5;
	int num2=300;
	add_numbers(change,num1,num2);
	cout << "Adding 5 to 500: " << change << endl;
	add_numbers(change,num1,num2);
	cout << "Adding 5 to 500: " << change << endl;
	add_numbers(change,num1,num2);
	cout << "Adding 5 to 500: " << change << endl;
	
	return 0;
}