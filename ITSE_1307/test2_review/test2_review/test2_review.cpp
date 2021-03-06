// test2_review.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <string>
using namespace std;

/*
In a right triangle, the square of the length of one side is equal to the sum of the squares of the lengths of the other two sides. Write a program that prompts the user to enter the lengths of threes sides of a triangle and then outputs a message indicating whether the triangle is a right triangle.

Write a program that prompts the user to input a positive integer only. It should then output a message indicating whether the number is a prime number.

Note: An even number is prime if it is 2. An odd integer is prime if it not divisible by any off integer less than or equal to the square root of the number.

Write a program that prompts the user to input a sequence of characters and outputs the number of vowels. Make a function called isVowel that returns true if the given character is a vowel and otherwise returns false.
*/

bool isPrime(int intNumber) {
	int intSquare = sqrt(intNumber);

	if (intNumber < 0) {
		return false;
	}

	if (intNumber == 2) {
		return true;
	}

	if (intNumber % 2 == 0) {
		return false;
	}

	for (int intDivideBy = intSquare; intDivideBy > 2; intDivideBy--) {
		/*
		cerr << intNumber << "\t"
			<< intDivideBy << "\t"
			<< (intNumber % intDivideBy) << endl;
		//*/
		if (intNumber % intDivideBy == 0) {
			return false;
		}
	}
	/*
	int intDivideBy = intSquare;
	do {
		//Logic Here
		intDivideBy--;
	} while(intDivideBy > 2);
	
	*/
	return true;
}

bool isRightTriangle(int intAlpha, int intBeta, int intCharlie) {
	return ( ( pow(intAlpha, 2) + pow(intBeta, 2) ) == pow(intCharlie, 2) );
}


bool isVowel(char chrLetter) {
	switch (toupper(chrLetter)) {
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		case 'Y':
			return true;
	}
	return false;
}

int getIntegerFromUser(string strMessage) {
	int intUserInput = 0;
	cout << strMessage;
	cin >> intUserInput;
	return intUserInput;
}

void questionOne() {
	int intSideOne = getIntegerFromUser("Enter the first length of the triangle: ");
	int intSideTwo = getIntegerFromUser("Enter the second length of the triangle: ");
	int intSideThree = getIntegerFromUser("Enter the third length of the triangle: ");

	if (isRightTriangle(intSideOne, intSideTwo, intSideThree)) {
		cout << "This is a right triangle." << endl;
	}
	else {
		cout << "This is NOT a right triangle." << endl;
	}
}

void questionTwo() {
	int intPrime = getIntegerFromUser("Enter a number greater than 0: ");
	if (isPrime(intPrime)) {
		cout << "This is a prime number." << endl;
	}
	else {
		cout << "This is NOT a prime number." << endl;
	}
}

void questionThree() {
	char chrInput = ' ';
	int intNumberOfVowels = 0;
	cout << "Enter a sequence of characters (* to quit): ";
	do {
		cin >> chrInput;
		if (isVowel(chrInput)) {
			intNumberOfVowels++;
		}
	} while (chrInput != '*');
	cout << "There were " << intNumberOfVowels << " in the characters you entered." << endl;
}

int main()
{
	questionOne();
	questionTwo();
	questionThree();
    return 0;
}

