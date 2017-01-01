/*
 * Problem2b.cpp
 *
 *  Created on: Feb 12, 2016
 *      Author: Sarah
 */

#include <iostream>

using namespace std;

int main()
{

	int number = 0;// define the variable for number to calculate factorial


	cout << "Enter number: "; //Prompt user to enter value for which they want factorial
	cin >> number; //User inputs value to calculate factorial

	if ( number > 1 ) //for positive values strictly bigger than 1
	{
		int factorial1 = number ; //define number for factorial to start at value input before
		int increment = 1; //define variable of increment to start at 1
		for ( increment = 1; increment < number ; increment++)// starting at 1, until the value is
										//strictly smaller than the input number, while increasing the
										//increment by 1 at each loop
		{
				factorial1 *= (number - increment );//calculate the factorial
		}
		cout << "The factorial to your value is: " <<factorial1 <<endl;//at the end of the loop, output
																		//calculated factorial
	}

	else if (number == 0 or number == 1)
	{
		int factorial2 = 1 ;//Assign 1 to factorial of 0 and 1
		cout << "The factorial to your value is: " <<factorial2 << endl;//output the factorial value
	}
	else//for negative values strictly smaller than 0
	{
		cout << "Error" <<endl;//Error because the factorial to negative values does not exist
	}
}


