// MathTutor.cpp : Defines the entry point for the console application.
//

#pragma once


#include <SDKDDKVer.h>
#include <stdio.h>
#include <tchar.h>


#include <iostream>
#include <cstdlib>
#include <string>
#include <time.h>
#include <cmath>
using namespace std;

int RandInt(int min, int max)	//random number generation for module use
{	
	int sum;
	sum = (rand() % (max - min + 1)) + min;
	return sum;
}

bool DoubleTryParse(string val)	//parse validation for double input
{
	try
	{
		stod(val);
		return true;
	}
	catch(exception ex)
	{
		return false;
	}
}

bool IntTryParse(string val)	//parse validation for integer input
{
	try
	{
		stoi(val);
		return true;
	}
	catch (exception ex)
	{
		return false;
	}
}

void Mult()	//multiplication module
{
	const int MIN = 1;	//set minimum and maximum values for problem values
	const int MAX = 50;
	int num1, num2;	//placeholders for random numbers
	string answer;	//string to hold user input
	num1 = RandInt(MIN, MAX);	//generate random numbers
	num2 = RandInt(MIN, MAX);
	cout << "\nMultiply " << num1 << " by " << num2 << ": ";
	getline(cin, answer);
	if (IntTryParse(answer))	//parsing function to determine if user entered a number
	{
		if (stoi(answer) == (num1 * num2))	//check if user input is correct
		{
			cout << "\nCorrect!  The answer is: " << (num1 * num2);
		}
		else
		{
			cout << "\nIncorrect!  The answer is: " << (num1 * num2);
		}
	}
}

void Div()	//division module
{
	const int MIN = 1;	//set minimum and maximum range for random values
	const int MAX = 100;
	int num1, num2;
	string answer;
	num1 = RandInt(MIN, MAX);	//generate random numbers
	num2 = RandInt(MIN, MAX);
	cout << "\nDivide " << num1 << " by " << num2 << "(round to two decimal places): ";
	getline(cin, answer);
	if (DoubleTryParse(answer))	//ensure user input is a double
	{
		if (stod(answer) == (floor(100 * (static_cast<double>(num1) / static_cast<double>(num2))) / 100))	//round answer to two places
		{
			cout << "\nCorrect!  The answer is: " << floor(100*(static_cast<double>(num1) / static_cast<double>(num2))) / 100 <<
				" (rounded to two decimal places)";
		}
		else
		{
			cout << "\nIncorrect!  The answer is: " << floor(100 * (static_cast<double>(num1) / static_cast<double>(num2))) / 100 <<
				" (rounded to two decimal places)";
		}
	}
}

void Add()	//addition module
{
	const int MIN = 100;	//set minimum and maximum range for random values
	const int MAX = 1000;
	int num1, num2;
	num1 = RandInt(MIN, MAX);	//generate random numbers
	num2 = RandInt(MIN, MAX);
	string answer;
	cout << "\nAdd " << num1 << " to " << num2 << ": ";
	getline(cin, answer);
	if (IntTryParse(answer))	//validate user input as an integer
	{
		if (stoi(answer) == num1 + num2)	//check user input is correct
		{
			cout << "\nCorrect!  The answer is: " << num1 + num2 << endl;
		}
		else
		{
			cout << "\nIncorrect!  The answer is: " << num1 + num2 << endl;
		}
	}
}

void Subtract()	//subtraction module
{
	const int MIN = 100;	//set minimum and maximum values for random numbers
	const int MAX = 1000;
	int num1, num2;
	num1 = RandInt(MIN, MAX);	//generate random numbers
	num2 = RandInt(MIN, MAX);
	string answer;
	cout << "\nSubtract " << num2 << " from " << num1 << ": ";
	getline(cin, answer);
	if (IntTryParse(answer))	//validate user input as an integer
	{
		if (stoi(answer) == num1 - num2)	//check user input is correct
		{
			cout << "\nCorrect!  The answer is: " << num1 - num2 << endl;
		}
		else
		{
			cout << "\nIncorrect!  The answer is: " << num1 - num2 << endl;
		}
	}
}

int main()
{
	unsigned seed = time(0);	//seed value for our random number
	srand(seed);	//seed the random object
	int choice = 0;	//initialize menu choice
	bool another = true;	//flag to continue solving problems
	while (another) 
	{
		//user displayed menu
		cout << "\nMath Tutor - Please choose the type of problem:\n\t1. Addition\n\t2. Subtraction\n\t3. Division" <<
			"\n\t4. Multiplication\n\t5. Quit\n";
		while (!choice)	//validation for menu selection, uses initial choice value of 0 as false
		{			
			try		//error checking block if the user enters invalid input
			{
				string userChoice;	//string to hold user input
				cout << "\nEnter menu option: ";
				getline(cin, userChoice);	//retrieve user input
				if (stoi(userChoice) > 0 && stoi(userChoice) < 6)	//assigns choice a value if a valid menu option
					choice = stoi(userChoice);
			}
			catch (exception ex)
			{
				cout << "\nPlease enter a valid menu option: ";
				choice = 0;	//reset choice to 0 for use as false flag if an exception is caught
			}
		}
		switch (choice)	//switch to determine which module we drop into
		{
		case 1: Add();	//cases are modularized for readability
			break;
		case 2: Subtract();
			break;
		case 3: Div();
			break;
		case 4: Mult();
			break;
		case 5: break;	//exit the switch if the user chooses exit
		}
		choice = 0;	//reset choice to reenter menu if another problem is desired
		cout << "\nWould you like another problem? ";
		string again;
		getline(cin, again);
		if (again == "y" || again == "Y" || again == "yes" || again == "Yes")	//check if user desires 
			another = true;														//additional problems
		else
			break;	//exit the main loop if the user is finished
	}	
    return 0;
}