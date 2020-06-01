
/*#include<iostream>
#include<iomanip>
#include<string>
using std::string;
using std::cout;
using std::endl;
using std::left;
using std::setw;
using std::cerr;
using namespace std;

#include "student.h"


int main()
{
	cout << "Scripting and Programming - Applications - C867" << endl;
	cout << "Programming Language: c++" << endl;
	cout << "Student ID:001292851" << endl;
	cout << "Joshua Harrison";

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

	int numStudents = 5;
	const string studentdata[5] = {
	"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
	"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
	"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
	"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
	"A5, Josh,Harrison,jhar954@wgu.edu,27,30,37,32, SOFTWARE"
	};
	

	

	

	return 0;
}
*/