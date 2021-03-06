/*
 * Person.cpp
 *
 *  Created on: 14 Feb 2017
 *      Author: emiliano
 */

#include "Dog.h"
#include <iostream>

Dog::Dog() {
	// I gave default values to the variables to avoid warnings.
	firstName = "";
	lastName = "";
	age = 0;
}	// Default constructor

Dog::Dog(std::string fName, std::string lName) {

	firstName = fName;
	lastName = lName;
	age = 0;
}

Dog::Dog(std::string fName, std::string lName, int age) {

	firstName = fName;
	lastName = lName;
	this->age = age;
}

Dog::~Dog() {}

void Dog::SayHello() {
	std::cout << "\nWoof!" << std::endl;
}
