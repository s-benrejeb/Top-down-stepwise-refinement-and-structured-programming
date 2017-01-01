/*
 * Problem3.cpp
 *
 *  Created on: Feb 12, 2016
 *      Author: Sarah
 */


#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{

	int product = 0;//define variable corresponding to product to be chosen
	int quantity = 0 ;//define variable corresponding to the quantity of the product sold
	float sum = 0;//define variable corresponding to the sum of profits made for each product


	cout << "Enter product number (1 to 5)(or -1 to sum): ";//Prompt user to choose product from 1 to 5
	cin >> product;//user inputs choice of product

	while ( product != -1 )//Sentinel value is -1 to end loop

	{
		cout << "Enter quantity sold : ";//Prompt user to input quantity for choice of product
		cin >> quantity;//user inputs quantity of product

		switch ( product )
		{
		case 1 :
				sum += quantity * 2.98;//calculate the sum of profits for product 1 with specific price
		break;
		case 2 :
				sum += quantity * 4.50;//calculate the sum of profits for product 2 with specific price
		break;
		case 3 :
				sum += quantity * 9.98;//calculate the sum of profits for product 3 with specific price
		break;
		case 4 :
				sum += quantity * 4.49;//calculate the sum of profits for product 4 with specific price
		break;
		case 5 :
				sum += quantity * 6.87;//calculate the sum of profits for product 5 with specific price
		break;
		}

		cout << "Enter product number (1 to 5) (or -1 to sum): ";//restart loop if user wants to add
		//another product, or end loop if user inputs -1
		cin >> product;//user inputs another product number or -1 to end loop
	}

	cout << "The sum of sales is: " << sum <<endl;//output the final value of sum from previous loop
}
