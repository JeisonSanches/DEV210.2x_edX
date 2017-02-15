//============================================================================
// Name        : FriendClasses.cpp
// Author      : Ing. Emiliano Borghi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include "Handle.h"

int main() {

	/**
	 * Client code just works with the "handle" class - the client
	 * code has no knowledge of the underlying "body" class.
	 *
	 */

	Handle h;
	h.someOperationOnBody();


	return 0;
}
