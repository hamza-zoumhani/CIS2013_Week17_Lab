#include <iostream>
#include <fstream>
using namespace std;

#define DEBUG false

int main(){
	
	bool TRUE=true;
	
	if(DEBUG){ cout << "Value of TRUE: " << TRUE << endl; }
	
	cout << "This is something to the screen." << endl;
	if(TRUE){
		cout << "...and more to the screen." << endl;
	} else{
		cout << "...and less to the screen." << endl;
	}
	
	
	return 0;
}