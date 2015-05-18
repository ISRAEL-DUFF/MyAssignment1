/*
 *  Question5.cpp
 *
 *  Name: SATURDAY ISRAEL DUFF
 *  Department: DEPARTMENT OF COMPUTER SCIENCE
 *  Matric. No: PDS/2013/2017
 *
 *  Program that calculates the squares and cubes of the integers from 0 to 10
 *
 *  Stub file to enable you complete assignment #1 - question #5
 */
	
	#include <iostream>
	#include <math.h> // library to use pow() function to calculate squares and cubes
	using namespace std;
	
	double numOfDigit(int x)     //This function computes the number of digits in an integer x in base 10
{
    return floor(log10(x));
}


void tab(int n)		// n is the number of space to tab
{
	for(int x=1; x<=n; x++)		// As long as x is less than or equal to n
		cout<<" ";              // Print a single empty space
 }	
 
 // This code often displays a warning message as against type conversion......but it's working			
	int main()
	{
	
	// display welcome messages to user
	cout << "Welcome - This program calculates the squares and cubes\n";
	cout << "of the integers from 0 to 10 and prints using tabs\n\n";
	
	// TODO: Hint use pow(base, power) to calculate squares and cubes
	// Put code here ...
		cout<<"Integer"<<"   Square"<<"   Cube"<<endl;
	int myInteger;
	cout<<0<<"          "<<0<<"        "<<0<<endl;	// This first part of the code gave me tough time so I had to move it outside the loop
	for(myInteger=1; myInteger<=10; myInteger++)
	{
		cout<<myInteger;             //display myInteger
		tab(10-numOfDigit(myInteger));         // determine the number of digits in myInteger and subtract from 10 which is the total space
		cout<<pow(myInteger,2);                  // display the square of myInteger
		tab(8-numOfDigit(pow(myInteger,2)));     // determine the number of digits in myInteger square and subtract from 8 which is the total space
		cout<<pow(myInteger,3);             // display the cube of myInteger
		cout<<endl;                       // start a new paragraph or row
			
	}    // repeat the above for myInteger less than or equal to 10
	
	cout << "\nThanks and Goodbye";
	
	system("PAUSE");
	return EXIT_SUCCESS;
	}
