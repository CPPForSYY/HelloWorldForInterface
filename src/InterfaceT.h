/*
 * Interface.h
 *
 *  Created on: 2015��4��24��
 *      Author: Administrator
 */

#ifndef INTERFACET_H_
#define INTERFACET_H_


#include <iostream>
#include <string>

using namespace std;

class InterfaceT{
public:
	InterfaceT(){}
	virtual ~ InterfaceT(){};

public:
	virtual void TZ(string string)=0;
};


#endif /* INTERFACET_H_ */
