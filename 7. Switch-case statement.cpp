#include <iostream>
using namespace std;

//Switch-case statement
//It is particularly useful for responding to multiple values of a single operation.
/*For the operation:
  -It can contain only a single operand.
  -It must return an integer.*/

int main() {
	int a = 0;
	cin >> a;
	
	/*Switch-case statement
	  After each case, there is a value.
	   -No curry brackets are needed for blocks.
	   -A colon is needed after the value.
	  A break marks the end of a block.
	   -The "break" of the last section is optional.
	  Restrictions on those values:
	   -Cannot be (non-constant) variables.
	   -Must be different integers.
	  The default block will be executed if no case value matches the operation's return value.
	   -You may add a "break" at the end of default or not. 
	   
		switch(operation){
		    case value 1:
		        statements
		        break;
		    case value 2:
		        statements
		        break;
		    .....
		    default:
		        statements
		        break;
	    }
	*/
	
	switch(a){
		case 10:
			cout << "ten";
			break;
		case 6:
			cout << "six";
			break;	
	}    
		 
	return 0;
}

