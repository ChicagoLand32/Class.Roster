
#include<iostream>
#include<iomanip>
#include<string>
using std::string;
using std::cout;
using std::endl;
using namespace std;

#include "student.h"


int main()
{
	cout << "Scripting and Programming - Applications - C867" << endl;
	cout << "Programming Language: c++" << endl;
	cout << "Student ID:001292851" << endl;
	cout << "J";

	Roster* classRoster = new Roster(numStudents);
	cout << "Parsing data and adding Students:\t";
		for (int i = 0; i < numStudents; ++i)
	{
		classRoster->parseAdd(studentData[i]);
	}
		cout << "Done.\n";
		cout << "Displaying all Students:\n";
		classRoster->printAll();

		cout << "Printing Invalid Emails: ";
		classRoster->printInvalidEmails();

		classRoster->printAverageDays("A1");

		cout << "Removing A3:\n";
		if (classRoster->remove("A3")) classRoster->printAll();
		else cout << "Student ID not found!\n";

		cout << "Removing A3:\n";
		if (classRoster->remove("A3")) classRoster->printAll();
		else cout << "Student ID not found!\n";

		classRoster->printDegree(SOFTWARE);
		system("pause");





	classRoster->printAll();

	
	

	

	

	return 0;
}
