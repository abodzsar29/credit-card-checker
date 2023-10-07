Andrew Bodzsar 19.6.2022

Credit Card Checker Program

This project was created based on the specifications found under the 
'Program for credit card number validation' page on GeeksforGeeks.org.
URL: https://www.geeksforgeeks.org/program-credit-card-number-validation/ 
The Luhn algorithm was implemented to achieve the desired outcome, based on the
page found under https://www.geeksforgeeks.org/luhn-algorithm/

Requirements:

Write a program that prompts the user to enter a credit card number as a long integer and Display whether that card is valid or invalid.
Credit card numbers follow certain patterns. 
A credit card number must have between 13 and 16 digits. It must start with:

4 for Visa cards
5 for Master cards
37 for American Express cards
6 for Discover cards

The Luhn Check (Mod 10 Check) is used to carry out this verification. This process is the following:

Step 1. Double every second digit from right to left. If doubling of a digit results in a 
two-digit number, add up the two digits to get a single-digit number (like for 12:1+2, 18=1+8).
Step 2. Now add all single-digit numbers from Step 1. 
4 + 4 + 8 + 2 + 3 + 1 + 7 + 8 = 37
Step 3. Add all digits in the odd places from right to left in the card number. 
6 + 6 + 0 + 8 + 0 + 7 + 8 + 3 = 38
Step 4. Sum the results from Step 2 and Step 3. 37 + 38 = 75
Step 5. If the result from Step 4 is divisible by 10, the card number is valid; otherwise, it is invalid. 

