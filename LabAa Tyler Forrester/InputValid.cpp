/*********************************************************************
** Program Filename: InputValid 
** Author: Tyler Forrester
** Date: 6/22/2016
** Description: A program that takes user input and outputs averages and sums.
** Input: User Input
** Output: Verified types
** Citations: "Using cin to get user input." Username "Zaita" Dec 1, 2008 at 6:15pm http://www.cplusplus.com/forum/articles/6046/
********************************************************************/


#include "InputValid.hpp"

InputValid::InputValid()
{
	input = "";
}
/*********************************************************************
** Function:  validateInt
** Description: validates numbers
** Parameters: void
** Pre-Conditions: getChoice()
** Post-Conditions: Switch
** Citation: "Using cin to get user input." Username "Zaita" Dec 1, 2008 at 6:15pm http://www.cplusplus.com/forum/articles/6046/
*********************************************************************/
int InputValid::validateInt()
{

		int myNumber = 0;

		while (true) {
			// cout << "Please enter a valid number: ";
			
			getline(cin, input);

			// This code converts from string to number safely.
			stringstream myStream(input);
			if (myStream >> myNumber)
				break;
			cout << "Invalid number, please try again" << endl;
		}
		return myNumber;

	
}
/*********************************************************************
** Function:  validateDouble
** Description: gets validates array Entries as doubles
** Parameters: void
** Pre-Conditions: getChoice()
** Post-Conditions: Switch
** Citation: "Using cin to get user input." Username "Zaita" Dec 1, 2008 at 6:15pm http://www.cplusplus.com/forum/articles/6046/
*********************************************************************/

double InputValid::validateDouble()
{

	double myNumber = 0.0;

	while (true) {
		// cout << "Please enter a valid number: ";
	
		getline(cin, input);

		// This code converts from string to number safely.
		stringstream myStream(input);
		if (myStream >> myNumber)
			break;
		cout << "Invalid number, please try again" << endl;
	}
	return  myNumber;

  
}
/*********************************************************************
** Function:  validateString
** Description: Allows a string to be entered with spaces
** Parameters: void
** Pre-Conditions: variable
** Post-Conditions: variable
** Citation: "Using cin to get user input." Username "Zaita" Dec 1, 2008 at 6:15pm http://www.cplusplus.com/forum/articles/6046/
*********************************************************************/ 
string InputValid::validateString()
{
	
	getline(cin, input);
	return input;
}

/*********************************************************************
** Function:  validateChar
** Description: Allows a single char to be entered
** Parameters: void
** Pre-Conditions: variable
** Post-Conditions: variable
** Citation: "Using cin to get user input." Username "Zaita" Dec 1, 2008 at 6:15pm http://www.cplusplus.com/forum/articles/6046/
*********************************************************************/

char InputValid::validateChar()
{
	char myChar = { 0 };

	while (true) {
	
		getline(cin, input);

		if (input.length() == 1) {
			myChar = input[0];
			break;
		}

		cout << "Invalid character, please try again" << endl;
	}

}
	
