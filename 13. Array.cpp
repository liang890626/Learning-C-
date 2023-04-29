#include <iostream>
using namespace std;

//Array
//An array is a collection of variables with the same type.


int main(){
	//Arrays are often used with loop.
	
//	int score[5];
	for(int i=0; i<5;i++){
		cin >> score[i];
	}
	for(int i=0;i<5;i++){
		cout << score[i] << " "; 
	}
	cout << "\n";
	
	//An array is also a nonbasic type
	cout << score; //pointer
	 
	/*Array declaration
	   datatype arrayname[number of element];
	  EX:int score[5];
	  -The index starts at 0. 
	  -It occupies 4 bytes*5=20 continuous bytes.*/
	cout << sizeof(score) << "\n";
	
	//array initialization
	/*Array cannot initialize automatically.
	  various ways of initializing an array:*/
	int daysInMonth1[12] = {31,28,30,31,30,31,30,31,31,30,31,30,31};
	int daysInMonth2[] = {31,28,30,31,30,31,30,31,31,30,31,30,31};
	cout << sizeof(dayInMonth);
	int daysInMonth3[12] = {31,28,30}; //nine 0s
	int daysInMonth4[3] = {1,2,3,4}; //error!
	
	//EX: inner product
	int a[4] = {1,2,3,4};
	int b[4] = {4,3,2,1};
	
	int ip = 0;
	for(int i=0; i<4; i++){
		ip += a[i]*b[i];
	}
	cout << ip << "\n";	  

	return 0;
}
