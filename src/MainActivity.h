/*
 * Main.h
 *
 *  Created on: 2015��4��24��
 *      Author: Administrator
 */

#ifndef MAINACTIVITY_H_#define MAINACTIVITY_H_

#include <iostream>
#include <string>
#include "SecondActivity.h"
#include "InterfaceT.h"

using namespace std;
class MainActivity:InterfaceT{

	virtual void TZ(string str){
		cout << str <<endl;
	}

public:
    void exePeople(){
    	SecondActivity *p = new SecondActivity();
    	p->exe(this);
    }
};
#endif /* MAINACTIVITY_H_ */
