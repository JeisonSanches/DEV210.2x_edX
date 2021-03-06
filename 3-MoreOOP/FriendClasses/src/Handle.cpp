/*
 * Handle.cpp
 *
 *  Created on: 15 Feb 2017
 *      Author: emiliano
 */

#include <iostream>
#include "Handle.h"

Handle::Handle() {

	body = new Body;  // Create the underlying "body" object
}

Handle::~Handle() {

	delete body;      // Delete the underlying "body" object
}

void Handle::someOperationOnBody() {

	/**
	 * someData: private variable of the class Body
	 *
	 */
	std::cout << "Some Data: " << std::endl;
	std::cout << "\n\tInitial value: " << body->someData << std::endl;
	body->someData = 42;    // Perform operations on the underlying "body" object
	std::cout << "Some Data: " << body->someData << std::endl;
}

