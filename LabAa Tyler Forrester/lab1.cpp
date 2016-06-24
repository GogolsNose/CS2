/*********************************************************************
** Program Filename: Lab Aa Main
** Author: Tyler Forrester
** Date: 6/22/2016
** Description: A program that takes user input and outputs averages and sums. 
** Input: User menu selections and an array of doubles 
** Output: Sums and Averages
** Citations: Program 6-14 Gaddis P. 352 
********************************************************************/



#include "summation.hpp"
#include "average.hpp"
#include "InputValid.hpp"
int main() {
	// Test Case One Basic Double Functionality:  Correct Answer 3.77 This also tests the summation function since it is called in the average function. 

	const int SIZE = 5;
	double test[SIZE] = { 1, 5.55, 8.7, -10, 13.6 };
	double type[SIZE];
	Average avg = Average();
	cout << "Test Case 1: " << avg.avg(test, SIZE) << endl;

	// Test Case Two: Varied Array Size Correct Answer: 20.735 This shows that answer isn't hardcoded. 

	const int SIZE1 = 10;
	double test1[SIZE1] = { 1, 5.55, 8.7, -10, 13.6, 190, 22.5, 15, -19, -20 };
	double type1[SIZE1];
	cout << "Test Case 2: " << avg.avg(test1, SIZE1) << endl;

	// Citation: Program 6-14 Gaddis P. 352 

	void displayMenu();
	int getChoice(InputValid);
	int validateInt();
	double validateDouble();
	int choice;
	Summation sum = Summation();
	InputValid valid = InputValid();
	double arrayNum[SIZE];


	do {


		displayMenu();
		choice = getChoice(valid);

		if (choice != 3) {

			cout << "Please Enter 5 Numbers: \n";
			for (int i = 0; i < SIZE; i++)
			{
				arrayNum[i] = valid.validateDouble();
			}

			switch (choice)
			{
			case 1: cout << sum.sum(arrayNum, SIZE) << " is the sum of your list" << std::endl;
				break;
			case 2: cout << avg.avg(arrayNum, SIZE) << " is the average of your list" << std::endl;
				break;



			}




			
		}



	} while (choice != 3);

	return 0;

}
	
	/*********************************************************************
	** Function: displayMenu
	** Description: Displays Menu of Options for Sum Game
	** Parameters: void
	** Pre-Conditions: Start of Program
	** Post-Conditions: getChoice()
	** Citation: Starting Out C++: Early Objects (8th Edition) Program 6-14 Gaddis P. 352 
	*********************************************************************/
	
	
	void displayMenu() {

	
		cout << "\nWelcome to LabAa\nPlease Choose a Number\n\n";
		cout << "1. Sum a List of Numbers.\n";
		cout << "2. Average a List of Numbers.\n";
		cout << "3. Quit the Program.\n\n";


	}
	/*********************************************************************
	** Function:  getChoice
	** Description: gets number of Choice
	** Parameters: void
	** Pre-Conditions: DisplayMenu()
	** Post-Conditions: Switch and Array Entry
	** Citation: Starting Out C++: Early Objects (8th Edition) Program 6-14 Gaddis P. 352
	*********************************************************************/

    
	int getChoice(InputValid valid){

		int choice;
		choice = valid.validateInt();
		while (choice < 1 || choice > 3) {

			cout << "The only valid choices are 1-3. Please re-enter.";
			choice = valid.validateInt();

		}

		return choice; 




	}

