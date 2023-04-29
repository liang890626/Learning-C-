#include <iostream>
using namespace std;

//The for statement
/*Another way of implementing a loop is to use a "for" statement.
   -The curly brackets can be dropped if there is only one statement.*/
/*The grammer:
    for(init; cond; some){
        statements
	}
*/	
/*The typical way of using a for statement is:
  -init: Initialize a counter variable here.
  -cond: Set up the condition on the counter variable for the loop to continue.
  -some: Modify (mostly increment or decrement) the counter variable.
  -statements: The things that we really want to do.*/
  
int main() {
	//for vs. while
	/*Calculate the sum of 1+2+...+100:*/
	//while statement
	int sum = 0;
	int i = 1;
	
	while(i <= 100){
		sum = sum + i;
		i = i + 1;
	}
	cout << sum << "\n";
	
	//for statement
	sum = 0;
	for(int j = 1; j <= 100; j++){
		sum = sum + j;
	}
	cout << sum;
	
    return 0;
}

//Multi-counter for loop
/*Inside one for statement:
   -You may initialize multiple counters at the same time.
   -You may also check multiple counters at the same time.
   -You may also modify multiple counters at the same time.
  Use "&&" or "||" to connect operations on multiple counters.*/
  
int main() {
	//Multi-counter for loop
	for(int i = 0, j = 0; i < 10 && j > -5; i++, j--){
		cout << i << " " << "\n"; 
	}
	
    return 0;
}



