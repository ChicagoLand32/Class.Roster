#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include "degree.h"
#include "roster.h"
using namespace std;



class Student
{
private:
	string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	double* numDays;
	DegreeProgram degree;

public:
	const static int numDaysSize = 3;
	
	Student();
	Student(string studentId, string firstName, string LastName, string emailaddress, int age, double numDays[], DegreeProgram degree);

	string getStudentID();
	string getfirstName();
	string getLastName();
	string getEmailAddress();
	int getAge();
	double* getNumDays();
	DegreeProgram getDegree();

	void setStudentID(string id);
	void setFirstName(string firstName);
	void setLastName(string lastName);
	void setEmailAddress(string emailAddress);
	void setAge(int age);
	void setNumDays(double numDays[]);
	void setDegreeProgram(DegreeProgram d);
	void print();


	~Student();

};