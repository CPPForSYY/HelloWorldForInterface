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
	virtual void TZ()=0;
//	virtual void test(){};
};


#endif /* INTERFACET_H_ */
