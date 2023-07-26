/*This project was created based on the specifications found under the 
'Program for credit card number validation' page on GeeksforGeeks.org.
URL: https://www.geeksforgeeks.org/program-credit-card-number-validation/ 
The Luhn algorithm was implemented to achieve the desired outcome, based on the
page found here: https://www.geeksforgeeks.org/luhn-algorithm/ */


#include <iostream>
#include <string>
using namespace std;

void logic(string initialStr)
{
	string strContainer = initialStr;
	int strLength = strContainer.length(); // Assigning the number of entered digits to a variable
	try { // Adding a try block to allow the testing of the length of the entered value
		if (strLength < 13 || strLength > 16) { // Checking that the number of entered digits is between 13 and 16
			throw strLength;
		}
		int i = initialStr.length() - 2;
		while (i >= 0)
		{
			int numContainer = stoi(string(1, initialStr[i]));
			numContainer *= 2;
			if (numContainer > 9)
			{
				numContainer %= 10;
				numContainer += 1;
			}
			char pchar = numContainer + '0';
			strContainer[i] = pchar;
			i -= 2;
		}
		int sumContainer = 0;
		for (int x = 0; x < initialStr.length(); x++) {
			int digitContainer = stoi(string(1, strContainer[x]));
			sumContainer += digitContainer;
		}

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


