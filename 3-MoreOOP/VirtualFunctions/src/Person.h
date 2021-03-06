/*
 * Person.h
 *
 *  Created on: 15 Feb 2017
 *      Author: emiliano
 */

#ifndef PERSON_H_
#define PERSON_H_

/**
 * Person: base class
 *
 */

#pragma once
#include <iostream>
#include <string>

class Person {
private:
	std::string name;
protected:
	int age;
public:
	Person();
	Person(std::string & name, int age);
	/**
	 * The virtual modifier is used when an OVERRIDING wants to be implemented.
	 * If the same function is declared in a child class (eg. class Student,
	 * function display()), it will overlap the instantiation.
	 *
	 * When you use virtual function, you also have to declare the virtual
	 * destructor to eliminate the object.
	 *
	 */
	virtual ~Person();
	virtual void displayInfo() const;
};

#endif /* PERSON_H_ */
