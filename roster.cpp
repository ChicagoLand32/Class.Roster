#include <iostream>
#include <iomanip>
#include "roster.h"
#include "student.h"
#include "degree.h"
#include <string>
using namespace std;

Roster::Roster()
{
	this->capacity = 0;
	this->lastIndex = -1;
	this->classRosterArray = nullptr;

}

Roster::Roster(int capacity)
{
	this->capacity = capacity;
	this->lastIndex = -1;
	this->classRosterArray = new Student * [capacity];
}

void Roster::parseAdd(string row)
{
	if (lastIndex < capacity) {
		lastIndex++;
		double numDaysArray[Student::numDaysSize];











		int rhs = studentData[lastIndex].find(",");
		classRosterArray[lastIndex]->setStudentID(studentData[lastIndex].substr(0, rhs));

		int lhs = rhs + 1;
		rhs = studentData[lastIndex].find(",", lhs);
		classRosterArray[lastIndex]->setFirstName(studentData[lastIndex].substr(lhs, rhs - lhs));

		lhs = rhs + 1;
		rhs = studentData[lastIndex].find(",", lhs);
		classRosterArray[lastIndex]->setLastName(studentData[lastIndex].substr(lhs, rhs - lhs));

		lhs = rhs + 1;
		rhs = studentData[lastIndex].find(",", lhs);
		classRosterArray[lastIndex]->setEmailAddress(studentData[lastIndex].substr(lhs, rhs - lhs));

		lhs = rhs + 1;
		rhs = studentData[lastIndex].find(",", lhs);
		classRosterArray[lastIndex]->setAge(stoi(studentData[lastIndex].substr(lhs, rhs - lhs)));

		lhs = rhs + 1;
		rhs = studentData[lastIndex].find(",", lhs);
		numDaysArray[0] = stod(studentData[lastIndex].substr(lhs, rhs - lhs));

		lhs = rhs + 1;
		rhs = studentData[lastIndex].find(",", lhs);
		numDaysArray[1] = stod(studentData[lastIndex].substr(lhs, rhs - lhs));

		lhs = rhs + 1;
		rhs = studentData[lastIndex].find(",", lhs);
		numDaysArray[2] = stod(studentData[lastIndex].substr(lhs, rhs - lhs));


		/*
				lhs = rhs + 1;
				rhs = studentData[lastIndex].find(",", lhs);
				classRosterArray[lastIndex]->setDegreeProgram(studentData[lastIndex].substr(lhs, rhs - lhs));

				classRosterArray[lastIndex]->setNumDays(numDaysArray);
*/
			}
		}
		
	
void Roster::printAll()
{
	for (int i = 0; i <= lastIndex; ++i) (this->classRosterArray)[i]->print();

}

bool Roster::remove(string studentID)
{
	bool found = false;
	for (int i = 0; i <= lastIndex; ++i)
	{
		if (this->classRosterArray[i]->getStudentID() == studentID)
		{
			found = true;
			delete this->classRosterArray[i];
			this->classRosterArray[i] = this->classRosterArray[lastIndex];
			lastIndex--;
		}
	}
	return found;
}

void Roster::printAverageDays(string studentID)
{
	bool found = false;
	for (int i = 0; i <= lastIndex; ++i)
	{
		if (this->classRosterArray[i]->getStudentID() == studentID)
		{
			found = true;
			double* days = classRosterArray[i]->getNumDays();
			cout << "Average number of days per course for student ID: " << studentID << " is " << (days[0] + days[1] + days[2]) / 3 << endl;
		}
	}
}
void Roster::printInvalidEmails()
{
	for (int i = 0; i <= lastIndex; ++i) {
		string emailAddress = classRosterArray[i]->getEmailAddress();
		if ((emailAddress.find("@") == string::npos) || (emailAddress.find(" ") != string::npos) || (emailAddress.find(".") == string::npos))
			cout << "The email address for student: " << classRosterArray[i]->getfirstName() << " " << classRosterArray[i]->getLastName() << " is not valid: " << emailAddress << endl;
	}
}
/*void Roster::printDegree(DegreeProgram d)
{
	cout << "Printing students by Degree type " << degreeTypesStrings[d] << "\n";
	for (int i = 0; i <= lastIndex; ++i) {
		if (this - classRosterArray[i]->getDegree() == d) this ->classRosterArray[i]->print();
	}
}
*/
Roster::~Roster()
{
	for (int i = 0; i < numStudents; ++i)
	{
		delete this->classRosterArray[i];
	}
	delete this;
}














	



