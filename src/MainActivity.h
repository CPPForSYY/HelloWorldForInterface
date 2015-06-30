/*
 * Main.h
 *
 *  Created on: 2015年4月24日
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
    	//MainActivity.cpp进入到secondActivity.cpp的时候，把自己（实现了接口）传给了，SecondActivity.cpp,
    	//所以当secondActivity。cpp执行的时候回调exe().
    	SecondActivity *p = new SecondActivity();
    	p->exe(this);
    }

};
#endif /* MAINACTIVITY_H_ */

// 扩充
// 子类重写父类方法，动态加载，多态是一样的,C++需要把函数写成虚函数
// 纯虚函数 ,相当于java语言的抽象方法，需要子类去实现
