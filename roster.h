#pragma once



#include <iostream>
#include <list>
#include <string>
#include <iomanip>
#include "student.h"










const int numStudents = 5;

string studentData[numStudents] = {


	"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
	"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
	"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
	"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
	"A5, Josh,Harrison,jhar954@wgu.edu,27,30,37,32, SOFTWARE"
};
class Roster {
public:
	int lastIndex;
	int capacity;
	Student** classRosterArray;
	Roster();
	Roster(int capacity);
	void parseAdd(string datarow);
	void printAll();
	bool remove(string studentID);
	void printAverageDays(string studentID);
	void printInvalidEmails();
	void printDegree(DegreeProgram d);
	~Roster();
	
};



	





