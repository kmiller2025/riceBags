//One metric ton is approximately 2,205 pounds. Write a program that prompts the user to input the amount of rice, in pounds, a bag can hold. 
//The program outputs the number of bags needed to store one metric ton of rice. *Use appropriate constants.

// Kai Miller
// Date: 9-12-22
// Program Title: Rice Bags
// Program Description: Prompts the user to input the amount of rice, in pounds, a bag can hold and outputs the number of bags needed to store one metric ton of rice.

#include <iostream>
#include <string>


using namespace std;

// Named constants
const double METRIC = 2205;

int main()
{

	// Variable declaration
	double rice;
	double total;

	//Program title and description for the user
	cout << "Title: Rice Bags" << endl;
	cout << "Description: Prompts the user to input the amount of rice, in pounds, a bag can hold and outputs the number of bags needed to store one metric ton of rice." << endl;

	// User input
	cout << "Enter the amount of rice, in pounds, a bag can hold." << endl;
	cin >> rice;

	// Calculations
	total = 2205 / rice;

	// Output to the screen
	cout << "It would take " << total << " bags to store one metric ton of rice." << endl;

	return 0;
}