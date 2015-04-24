//============================================================================
// Name        : HelloWorld3.cpp
// Author      : sunyiyan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
#include "MainActivity.h"

using namespace std;


int main() {
	MainActivity *ma = new MainActivity();
	ma->exePeople();
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
