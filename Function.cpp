#include <iostream>
using namespace std;

//Function: we may put statements into "functions" to be involved in the future.
/*We need "modules" instead of a huge main function.
	-Easier to devide the works: modularization(模組化).
	-Easier to debug: maintenance.
	-Easier to maintain consistency.*/

/*We need something that can be used repeatedly.
	-Enhance reusability.*/

//Structure of functions: composed of a header and a body.
//A header for declaration: function name, input parameters, return value.
//A body for definition: Statements that define the task. 

/*Two type of functions:
	- System-defined function.
	- User-defined function.*/

//Example

//call your function
int add(int, int);

int main(){
	int c = add(10, 20);
	cout << c << "\n";
	

	return 0;
}

//defined and declared the function
int add(int num1, int num2){
	return num1 + num2;
}

