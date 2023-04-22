#include <iostream>
using namespace std;

int main() {
	int a = 0,b = 0, c = 0;
	cin >> a >> b >> c;
	
	//Nest if-else statement
	/*An if or an if-else statement can be nested in an "if" block.
		if(condition 1){
			if(condition 2){
				statements A
			}
			else{
				statements B
			}
		}
		else{
			statements C
		}
	-In this example, "if" both conditions are true, statements A will be executed.
	-If condition 1 is true but condition 2 is false, statement B will be executed.
	-If condition 1 is false, statement C will be executed.*/
	//An if or an if-else statement can be nested in an else block.
	
	//Ex Nest if-else statement
	if(a <= b){
		if(a <= c){
			cout<< a << " is the smallest\n";
		}
		else{
			cout<< c << " is the smallest\n";
		}
	}
	else{
		if(b <= c){
			cout<< b << " is the smallest\n";
		}
		else{
			cout<< c << " is the smallest\n";
		}
	}
	
	//Two different implementations
	//1.
	int min1 = 0;
	if(a <= b){
		if(a <= c){
			min1 = a;
		}
		else{
			min1 = c;
		}
	}
	else{
		if(b <= c){
			min1 = b;
		}
		else{
			min1 = c;
		}
	}
	cout<< min1 << " is the smallest\n";
	
	//2.
	int min2 = c;
	if(a <= b){
		if(a <= c){
			min2 = a;
		}
	}
	else{
		if(b <= c){
			min2 = b;
		}
	}
	cout<< min2 << " is the smallest\n";
		 
	return 0;
}
