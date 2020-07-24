/*10.int 배열로 10개의 공간을 생성하라
  1 ~ 10까지의 임의의 수를 저장하고
  홀수만 골라서 출력하라*/
using System;

namespace _2020_07_24_HW_10
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] arr = new int[]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
            for(int i = 0;i<=arr.Length;i++)
            {
                if (i % 2 != 0)
                    Console.WriteLine("{0}", i);
            }
        }
    }
}
