//연습문제1: 첫 번째 줄에 별1개, 두 번째 줄에 별2개...
//별 5개가 찍힐 때까지 for문으로 반복하는 프로그램을 작성하세요.
//using System;
//namespace _196p_연습1
//{
//    class MainApp
//    {
//        public static void Main()
//        {
//            for(int i=0; i<5; i++)
//            {
//                for(int j=0; j<=i; j++)
//                {
//                    Console.Write("*");
//                }
//                Console.WriteLine();
//            }
//        }
//    }
//}


//연습문제2: 첫 번째 줄에 별5개, 두 번째 줄에 별4개...
//별 1개가 찍힐 때까지 for문으로 반복하는 프로그램을 작성하세요.
//using System;
//namespace _196p_연습2
//{
//    class MainApp
//    {
//        public static void Main()
//        {
//            for (int i = 4; i >= 0; i--)
//            {
//                for (int j = 0; j <= i; j++)
//                {
//                    Console.Write("*");
//                }
//                Console.WriteLine();
//            }
//        }
//    }
//}


//연습문제3-1: 첫 번째 줄에 별1개, 두 번째 줄에 별2개...
//별 5개가 찍힐 때까지 while 문으로 반복하는 프로그램을 작성하세요.
//using System;
//namespace _196p_연습3_1
//{
//    class MainApp
//    {
//        public static void Main()
//        {
//            int i = 0;
//            while(i<5)
//            {
//                int j = 0;
//                while (j<=i)
//                {
//                    Console.Write("*");
//                    j++;
//                }
//                Console.WriteLine();
//                i++;
//            }
//        }
//    }
//}


//연습문제3-2: 첫 번째 줄에 별1개, 두 번째 줄에 별2개...
//별 5개가 찍힐 때까지 do-while 문으로 반복하는 프로그램을 작성하세요.
//using System;
//namespace _196p_연습3_2
//{
//    class MainApp
//    {
//        public static void Main()
//        {
//            int i = 0;
//            do
//            {
//                int j = 0;
//                do
//                {
//                    Console.Write("*");
//                    j++;
//                }
//                while (j <= i);
//                Console.WriteLine();
//                i++;
//            }
//            while (i < 5);
//        }
//    }
//}


//연습문제3-3: 첫 번째 줄에 별5개, 두 번째 줄에 별4개...
//별 1개가 찍힐 때까지 while 문으로 반복하는 프로그램을 작성하세요.
//using System;
//namespace _196p_연습3_3
//{
//    class MainApp
//    {
//        public static void Main()
//        {
//            int i = 4;
//            while(i >= 0)
//            {
//                int j = 0;
//                while(j<=i)
//                {
//                    Console.Write("*");
//                    j++;
//                }
//                Console.WriteLine();
//                i--;
//            }
//        }
//    }
//}


//연습문제3-4: 첫 번째 줄에 별5개, 두 번째 줄에 별4개...
//별 1개가 찍힐 때까지 do-while 문으로 반복하는 프로그램을 작성하세요.
//using System;
//namespace _196p_연습3_4
//{
//    class MainApp
//    {
//        public static void Main()
//        {
//            int i = 4;
//            do
//            {
//                int j = 0;
//                do
//                {
//                    Console.Write("*");
//                    j++;
//                }
//                while (j <= i);
//                Console.WriteLine();
//                i--;
//            }
//            while (i >= 0);
//        }
//    }
//}


//연습문제4: 사용자로부터 입력받은 횟수만큼 별을 반복 출력하는 프로그램을 작성하세요.
//0이하의 값을 입력하면 알람 메시지를 띄우고 프로그램을 종료합니다.
//using System;
//namespace _196p_연습4
//{
//    class MainApp
//    {
//        public static void Main()
//        {
//            Console.WriteLine("반복 횟수를 입력하세요. :");
//            string input = Console.ReadLine();

//            if(!int.TryParse(input, out int n)) //문자열을 정수로 변환|성공:TRUE, 실패:FALSE
//            {   //문자열을 정수로 변환 실패하면
//                Console.WriteLine("숫자만 입력할 수 있습니다.");
//                return;
//            }
//            if (n <= 0)
//            {
//                Console.WriteLine("0보다 같거나 작은 수는 사용할 수 없습니다.");
//                return;
//            } 
//            for (int i = 0; i < n; i++)
//            {
//                for (int j = 0; j <= i; j++)
//                {
//                    Console.Write("*");
//                }
//                Console.WriteLine();
//            }
//        }
//    }
//}


//연습문제5: Fibonacci 클래스의 GetNumber() 메소드에서 switch 문을 switch 식으로 변경하세요.
using System;
namespace _197p_연습5
{
    class Fibonacci
    {
        public static long GetNumber(long index)
        {
            long result = index switch
            {
                0 => 0,
                1 => 1,
                _ => GetNumber(index - 1) + GetNumber(index - 2)
            };
            return result;
        }
        public static void Main()
        {
            Console.WriteLine("최종 값을 입력하세요. :");
            string input = Console.ReadLine();

            if (!int.TryParse(input, out int n)) //문자열을 정수로 변환|성공:TRUE, 실패:FALSE
            {   //문자열을 정수로 변환 실패하면
                Console.WriteLine("숫자만 입력할 수 있습니다.");
                return;
            }
            if (n < 0)
            {
                Console.WriteLine("0보다 작은 수는 사용할 수 없습니다.");
                return;
            }
            long result = GetNumber(n);
            Console.WriteLine($"연산 값은 {result}입니다.");
        }
    }
}
