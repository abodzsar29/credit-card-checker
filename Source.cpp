#include <iostream>
#include <string>
using namespace std;

void logic(string initialStr)
{
	string strContainer = initialStr;
	int strLength = strContainer.length(); // Assigning the number of entered digits to a variable
	try { // Testing the length of the entered value
		if (strLength < 13 || strLength > 16) { // If number of entered digits is not between 13 and 16, throw exception
			throw strLength; 
		}

		// Step 1
		int i = initialStr.length() - 2; // Starting processing from second-to-last digit from the right
		while (i >= 0) // to hit every second digit as per requirements
		{
			int numContainer = stoi(string(1, initialStr[i])); // Convert the character to an integer
			numContainer *= 2; // Double the digit's value as per requirements

			// If doubling results in a two-digit number, add up the two digits
			if (numContainer > 9)
			{
				numContainer %= 10; 
				numContainer += 1;
			}
			char pchar = numContainer + '0'; // Convert the integer back to a character by adding 0 for ASCII
			strContainer[i] = pchar; // Update the processed string with the new digit
			i -= 2;
		}

		// Step 2, 3 and 4 are simplified by the serial summation of numbers		
		int sumContainer = 0;
		for (int x = 0; x < initialStr.length(); x++) {
			int digitContainer = stoi(string(1, strContainer[x]));
			sumContainer += digitContainer;
		}

		// Step 5
		if (sumContainer % 10 == 0) {
			cout << "This is a valid card!" << endl;
		}
		else {
			cout << "This is not a valid card!" << endl;;
		}
	}
	catch (int x) {
		cout << "Error - " << x << " digits are too short for a credit card." << endl;
	}
}

int main()
{
	logic("799273987131");
	logic("379354508162306");
	logic("4388576018402626");
}


