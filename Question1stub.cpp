/*
 *  Question1.cpp
 *
 *  Name: SATURDAY ISRAEL DUFF
 *  Department: DEPARTMENT OF COMPUTER SCIENCE
 *  Matric. No: PDS/2013/2017
 *
 *  Program that reads an integer and determines
 *  and prints whether it’s odd or even
 *
 *  Stub file to enable you complete assignment #1 - question #1
 */

#include <iostream>
using namespace std;

int main()
{
    // declare variable to hold integer value
    int value;
    
    // display welcome messages to user
    cout << "Welcome - This program reads an integer\n";
    cout << "and determines if it is odd or even\n\n";
    
    // TODO: Enter code to read integer and store in variable value
    cout << "Please enter an integer value -  ";
    cin>>value;
    
    // TODO: Enter code to determine if integer is odd or even
    if(value%2==0)
		cout<<value<<" is an even integer"<<endl;
	else cout<<value<<" is an odd integer"<<endl;
    
    cout << "\nThanks and Goodbye";
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
