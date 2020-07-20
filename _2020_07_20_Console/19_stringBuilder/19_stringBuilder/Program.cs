using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace _19_stringBuilder
{
    class Program
    {
        static void Main(string[] args)
        {
            StringBuilder str =
                new StringBuilder("알파벳 : ", 40);
            for (char c = 'a'; c <= 'z'; c++)
            {
                str.Append(c);
            }
            str[10] = '_';
            Console.WriteLine(str);
        }
    }
}
