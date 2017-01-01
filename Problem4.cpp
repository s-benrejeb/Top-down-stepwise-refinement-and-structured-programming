/*
 * Problem4.cpp
 *
 *  Created on: Feb 15, 2016
 *      Author: Sarah
 */

# include <iostream>
using namespace std;


int main ()
{
	int number = 0;//define variable corresponding to length of sequence of numbers to be summed
	int i = 0;//define variable used in for loop to increment
	int sum = 0;//define variable corresponding to varying value of sum
	cout << "Enter number of digits to be summed: ";//prompt user to enter number of digits to be summed
	cin >> number;//user enters value

	for (i = 1 ; i <= number ; i++ )
	{

		int digit = 0;//local variable is initialized to 0 with the start of each new loop
		cout <<"Enter digit: ";//prompt user to enter digit
		cin >> digit;//user enters digit
		sum += digit ;//sum the current digit to the previous one or sum of multiple previous digits
	}

	cout << "The sum is: " << sum << endl;//after exiting the loop, output the last saved value of sum
}


