#include <iostream>
using namespace std;

//Two-dimensional arrays
/*One-dimensional likes a "vector", two-dimensional likes a matrix or table.
  Two-dimensional array is composed by rows and columns. 
    data type  array name[rows][columns];
	ex: double score[3][7];*/


int main(){
	//Example: tic-tac-toe
	int a[3][3] = {{1,0,1},{1,1,0},{0,0,1}};
	//rows and columns
	for(int i=0; i<=2; i++){
		if(a[i][0] == a[i][1] && a[i][1] == a[i][2]){
			cout << a[i][0] << endl;
			break;
		}
		if(a[0][i] == a[1][i] && a[1][i] == a[2][i]){
			cout << a[0][i] << endl;
			break;
		}
		
	}
	//diagonala
	if(a[0][0] == a[1][1] && a[1][1] == a[2][2]){
		cout << a[0][0] << " " << a[1][1] << " " << a[2][2] << endl;
	} 
	if(a[2][0] == a[1][1] && a[1][1] == a[0][2]){
		cout << a[2][0] << " " << a[1][1] << " " << a[0][2] << endl;
	}
	
	//Example: matrix additions
	int a[2][3] = {{1,2,3},{1,2,3}};
	int b[2][3] = {{4,5,6},{7,8,9}};
	int c[2][3] = {0};
	
	//matrix addition
	for(int i=0; i<2 ;i++){
		for(int j=0; j<3; j++){
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	//print out c
	for(int i=0; i<2 ;i++){
		for(int j=0; j<3; j++){
			cout << c[i][j] << " ";
		}
		cout << "\n";
	}
	
	//Example: matrix multiplications
	int a[2][3] = {1,1,1,2,2,2};
	int b[3][4] = {1,1,1,1,2,2,2,2,3,3,3,3};
	int c[2][4] = {0};
	
	for(int i=0; i<2; i++){
		for(int j=0; j<4; j++){
			for(int k=0; k<3; k++){
				c[i][j] += a[i][k] *b[k][j];				
			}
			cout << c[i][j] << " ";
		}
		cout << "\n";		
	}

	return 0;
}
