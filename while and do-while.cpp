#include <iostream>
using namespace std;

//The do-while statement
/*One drawback of this program is that a set of same codes must be written twice.
   -Inconsistency may then arise.
  To avoid such a situation, we may use a do-while statement.*/
/*The grammer:
    do{
        statements
	}
	while(operation);
*/	

int main() {
	//while
	int exit = 0;
	//do something
	cout << "Press 1 to exit: ";
	cin >> exit;
	
	while(exit != 1){
		//do something
		cout << "Press 1 to exit: ";
		cin >> exit;	
	}
	
	//do-while
	//The revision of the upper program:
	exit = 0;
	do{
		//do something
		cout << "Press 1 to exit: ";
		cin >> exit;
	} 
	while(exit != 1);
	//In any case, statements in a do-while loop must be executed at least once.
	/*The semicolon after "while()" in a do-while statement is necessary, 
	  because it tells the compiler where the end of the do-while statement is and how to execute it.*/
  
    return 0;
}
