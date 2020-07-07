#include "AccountBook.h"
#include <iostream>

using namespace std;

void AccountBook::input()
{
	
}//정보 입력함수 - 날짜 수입 지출 금액 비고
void AccountBook::output()
{

}//입력된 정보 출력함수
void AccountBook::selMenu()
{
    int num;
    cout << " ###### 구멍난 가계부 프로그램 ###### " << endl
        << "--------------------------------------------" << endl
        << " 1.[I]nput           [가계부에 정보를 입력합니다]" << endl
        << " 2.[O]utput          [가계부에 입력된 정보를 출력합니다]" << endl
        << " 3.[E]xit            [프로그램을 종료합니다]" << endl
        << "--------------------------------------------" << endl;
    cin >> num;
}//정보 선택함수
int AccountBook::calc()
{

}//입력된 금액 계산함수
