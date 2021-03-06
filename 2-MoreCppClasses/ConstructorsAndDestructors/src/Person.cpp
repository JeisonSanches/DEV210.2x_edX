/*
 * Person.cpp
 *
 *  Created on: 14 Feb 2017
 *      Author: emiliano
 */

#include "Person.h"
#include <iostream>

Person::Person() {
	// I gave default values to the variables to avoid warnings.
	firstName = "";
	lastName = "";
	age = 0;
}	// Default constructor

Person::Person(std::string fName, std::string lName) {

	firstName = fName;
	lastName = lName;
	age = 0;
}

Person::Person(std::string fName, std::string lName, int age) {

	firstName = fName;
	lastName = lName;
	this->age = age;
}

Person::~Person() {}

void Person::SayHello() {
	std::cout << "\nHi, my name is " << this->firstName
			<< " " << this->lastName << "and I have " << this->age
			<< " years old." << std::endl;
}
