/*
 * Teacher.h
 *
 *  Created on: 16 Feb 2017
 *      Author: emiliano
 */

#ifndef TEACHER_H_
#define TEACHER_H_

#pragma once

#include "Person.h"

class Teacher : public Person {
public:
	Teacher();
	Teacher(const std::string &, const std::string &, int, const std::string &, long);
	virtual ~Teacher();

	virtual void OutputAge();
	// Pure virtual
	virtual void OutputIdentity();
};

#endif /* TEACHER_H_ */
