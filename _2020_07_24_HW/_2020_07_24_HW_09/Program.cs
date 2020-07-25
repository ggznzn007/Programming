/*9.int배열을 10개 생성해라
  사용자로부터 10개의 값을 입력받고
  순서대로 출력하고
  총합을 구하세요*/
using System;
using System.Collections;

namespace _2020_07_24_HW_09
{
    class Program
    {
        static void Main(string[] args)
        {
            string num0; int num1;
            Console.WriteLine("10개의 값을 입력해주세요 >> ");
            num0 = Console.ReadLine();
            num1 = Convert.ToInt32(num0);
            int[] arr = new int[num1];
            for (int i = 0; i < arr.Length; i++)
            {
                Console.WriteLine("{0}",arr[i]);

            }
        }
    }
}
