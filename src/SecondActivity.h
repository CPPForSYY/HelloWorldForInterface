/*
 * People.h
 *
 *  Created on: 2015��4��24��
 *      Author: Administrator
 */

#ifndef SECONDACTIVITY_H_
#define SECONDACTIVITY_H_

#include <iostream>
#include "InterfaceT.h"

using namespace std;
class SecondActivity{
	public:
	SecondActivity(){

	}
	public:
	 ~ SecondActivity(){
       cout<<"delete SecondActivity"<<endl;
	}

    void exe(InterfaceT *t){

    	t->TZ();
    }
};
#endif /* SECONDACTIVITY_H_ */
