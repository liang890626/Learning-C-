#include <iostream>
using namespace std;

int main() {
	int a = 0,b = 0, c = 0, min = 0;
	cin >> a >> b >> c;
	
	/*The ternary if operator ? :
		condition ? operation A : operation B
		-If condition is true, do operation A; otherwise, operation B.*/
	//Ex:
	if(a <= b){
		a <= c ? min = a : min = c;
	}	
	else{
		min = b <= c ? b : c;
	}
	//Parentheses ar helpful, you can write like:
	if(a <= b){
		(a <= c) ? (min = a) : (min = c);
	}	
	else{
		min = (b <= c ? b : c);
	}
	//Ternary if operator can also be nested(but not suggested):
	min = a <= b ? a <= c ? a : c : b <= c ? b : c;
	//equal to:  min = (a <= b ? (a <= c ? a : c) : (b <= c ? b : c));

	cout << min << " is the smallest.\n";
 
		 
	return 0;
}
