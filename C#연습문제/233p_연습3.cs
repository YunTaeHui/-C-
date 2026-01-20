//231p_연습문제1_Square() 메소드를 구현해 프로그램을 완성하세요.
//Sqaure() 함수는 매개변수를 제곱하여 반환합니다.
//using System;
//namespace Ex6_1
//{
//    class MainApp
//    {
//        static double Square(double arg)
//        {
//            return arg * arg;
//        }
//        static void Main(string[] args)
//        {
//            Console.Write("수를 입력하세요. : ");
//            string input = Console.ReadLine();
//            double arg = Convert.ToDouble(input);

//            Console.WriteLine("결과 : {0}", Square(arg));
//        }
//    }
//}


//232p_연습문제2_mean이 0을 갖게 되는 원인은 무엇이며, 이를 바로 잡으려면
//다음 코드에서 어떤 부분을 고쳐야 할까요?
//using System;
//namespace Ex6_2
//{
//    class MainApp
//    {
//        public static void Main()
//        {
//            double mean = 0;

//            mean = Mean(1, 2, 3, 4, 5);

//            Console.WriteLine("평균 : {0}", mean);
//        }
//        public static double Mean(
//            double a, double b, double c,
//            double d, double e)
//        {
//            return (a + b + c + d + e) / 5;
//        }
//    }
//}


//232p_연습문제3_다음 코드에 Plus() 메소드가 double 형 매개변수를
//지원하도록 오버로딩하세요. 이 프로그램이 완성된 후의 실행 결과는
//다음과 같아야 합니다.
//3 + 4 = 7
//2.4 + 3.1 = 5.5
using System;
using System.Numerics;
namespace Ex6_3
{
    class MainApp
    {
        public static void Main()
        {
            int a = 3;
            int b = 4;
            int resultA = 0;

            Plus(a, b, out resultA);

            Console.WriteLine("{0} + {1} = {2}", a, b, resultA);

            double x = 2.4;
            double y = 3.1;
            double resultB = 0;

            Plus(x, y, out resultB);

            Console.WriteLine("{0} + {1} = {2}", x, y, resultB);
        }
        public static void Plus(int a, int b, out int c)
        {
            c = a + b;
        }

        //이 아래에 double 형 매개변수를 받을 수 있도록
        //오버로딩된 Plus() 메소드를 작성하세요.
        public static void Plus(double x, double y, out double z)
        {
            z = x + y;
        }
    }
}