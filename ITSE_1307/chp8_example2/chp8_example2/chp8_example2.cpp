// chp8_example2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

const int INT_ROWS = 12;
const int INT_COLUMNS = 6;

void printSeats(char arySeats[][INT_COLUMNS], int intRows) {
	for (int intRow = 0; intRow < intRows; intRow++) {
		cout << "Row " << (intRow + 1);
		for (int intColumn = 0; intColumn < INT_COLUMNS; intColumn++) {
			cout << "\t";
			cout << arySeats[intRow][intColumn];
		}
		cout << endl;
	}
}

void clearSeats(char arySeats[][INT_COLUMNS], int intRows) {
	for (int intRow = 0; intRow < intRows; intRow++) {
		for (int intColumn = 0; intColumn < INT_COLUMNS; intColumn++) {
			arySeats[intRow][intColumn] = '-';
		}
	}
}

void fillSeat(char arySeats[][INT_COLUMNS], int intRows, int intRow, int intColumn) {
	arySeats[intRow][intColumn] = 'X';
}

int main()
{
	char arySeats[INT_ROWS][INT_COLUMNS];
	printSeats(arySeats, INT_ROWS);
	clearSeats(arySeats, INT_ROWS);
	printSeats(arySeats, INT_ROWS);
	fillSeat(arySeats, INT_ROWS, 1, 1);
	printSeats(arySeats, INT_ROWS);
    return 0;
}

