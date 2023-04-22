#include <iostream>
using namespace std;

int main() {
	double length = 0.0, width = 0.0;
	
	cout<<"Enter the length of the rectangle: ";
	cin>>length;
	cout<<"Enter the width of the rectangle: ";
	cin>>width;

	cout<< "The area of the rectangle is "<< length*width<<"\n";
	cout<< "The perimeter  of the rectangle is "<< (length+width)*2;
	
	
	return 0;
}
