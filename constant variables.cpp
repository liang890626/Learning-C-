#include <iostream>
using namespace std;

int main(){
	//constant variables
	//A constant is one kind of variables.
	/*use the key word const:
	  -const int a = 100;
	  -All further assignment operations on a constant generate compilation errors.
	  -That is why we must initialize a constant.*/
	  
	//It's suggest to use capital characters and underlines to name constants. EX: 
	const double PI = 3.1416; 
	const int MAX_LEVEL = 5;
	
	PI = 2; //Error, PI is a constant variable. 
	
	  

	return 0;
}
