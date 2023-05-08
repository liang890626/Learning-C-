#include <iostream>
using namespace std;

//Function: we may put statements into "functions" to be involved in the future.
/*declare its protorype(原型):
	return type  function name(parameter types);*/

//Example

//call your function
int add(int, int);
double divide(double, double);
void test(int);

int main(){
	int c = add(10, 20);
	cout << c << "\n";
	
	return 0;
}

//defined and declared the function
int add(int num1, int num2){
	test(num1);
	return num1 + num2;
}

double divide(double num, double den){
	//statements;
}

/*Every type can be the return type:
	-It may be "void" if the function returns nothing.*/ 
void test(int toPrint){
	cout << toPrint << "\n";
} 
