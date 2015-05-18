/*
 *  Question4.cpp
 *
 *  Name: SATURDAY ISRAEL DUFF
 *  Department: DEPARTMENT OF COMPUTER SCIENCE
 *  Matric. No: PDS/2013/2017
 *
 *  Program that inputs a five-digit integer,
 *  separates the integer into its digits and prints them separated by three spaces each
 *
 *  Stub file to enable you complete assignment #1 - question #4
 */
	
//	In this program, I implement a simple function called tab(). This function works like the tab key on the system keyboard
//	Next, the variable called decimal_Point_Shift is simply an integer variable that I used to shift the decimal point of a number left or right.
//	I also implement the integer division function. It's not as if it is not available in <math.h>  or <cmath>, but it's just fun to implement	
	
	#include <iostream>
	#include <string>
	using namespace std;
	
	void tab(int n)		// n is the number of space to tab
{
	for(int x=1; x<=n; x++)		// As long as x is less than or equal to n
		cout<<" ";				// Print a single empty space
}

int myFloor(int numb, int n)   //My own implementation of the integer division function. It takes two argument and performs the necessary computation
{
	return (numb-(numb%n))/n;	//	Please pardon my manners, I just want to keep things short and neat. 
}


// The to_string function is giving me problem when i compile the code so i have commented it out
	
	int main()
	{
	// Variable declaration
	int digits;
	int decimal_Point_Shift=10000;
	int num2, num3;
	
	// display welcome messages to user
	cout << "Welcome - This program reads a five-digit integer\n";
	cout << "separates the integer into its digits and prints them\n";
	cout << "separated by three spaces each\n\n";
	
	// TODO: Read integer using cin
	cout << "Enter five digit integer value - ";
	cin>>digits;
	
	// check if digit is a five digit integer
/*	if (to_string(digits).length() < 5 || to_string(digits).length() > 5)
	{
	cout << "\nERROR - Please enter a five digit integer";
	} else {
 */
	// TODO: Separate the integer into its digits and prints them separated by three spaces each
	for(int k=1; k<=5; k++)
	{
		num2=myFloor(digits,decimal_Point_Shift);		// store the integer part (or quotient) of num0 divided  by decimal_Point_Shift;
		cout<<num2;				// print num2 to console
		tab(3);					// shift cursor three places to the right.
		num3=num2*decimal_Point_Shift;	// shift the decimal point 4 places to the right
		digits=digits-num3;
		decimal_Point_Shift=decimal_Point_Shift/10;	// reduce the number of place to be shifted by 1;
	}	// end of computation.
	

	
	cout<< "\nThanks and Goodbye";
	
	system("PAUSE");
	return EXIT_SUCCESS;
	}
	
