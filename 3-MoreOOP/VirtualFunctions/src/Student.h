/*
 * Student.h
 *
 *  Created on: 15 Feb 2017
 *      Author: emiliano
 */

#ifndef STUDENT_H_
#define STUDENT_H_

/**
 * Student: Inherited class from Person
 *
 */

#include "Person.h"

class Student : public Person {
private:
	std::string course;
public:
	Student();
	Student(std::string & name, int age, std::string course);
	virtual ~Student();

	virtual void display() const;
};

#endif /* STUDENT_H_ */
