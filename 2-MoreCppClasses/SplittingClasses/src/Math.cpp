/*
 * Math.c
 *
 *  Created on: 14 Feb 2017
 *      Author: emiliano
 */

#include "Math.h"

int Math::pow(int base, int exp) {

	int result = 1;

	for (int i = 0; i < exp; i++) {

		result *= base;
	}

	return result;
}

