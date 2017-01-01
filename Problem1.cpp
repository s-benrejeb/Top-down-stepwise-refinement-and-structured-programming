/*
 * Problem1.cpp
 *
 *  Created on: Feb 5, 2016
 *      Author: Sarah
 */
//This program is to calculate the net earnings by the salesperson per week

#include <iostream>
using namespace std;

int main()
{
	int sales = 0.00; //Defining the variable that corresponds to the amount of sales per week
	float salary = 0.00; //Defining the variable that corresponds to the net salary per week

	cout <<"Enter sales in dollars (-1 to end): "; //Prompt the user to enter the sales done for the week
	cin >> sales; // User enters sales

	while ( sales != -1) // As long as the user does not end the loop with the sentinel value -1

		{
		salary = 200.00 + sales * 0.09; // Calculate the net salary by giving a base of 200$ with a
										//commission of 9%
		cout << "Salary is: " << salary <<endl; //Output the net salary


		cout <<"Enter sales in dollars (-1 to end): "; //Prompt the user to enter another value while
														//still in the loop
		cin >> sales; //User enters value (if it is !=-1 the loop restarts, if ==-1 the loop ends)

		}


}



