//196p_연습문제1
//namespace _260120
//{
//    internal class Program
//    {
//        static void Main(string[] args)
//        {
//            for(int i=0;i<5;i++)
//            {
//                for(int j=0;j<=i;j++)
//                {
//                    Console.Write("*");
//                }
//                Console.WriteLine();
//            }
//        }
//    }
//}


//196p_연습문제2
//namespace _260120
//{
//    internal class Program
//    {
//        static void Main(string[] args)
//        {
//            for (int i = 5; i > 0; i--)
//            {
//                for (int j = 0; j < i; j++)
//                {
//                    Console.Write("*");
//                }
//                Console.WriteLine();
//            }
//        }
//    }
//}


//196p_연습문제3-1
//namespace _260120
//{
//    internal class Program
//    {
//        static void Main(string[] args)
//        {
//            int i = 0;
//            while(i < 5)
//            {
//                int j = 0;
//                while(j <= i)
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


//196p_연습문제3-2
//namespace _260120
//{
//    internal class Program
//    {
//        static void Main(string[] args)
//        {
//            int i = 0;
//            do
//            {
//                int j = 0;
//                do
//                {
//                    Console.Write("*");
//                    j++;
//                } while (j <= i);
//                Console.WriteLine();
//                i++;
//            } while (i < 5);
//        }
//    }
//}


//196p_연습문제3-3
//namespace _260120
//{
//    internal class Program
//    {
//        static void Main(string[] args)
//        {
//            int i = 5;
//            while (i > 0)
//            {
//                int j = 0;
//                while (j < i)
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


//196p_연습문제3-4
//namespace _260120
//{
//    internal class Program
//    {
//        static void Main(string[] args)
//        {
//            int i = 5;
//            do
//            {
//                int j = 0;
//                do
//                {
//                    Console.Write("*");
//                    j++;
//                }while (j < i);
//                Console.WriteLine();
//                i--;
//            }while (i > 0);
//        }
//    }
//}


//196p_연습문제4
//namespace _260120
//{
//    internal class Program
//    {
//        static void Main(string[] args)
//        {
//            Console.WriteLine("반복 횟수를 입력하세요. : ");
//            int input = int.Parse(Console.ReadLine());
//            if (input < 0)
//            {
//                Console.WriteLine("0보다 같거나 작은 수는 사용할 수 없습니다.");
//                return;
//            }
//            for (int i = 0; i < input; i++)
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


//197p_연습문제5
//namespace _260120
//{
//    class Fibonacci
//    {
//        public static long GetNumber(long index)
//        {
//            long result = index switch
//            {
//            0 => 0,
//            1 => 1,
//            _ => GetNumber(index - 1) + GetNumber(index - 2)
//            };
//            return result;
//        }
//        static void Main(string[] args)
//        {
//            Console.WriteLine("Fibonacci 값을 입력하세요.");
//            long index = long.Parse(Console.ReadLine());
//            long result = GetNumber(index);

//            Console.WriteLine($"결과 값은 {result}입니다.");
//        }
//    }
//}


//using System;
//namespace Method
//{
//    class Calculator
//    {
//        public static int Plus(int a, int b)
//        {
//            return a + b;
//        }
//        public static int Minus(int a, int b)
//        {
//            return a - b;
//        }
//    }
//    class MainApp
//    {
//        public static void Main()
//        {
//            int result = Calculator.Plus(3, 4);
//            Console.WriteLine(result);

//            result = Calculator.Minus(5, 2);
//            Console.WriteLine(result);
//        }
//    }
//}


//using System;
//namespace RefReturn
//{
//    class Product
//    {
//        private int price = 100;
//        public ref int GetPrice()
//        {
//            return ref price;
//        }
//        public void PrintPrice()
//        {
//            Console.WriteLine($"Price :{price}");
//        }
//    }
//    class MainApp
//    {
//        static void Main(string[] args)
//        {
//            Product carrot = new Product();
//            ref int ref_local_price = ref carrot.GetPrice();
//            int normal_local_price = carrot.GetPrice();

//            carrot.PrintPrice();
//            Console.WriteLine($"Ref Local Price :{ref_local_price}");
//            Console.WriteLine($"Normal_local_price :{normal_local_price}");

//            ref_local_price = 200;

//            carrot.PrintPrice();
//            Console.WriteLine($"Ref Local Price :{ref_local_price}");
//            Console.WriteLine($"Normal_local_price :{normal_local_price}");
//        }
//    }
//}


//using System;
//namespace UsingOut
//{
//    class MainApp
//    {
//        static void Divide(int a, int b, out int quotient, out int remainder)
//        {
//            quotient = a / b;
//            remainder = a % b;
//        }
//        static void Main(string[] args)
//        {
//            int a = 20;
//            int b = 3;
//            //int c;
//            //int d;

//            Divide(a, b, out int c, out int d);

//            Console.WriteLine($"a:{a},b:{b},a/b:{c},a%b:{d}");
//        }
//    }
//}


//using System;
//namespace UsingParams
//{
//    class MainApp
//    {
//        static int Sum(params int[] args)
//        {
//            Console.Write("Summing... ");

//            int sum = 0;

//            for(int i=0;i<args.Length;i++)
//            {
//                if (i > 0)
//                    Console.Write(", ");

//                Console.Write(args[i]);

//                sum += args[i];
//            }
//            Console.WriteLine();

//            return sum;
//        }
//        static void Main(string[] args)
//        {
//            int sum = Sum(3, 4, 5, 6, 7, 8, 9, 10);

//            Console.WriteLine($"Sum : {sum}");
//        }
//    }
//}


//using System;
//namespace LocalFunction
//{
//    class MainApp
//    {
//        static string ToLowerString(string input)
//        {
//            var arr = input.ToCharArray();
//            for (int i = 0; i < arr.Length; i++)
//            {
//                arr[i] = ToLowerChar(i);
//            }
//            char ToLowerChar(int i)
//            {
//                if (arr[i] < 65 || arr[i] > 90)
//                    return arr[i];
//                else
//                    return (char)(arr[i] + 32);
//            }
//            return new string(arr);
//        }
//        static void Main(string[] args)
//        {
//            Console.WriteLine(ToLowerString("Hello!"));
//            Console.WriteLine(ToLowerString("Good Morning."));
//            Console.WriteLine(ToLowerString("This is C#."));
//        }
//    }
//}


//231p_연습문제1
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


//232p_연습문제2-1
//using System;
//namespace Ex6_2
//{
//    class MainApp
//    {
//        public static void Main()
//        {
//            double mean = 0;

//            Mean(1, 2, 3, 4, 5, ref mean);

//            Console.WriteLine("평균 : {0}", mean);
//        }
//        public static void Mean(
//            double a, double b, double c,
//            double d, double e, ref double mean)
//        {
//            mean = (a + b + c + d + e) / 5;
//        }
//    }
//}


//232p_연습문제2-2
//using System;
//namespace Ex6_2
//{
//    class MainApp
//    {
//        public static void Main()
//        {
//            double mean = 0;

//            Mean(1, 2, 3, 4, 5, out mean);

//            Console.WriteLine("평균 : {0}", mean);
//        }
//        public static void Mean(
//            double a, double b, double c,
//            double d, double e, out double mean)
//        {
//            mean = (a + b + c + d + e) / 5;
//        }
//    }
//}


//232p_연습문제2-3
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


//232p_연습문제3
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
        public static void Plus(double a, double b, out double c)
        {
            c = a + b;
        }
    }
}