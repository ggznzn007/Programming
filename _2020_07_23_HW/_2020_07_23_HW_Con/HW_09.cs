/*9. 5를 입력하면 아래처럼 그림을 출력하세요
*
o*
oo*
ooo*
oooo**/
using System;

namespace HW_09
{
    class Program
    {
        static void Main(string[] args)
        {           
           int Five = Convert.ToInt32(Console.ReadLine());
           for (int i = 1; i <= Five; i++)
            {
                for (int j = 1; j <= i; j++)
                {
                    if (j == i)
                    {
                        Console.Write("*");
                    }
                    else
                    {
                        Console.Write("o");
                    }
                }Console.WriteLine();
                
            }
        }
    }
}



