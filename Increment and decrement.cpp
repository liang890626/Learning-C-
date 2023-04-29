//Increment / decrement operators
/*Both can put at the left or the right of the operand.
  -This changes the order of related operations.
  -i++: returns the value of i, and then increment i.
  -++i: increments i, and then returns the incremented value of i.*/

#include <iostream>
using namespace std;
int main() {
	//i++:
    int a = 5, b = 0;
    b = a++;
    cout <<"b = "<< b << "\n"; //Here will return b = 5.
    
    //++i:
    a = 5, b = 0;
    b = ++a;
    cout <<"b = "<< b << "\n"; //Here will return b = 6.

    //i-- and --i work in the same way.
    
    return 0;
}
