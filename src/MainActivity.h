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

	virtual void TZ(){
		cout << "mainActivity" <<endl;
	}
//    void test(){
//    	cout<<"mainActivity"<<endl;
//    }
public:
    void exePeople(){
    	//MainActivity.cpp���뵽secondActivity.cpp��ʱ�򣬰��Լ���ʵ���˽ӿڣ������ˣ�SecondActivity.cpp,
    	//���Ե�secondActivity��cppִ�е�ʱ��ص�exe().
    	SecondActivity *p = new SecondActivity();
    	p->exe(this);
    }

};
#endif /* MAINACTIVITY_H_ */

// ����
// ������д���෽������̬���أ���̬��һ����,C++��Ҫ�Ѻ���д���麯��
// ���麯�� ,�൱��java���Եĳ��󷽷�����Ҫ����ȥʵ��
