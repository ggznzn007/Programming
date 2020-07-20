using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace _39_Random
{
    class Program
    {
        static void Main(string[] args)
        {
            Random R = new Random();
            for (int i = 0; i < 100; i++)
            {
                Console.CursorLeft = R.Next(80);//0 ~ 79
                Console.CursorTop = R.Next(24);// 0 ~ 23
                Console.Write('*');
            }
        }
    }
}
