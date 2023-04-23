#include <iostream>
using namespace std;


//Logical operators
/*In some cases, the condition for an "if" statement is complicated.
  -If I love a girl "and" she also love me, we will fall in love.
  -If I love a girl "but" she does not love me, my heart will be broken. 
  We may use "logical operators" to combine mutiple condition.*/

/*We have three logical operators:
  - && : and.
  - || : or.
  - ! : not. */


int main() {
	int a = 0;
	cin >> a;
	
	//Logical operators: and(&&)
	/*It returns true if both conditions are true. Otherwise it returns false.
		if(condition 1 && condition 2){
			statements
		}*/
	if(a >= 10 && a <= 20){
		cout << "a is between 10 and 20.";
	}
	else{
		cout << "a is out of range."
	}
	
	//Logical operators: or(||)
	/*It returns true if at least one of two conditions is true. Otherwise it returns false.
		if(condition 1 || condition 2){
			statements
		}*/
	
	//Logical operators: not(!)
	/*It returns the opposite of the condition.
	  -It is used when we have statements only in the else block:
	  	if(condition){
		    ;
		}
	  	else{
	  	    statement
	  	}
	  -The upper program is equal to lower program.
		if(! condition){
		    statement
		}*/
		 
	return 0;
}

