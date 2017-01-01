/*
 * AP2.cpp
 *
 *  Created on: Feb 9, 2016
 *      Author: Sarah
 */


#include <iostream>
using namespace std;

int main()
{
	int value = 0; //Defining the variable corresponding to the value to be calculated
	int increment = 1; //Defining the variable of increment starting from 1

	cout << "Enter value: "; //Prompt user to enter value to which they want the factorial
	cin >> value; //User enters value


	if ( value == 0 or value == 1 )
	{
		int factorial1 = 1; // Defining the factorial to 0 and 1 values because they are proven to be
							// equal to 1
		cout << "The factorial to your value is: " << factorial1 << endl; // Output value for factorial
																		// is 1
	}

	else if (value < 0) //if the value is negative
	{

		cout << "Error" << endl; //factorial to negative value does not exist
	}
	else //if the value is positive and different form 0 and 1
		{
		int factorial2 = value; //start by assigning the factorial value to the input value so that
								//the first multiplication starts with the right values
		while ( value > increment )//the increment value will keep increasing with the loop
			{
			factorial2 *= (value - increment);// Calculate the factorial value in each loop while the
											//increment increases
			increment++; //The increment increases by 1 after each loop
			}
		cout << "The factorial to your value is: " << factorial2 << endl; //after the exiting the loop,
																		//output the factorial value

		}
}

