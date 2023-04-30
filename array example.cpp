#include <iostream>
using namespace std;

//Array


int main(){
	//Example: finding the maximum
	float value[10]={};
	for(int i = 0;i <10;i++){
		cin >> value[i];
	}
	float max = 0;
	for(int i =0;i<10;i++){
		if(value[i]>max){
			max = value[i];
		}
		else max = max;
	}
	cout << "The maximum is "<< max;
	
	
	return 0;
}
