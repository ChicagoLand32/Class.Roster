#include <iostream>
#include <iomanip>
#include "student.h"
#include <string>
using std::cout;
using std::endl;

Student::Student()
{
	this->studentID    = "";
	this->firstName    = "";
	this->lastName     = "";
	this->emailAddress = "";
	this->age          = 0;
	this->numDays = new double[numDaysSize];
	for (int i = 0; i < numDaysSize; ++i) this->numDays[i] = 0;
	this->degree = UNDECIDED;


}

Student::Student(string studentID, string firstName, string lastName, string emailAddress, int age, double numDays[], DegreeProgram degree)
{
	this->studentID = studentID;
	this->firstName = firstName;
	this->lastName = lastName;
	this->emailAddress = emailAddress;
	this->age = age;
	this->numDays = new double[numDaysSize];
	for (int i = 0; i < numDaysSize; ++i) this->numDays[i] = 0;
	this->degree = degree;

}

string Student::getStudentID()
{
	return studentID;
}
string Student::getfirstName()
{
	return firstName;
}
string Student::getLastName()
{
	return lastName;
}
string Student::getEmailAddress()
{
	return emailAddress;
}
int Student::getAge()
{
	return age;
}
double* Student::getNumDays()
{
	return numDays;
}
DegreeProgram Student::getDegree()
{
	return degree;
}

void Student::setStudentID(string studentID)
{
	this->studentID = studentID;
}
void Student::setFirstName(string firstName)
{
	this->firstName = firstName;
}
void Student::setLastName(string lastName)
{
	this->lastName = lastName;
}
void Student::setEmailAddress(string emailAddress)
{
	this->emailAddress = emailAddress;
}
void Student::setAge(int age)
{
	this->age = age;
}
void Student::setNumDays(double numDays[])
{
	this->numDays = new double[numDaysSize];
	for (int i = 0; i < 3; ++i)
		this->numDays[i] = numDays[i];
}
void Student::setDegreeProgram(DegreeProgram d)
{
	this->degree = d;
}

void Student::print()
{
	cout << studentID << endl;
	cout << "First name: " << firstName << "\t";
	cout << "Last Name: " << lastName << "\t";
	cout << "Age: " << age << "\t";
	cout << "daysInCourse: {" << numDays[0] << ", " << numDays[1] << ", " << numDays[2] << "}\t";
	cout << "Degree Program: " << degreeTypesStrings[getDegree()];

}

Student::~Student()
{
	if (numDays != nullptr) {
		delete[] numDays;
		numDays = nullptr;
	}
}

