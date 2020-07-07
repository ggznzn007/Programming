#pragma once
#define INC_NUM 200

class AccountBook
{
protected:

public:
	virtual void input() = 0;//정보 입력함수 - 날짜 수입 지출 금액 비고
	virtual void output() = 0;//입력된 정보 출력함수
	virtual void selMenu();//정보 선택함수
	virtual int calc() = 0;//입력된 금액 계산함수
};

