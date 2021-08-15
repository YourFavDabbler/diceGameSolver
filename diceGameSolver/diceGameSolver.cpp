// diceGameSolver.cpp : This file contains the 'main' function.
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include "diceGameSolver.h"

int main()
{

	int choice;
	double product;
	int d12num1;
	int d12num2;
	int d6num1;
	int d6num2;
	int d6num3;
	
		//Choosing which side of the program to use. Either Random Game or and Existing Game
	std::cout << "Would you like to play a new game or find the best outcome of an already existing game?" << std::endl;
	std::cout << "Press 1 for a New Game and 2 for an Existing Game." << std::endl;
	std::cin >> choice;


	if (choice == 1 || choice == 2)
	{

		std::cout << "Okay" << std::endl << std::endl;


	}
	else
	{
		do
		{
			std::cout << "Please try again. Press 1 for a new game and 2 for an existing game." << std::endl;
			choice = 0;
			std::cin >> choice;

		} while (choice != 1 && choice != 2);
		//Repeats until the user puts in the correct response

	}

	switch (choice)
	{
	case 1:
	{
		srand((unsigned)time(0));
		d12num1 = rand() % (11 + 1 - 0) + 1;
		d12num2 = rand() % (11 + 1 - 0) + 1;
		/* Creates both of the d12's */

		product = d12num1 * d12num2;

		d6num1 = rand() % (5 + 1 - 0) + 1;
		d6num2 = rand() % (5 + 1 - 0) + 1;
		d6num3 = rand() % (5 + 1 - 0) + 1;
		/*Creates the three dice you have to use to get as close to the Product as possible*/

		std::cout << "The first two dice are " << d12num1 << " and " << d12num2 << std::endl;
		std::cout << "Try to get as close to " << product << " as possible!" << std::endl;
		std::cout << "You must use the numbers " << d6num1 << ", ";
		std::cout << d6num2 << " ,and " << d6num3 << "!" << std::endl << std::endl;
		break;
	}
	case 2:
	{
		std::cout << "Oh.. I see...";
		do
		{
			std::cout << "What are the two d12's?" << std::endl;
			std::cin >> d12num1;
			std::cin >> d12num2;
			std::cout << std::endl;
		} while (d12num1 > 12 || d12num1 < 1 || d12num2 > 12 || d12num2 < 1);
		//Repeats until the user puts in the correct response

			// Needs statements for if a number is under 1 or a large number above 12


		std::cout << d12num1 << " and " << d12num2 << std::endl;
		std::cout << "So you have to get to around " << d12num1 * d12num2 << "." << std::endl;
		do
		{
			std::cout << "What are the d6's?" << std::endl;
			std::cin >> d6num1;
			std::cout << std::endl;
			std::cin >> d6num2;
			std::cout << std::endl;
			std::cin >> d6num3;
			std::cout << std::endl;
		} while (d6num1 > 6 || d6num1 < 1 || d6num2 > 6 || d6num2 < 1 || d6num3 > 6 || d6num3 < 1);
	//Repeats until the user puts in the correct response

			// Needs statements for if a number is under 1 or a large number above 6

		break;

	}

	}


}
