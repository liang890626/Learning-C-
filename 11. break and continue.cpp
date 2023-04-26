#include <iostream>
using namespace std;
//break and continue
//A break statement brings us to exit the loop immediately.
/*When continue is executed, statements after it in the loop are skipped.
  -The looping condition will be checked immediately.*/
int main() {
	//How to write a program to print out all integers from 1 to 100 except multiples of 10.
//	for(int a = 1; a <=100; a++){
//		if(a % 10 == 0){
//			continue;
//		} 
//		cout << a << " ";
//	}
	
	//The effect of "break" and "continue" is just on the current level.
	/*- If a "break" is used in an inner loop, the execution jumps to the outer loop.
	  - If a "continue" is used in an inner loop, the execution jumps to the condition check of the inner loop.*/
	int a = 0,b = 0;
	while(a <= 10){
		while(b <= 10){
			if(b == 5){
				break;
			}
			cout << a * b << "\n";
			b++;
		}
		a++;
	}
	cout << a << "\n";
	
	//Some important point of break and continue
	/*Using "break" gives a loop multiple exits.
	  -It becomes harder to track the flow of a program.
	  -It becomes harder to know the state after a loop.*/
	/*Using "continue" highlights the need of getting to the next iteration.
	  -Having too many continue still gets people confused.*/
	//Be careful not to hurt the readability of the program too much.
		
    return 0;
}
