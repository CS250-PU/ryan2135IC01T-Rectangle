//********************************************************************* 
// File name:	 RectangleExample.cpp
// Author:		 CS, Pacific University
// Date:			 2/14/2018
// Class:			 CS 250
// Assignment: Rational Lab
// Purpose:		 Driver used to test class Rational
// 
//						 TODO #1: a) Uncomment getWidth and compile.
//											b) What is the error and what does it mean?
//											c) Fix the error
//						 TODO #2:	a) Uncomment setWidth & write the correct code
//											b) Did your solution work the first time?
//						 TODO #3:	a) Uncomment the first constructor in the .h
//												 the .h file, write the implementation in
//												 the .cpp file, and test
//						 TODO #4:	a) Do the same for the second constructor
//*********************************************************************

#include <iostream>
#include <fstream>
#include "Rectangle.h"

using namespace std;
/**********************************************************************
Function:		  main

Description:	main driver for the rectangle example.
							show how each member function in rectangle can be used.

Parameters:		none

Returned:			exit status
**********************************************************************/

int main () {
	const string FILE_OF_RECTANGLES = "rectangles.txt";
	const unsigned int NUM_RECTANGLES = 5;
	ifstream inStream;
	Rectangle cRectangles[NUM_RECTANGLES];
	Rectangle cRectangle;

	inStream.open (FILE_OF_RECTANGLES);
	if (inStream.fail ()) {
		cout << "Error opening: " << FILE_OF_RECTANGLES;
		exit (EXIT_FAILURE);
	}

	inStream.close ();

	return EXIT_SUCCESS;
}