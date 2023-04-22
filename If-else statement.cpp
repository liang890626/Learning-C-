#include <iostream>
using namespace std;

int main() {
	int income = 0, tax = 0;
	
	cout << "Please enter your income: ";
	cin >> income;
	
	/*If statement:
		if(condition){
			statements
		}
	-condition may return a Boolean value.
	-{} may be dropped if there is only statement.*/
	
	//If
	if(income <= 10000){
		tax = 0.02 * income;
	}
	if(income>10000){
		tax = 0.08 *(income-10000) + 200;
	}
	
	cout << "Tax amount: $" << tax <<"\n";
	
	/*If-else statement
		if(condition){
			statements 1
		}
		else{
			statements 2
		}
	-Do statement 1 if condition return true.
	-Do statement 2 if condition return false.
	-An else must have an associated if!! */
	//須確定If跟else之間的條件是互斥的
  
	//If-else
	if(income <= 10000){
		tax = 0.02 * income;
	}
	else{
		tax = 0.08 *(income-10000) + 200;
	}
  
	cout << "Tax amount: $" << tax <<"\n";
	 
	return 0;
}
