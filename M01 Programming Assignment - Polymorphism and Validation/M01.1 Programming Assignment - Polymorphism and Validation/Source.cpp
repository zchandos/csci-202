//M01.1 Programming Assignment - Polymorphism and Validation
//CSCI202
//Zachary Chandos
//Converts a user inputed roman numeral into a decimal
//Last Edited: 01/26/2023

#include <iostream>

using namespace std;


class romanType {

public:

	string romanNumeral;

	//convert roman numeral to int value
	int getValue(char numeral) {

		if (numeral == 'M') {
			return 1000;
		}
		else if (numeral == 'D') {
			return 500;
		}
		else if (numeral == 'C') {
			return 100;
		}
		else if (numeral == 'L') {
			return 50;
		}
		else if (numeral == 'X') {
			return 10;
		}
		else if (numeral == 'V') {
			return 5;
		}
		else if (numeral == 'I') {
			return 1;
		}
		else {
			return 0;
		}
	}

	//prints out the decimal number
	int printDecimalNumber() {

		//initialize final result
		int result = 0;

		//checks if input is more than one numeral
		if (romanNumeral.length() > 1) {

			//get value of first two characters in roman numeral
			char firstNumeral = romanNumeral[0];
			char secondNumeral = romanNumeral[1];
			
			//convert first two characters in roman numeral to a int value
			int firstValue = getValue(firstNumeral);
			int secondValue = getValue(secondNumeral);
			
			//compare first two values and add or subtract to final result
			if (firstValue >= secondValue) {
				//add first value to result
				result += firstValue;
			}
			else  {
				result -= firstValue;
			}

			//loop through the remaining characters in the roman numeral and compare them to the next character in the index
			for (int i = 1; i < romanNumeral.length(); i++) {

				if (getValue(romanNumeral[i]) >= getValue(romanNumeral[i + 1])){
					result += getValue(romanNumeral[i]);
				}
				else if (getValue(romanNumeral[i]) < getValue(romanNumeral[i+1])){
					result -= getValue(romanNumeral[i]);
				}
			}
			
		}
		//runs if roman numeral was only one character
		else {
			result += getValue(romanNumeral[0]);
		}
		
		return result;
		
	}
	//prints out the riman numeral
	string printRomanNumeral() {
		return romanNumeral;
	}
};
	
//main funtion, creates the object and calls the functions in the class		
int main() {
	
	//creates object of the romanType class
	romanType myRoman;

	cout << "Please enter a roman numeral you would like to convert to a decimal: " << endl;
	cin >> myRoman.romanNumeral;
	cout << "Your roman numeral is " << myRoman.printRomanNumeral() << " which is " << myRoman.printDecimalNumber() << " in decimal form!" << endl;
}