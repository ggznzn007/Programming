﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _14_for
{
    class Program
    {
        static void Main(string[] args)
        {
            int num = 0;
            for (; num < 10 ;)
            {
                ++num;
                Console.WriteLine("나무를 {0}번 찍었습니다", num);
            }
        }
    }
}