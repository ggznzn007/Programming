/*8. 두 개의 정수를 입력받습니다.
    두 정수를 포함한 사이의 정수의 합을 출력하세요
   예를 들면 3과 5를 입력하면 3+4+5의 합을 출력하면 됩니다.*/
using Microsoft.Win32.SafeHandles;
using System;

namespace HW_08
{
    class Program
    {
        static void Main(string[] args)
        {
            int x = Convert.ToInt32(Console.Read());
            int j = Convert.ToInt32(Console.ReadLine());
            int sum = 0;
            int i = x;
           
           for(i=0;i<=j;i++)
            {
                sum +=i;
                
            }
            Console.Write(sum);
        }
    }
}

/*for(i=0;i<=j;i++)
            {
                sum +=i;
                
            }
            Console.Write(sum);*/