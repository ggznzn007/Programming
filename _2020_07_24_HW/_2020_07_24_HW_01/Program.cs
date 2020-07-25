/*1. 영문자를 입력받습니다
   소문자인지 대문자인지 판별하세요(조건 연산자를 사용하세요)*/
using System;

namespace _2020_07_24_HW_01
{
    class Program
    {
        static void Main(string[] args)
        {
            string a;
            char b;
            Console.WriteLine("영문자를 1개 입력해주세요>> ");
            a = Console.ReadLine();
            b = Convert.ToChar(a);
            Console.WriteLine((b >= 65  && b <= 90) ? "대문자" : "소문자");

        }
    }
}
