// Module:		CIS022_Lab_3b.cpp
// Project:		CIS022_Lab_3b
// Developer:	Morgan Shorter-McFarlane
// Date:		February 10, 2017
// Purpose:		Opens a file
//				Reads the data included in the file into string variables
//				Outputs the data in a new format
//

#include "stdafx.h"
#include <iostream>				// standard input/output library
#include <string>				// includes the definition for the string data type
#include <fstream>				// file input/output library

using namespace std;			// use standard namespaces

// main program entry point
int main()
{
	ifstream inFile;			// input file handle
	string szSourcePath =		// path of input file
		"C:\\Users\\WORK\\Desktop\\CIS022_S2017_Lab3b_data.txt";
	string crn;			// declare 9 string variables to store data from the input file
	string cname;
	string cnum;
	string dept;
	string days;
	string stime;
	string etime;
	string rm;
	string prof;

	inFile.open(szSourcePath);	// open the input file

	inFile >> crn				// read file into string variables
		>> dept
		>> cnum
		>> cname
		>> days
		>> stime
		>> etime
		>> rm
		>> prof;

	inFile.close();				// close the input file
	
	// output data in new format. Instuctions did not specify which methods to use for formatting so i used strings with spaces.
	cout << dept << " " << cnum << "\n\n";
	cout << cname << "\n\n";
	cout << days << " " << stime << "-" << etime << "\n\n";
	cout << "Room " << rm << "            " << prof << "\n\n";
	cout << "                CRN:"<< crn << endl << endl << endl;

	system("Pause");			// pause to prevent console close
	return 0;					// exit program
}

