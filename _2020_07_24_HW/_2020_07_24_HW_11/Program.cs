/*11. 정수 10개를 입력받아 배열에 저장하고,
이 정수중에서 2의 배수와 3의 배수를 출력하세요*/
using System;

namespace _2020_07_24_HW_11
{
    class Program
    {
        static void Main(string[] args)
        {
            
            Console.WriteLine("정수 10개를 입력해주세요>> ");
            int num = Int32.Parse(Console.ReadLine());
            int[] arr = new int[10];
            for( int i=0 ;i<=arr.Length;i++)
            {
                if (num % 2 == 0)
                {
                    Console.WriteLine(arr[i] +" ");
                }
                else if (num % 3 == 0)
                {
                    Console.WriteLine(arr[i] + " ");
                }
            }
        }
    }
}

