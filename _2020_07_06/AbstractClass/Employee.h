#pragma once
#include <iostream>
using namespace std;

//순수 가상함수 1개이상 있으면
//추상클래스(Abstract class)
//이 클래스는 객체를 만들 수 없다 
//상속을 전제로 한다

class Employee
{
private:
	string name;
	string companyNum;
public:
	void inputEmployee();
	void showEmployee();
	virtual void calcpay() = 0;// 순수 가상 함수
};

