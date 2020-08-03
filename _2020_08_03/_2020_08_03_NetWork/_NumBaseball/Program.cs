using System;

namespace _NumBaseball
{
    class Program
    {
        static void Main(string[] args)
        {
            Test test = new Test();
        }
    }

    class Test
    {
        int[] answer;
        public Test()
        {
            SetAnswer();
            Console.WriteLine("<< 숫자야구게임 >> \n 세자리수를 입력해서 숫자를 맞춰주세요!");
            while (true)
            {
                Console.Write("\n입력 : ");
                string input = Console.ReadLine();
                int inputNum = 0;
                if (!int.TryParse(input, out inputNum) || (inputNum < 100 || inputNum > 999))
                {
                    Console.WriteLine("잘못된 값을 입력하셨습니다. 3자리의 정수를 쓰세요!");
                    continue;
                }
                if (IsCorrectAnswer(inputNum))
                {
                    Console.WriteLine("\n정답입니다!!! 축하합니다!!!\n 게임을 종료합니다");
                    Console.ReadKey();
                    break;
                }
            }
        }

        public void SetAnswer()
        {
            int k = 0;
            answer = new int[3];
            while (k < 3)
            {
                bool isSet = true;
                answer[k] = new Random().Next(1, 10);
                for (int i = k - 1; i >= 0; i--)
                {
                    if (answer[k] == answer[i])
                    {
                        isSet = false;
                        break;
                    }
                }
                if (isSet)
                {
                    k++;
                }
            }
        }
        /// <summary>
        /// 콘솔에 점수 표시하고 만약 정답이면 true를 리턴함
        /// </summary>
        /// <param name="inputNum">세자리정수여야함 무조건!</param>
        /// <returns>정답이면 true</returns>
        public bool IsCorrectAnswer(int inputNum)
        {
            int s = 0;
            int b = 0;
            int[] input = { inputNum % 10, (inputNum / 10) % 10, (inputNum / 100) % 10 };
            //100의자리 10의자리 1의자리 수 보정값
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    if (input[i] == answer[j])
                    {
                        if (i == j)
                        {
                            s++;
                        }
                        else
                        {
                            b++;
                        }
                    }
                }
            }
            Console.WriteLine($"스트라이크 : {s} 볼 : {b}");
            if (s == 3)
            {
                return true;
            }
            return false;
        }
    }


}
