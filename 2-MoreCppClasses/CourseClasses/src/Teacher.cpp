/*
 * Teacher.cpp
 *
 *  Created on: 15 Feb 2017
 *      Author: emiliano
 */

#include <iostream>

#include "Teacher.h"

Teacher::Teacher() : age(0), phoneNumber(0) {}

Teacher::Teacher(std::string firstName, std::string lastName,
		int age, std::string address, std::string city, long phoneNumer) {

	this->firstName = firstName;
	this->lastName = lastName;
	this->age = age;
	this->address = address;
	this->city = city;
	this->phoneNumber = phoneNumber;
}

Teacher::~Teacher() {
	// TODO Auto-generated destructor stub
}

void Teacher::GradeStudent() {
	std::cout << "Student graded" << std::endl;
}

void Teacher::SitInClass(){
	std::cout << "Sitting at front of class" << std::endl;
}


void Teacher::setFirstName(std::string firstName) {
	this->firstName = firstName;
}
std::string Teacher::getFirstName() {
	return this->firstName;
}
void Teacher::setLastName(std::string lastName) {
	this->lastName = lastName;
}
std::string Teacher::getLastName() {
	return this->lastName;
}
void Teacher::setAge(int age) {
	this->age = age;
}
int Teacher::getAge() {
	return this->age;
}
void Teacher::setAddress(std::string address) {
	this->address = address;
}
std::string Teacher::getAddress() {
	return this->address;
}
void Teacher::setCity(std::string city) {
	this->city = city;
}
std::string Teacher::getCity() {
	return this->city;
}
void Teacher::setPhoneNumber(long phoneNumber) {
	this-> phoneNumber = phoneNumber;
}
long Teacher::getPhoneNumber() {
	return this->phoneNumber;
}

