//preprocessors commands, which begins with "#", performs some actions before the compiler does the translation.
/*"include" command here is to include a header file(標頭黨):
	-Files containing definitions of common variables and functions.
	-Written to be includeed by other programs. */
/*"iostream" is part of the C++ standard library.
	It provides functionalities of data input and output.*/
/*We may define our own variable and functions into self-defined header files 
	and include them by ourselves:
		-#include "C:\myHeader.h";*/

#include <iostream>

/*A C++ namespace is a collection space of names 
	-For C++ variables, functions, objects, etc.*/ 
//主要是將一樣類型的變數歸類在一個collection space裡面 
using namespace std;

//The scope resolution operator(::)
/*the scope resolution operator (::) in C++ is used to access a variable, function, or class member that is defined outside the current scope.*/
/*the scope resolution operator allows you to access variables, functions, and class members that are defined in other scopes, 
	and helps to resolve naming conflicts when multiple variables or functions have the same name.*/
//Ex:
	std::cout << "Enter two number, " << "seperated by a white space:";
