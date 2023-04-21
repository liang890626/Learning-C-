#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int num1 = 0, num2 = 0;
	
	cout<<"Enter two number, "<<"seperated by a white space:";
	cin>>num1>>num2;
	//1.
	if(num1>num2){
		cout<<"The larger one is:"<<num1;
	}
	else if(num1<num2){
		cout<<"The larger one is:"<<num2;
	}
	else cout<<"the twe are equal";
	//2.
	if(num1>num2){
		cout<<"The larger one is:"<<num1;
	}
	if(num1<num2){
		cout<<"The larger one is:"<<num2;
	}
	if(num1 == num2){
		cout<<"the twe are equal";
	} 
	/* One equal means to assign a number to variable
	Two equals mean to checks whether variable equals to number, it will return true or false*/
		
	 
	return 0;
}
