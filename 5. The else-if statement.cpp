#include <iostream>
using namespace std;

int main() {
	int a = 0;
	cin >> a;
	
	//The else-if statement
	
	/*An if-else statement allows us to respond to a binary condition.
	  When we want to respond to a ternary condition, we may put an if-else statement in an else block:*/
	if(a < 10){
		cout << "a < 10.";
	}
	else{
		if(a > 10){
			cout << "a > 10.";
		}
		else{
			cout << "a == 10";
		}
	}
	
	/*For this situation, people typically drop {} amd put the second "if" behind "else" to create an "else-if" statement: */
	if(a < 10){
		cout << "a < 10.";
	}
	else if(a > 10){
		cout << "a > 10.";
	}
	else{
		cout << "a == 10";
	}
		 
	return 0;
}
