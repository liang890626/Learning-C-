#include <iostream>
using namespace std;

//Nested loop
/*like the selection process, loops can also nested.
  -Outer loop, inner loop, most inner loop, etc.
  Nested loop are not always necessary, but they can be helpful.
  -Particularly whem we need to handle a multi-dimensional case.*/

int main() {
	for(int x = 1;x <= 3;x++){
		for(int y = 1;y <= 3 ;y++){
			cout << "(" << x << "," << y << ") "; 
		}
		cout << "\n";
	} 
	
    return 0;
}



