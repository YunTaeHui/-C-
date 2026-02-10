//419p_연습문제2-1
//using System;
//namespace _2DArray
//{
//    class MainApp
//    {
//        static void Main(string[] args)
//        {
//            int[,] A = new int[2, 2] { { 3, 2 }, { 1, 4 } };

//            int[,] B = new int[2, 2] { { 9, 2 }, { 1, 7 } };

//            int[,] C = new int[2, 2];

//            for (int i = 0; i < 2; i++)
//            {
//                for (int j = 0; j < 2; j++)
//                {
//                    int sum = 0;
//                    for (int k = 0; k < 2; k++)
//                    {
//                        sum += A[i, k] * B[k, j];
//                    }
//                    C[i, j] = sum;
//                }
//            }

//            Console.WriteLine("C = A * B");
//            for (int i = 0; i < 2; i++)
//            {
//                for (int j = 0; j < 2; j++)
//                {
//                    Console.Write(C[i, j] + " ");
//                }
//                Console.WriteLine();
//            }
//        }
//    }
//}


//419p_연습문제2-2
//using System;
//namespace _2DArray
//{
//    class MainApp
//    {
//        static void Main(string[] args)
//        {
//            int[,] A = ReadMatrix2x2_TwoLines("A");
//            int[,] B = ReadMatrix2x2_TwoLines("B");

//            int[,] C = Multiply2x2(A, B);

//            Console.WriteLine("\nC = A * B");
//            PrintMatrix2x2(C);
//        }

//        // 2줄로 2개씩 입력
//        static int[,] ReadMatrix2x2_TwoLines(string name)
//        {
//            int[,] M = new int[2, 2];

//            Console.WriteLine($"\n{name} 행렬(2x2)을 2줄로 입력하세요.");
//            Console.WriteLine("예) 첫 줄: 1 2 / 둘째 줄: 3 4");

//            ReadRow2(name, M, 0); // 0행
//            ReadRow2(name, M, 1); // 1행
//            return M;
//        }

//        // 한 줄에 숫자 2개 입력받아서 해당 행(row)에 저장
//        static void ReadRow2(string name, int[,] M, int row)
//        {
//            Console.Write($"{name} {row + 1}번째 줄 입력: ");
//            string input = Console.ReadLine();

//            int spaceIndex = input.IndexOf(' ');

//            string left = input.Substring(0, spaceIndex);
//            string right = input.Substring(spaceIndex + 1);

//            M[row, 0] = int.Parse(left);
//            M[row, 1] = int.Parse(right);
//        }

//        static int[,] Multiply2x2(int[,] A, int[,] B)
//        {
//            int[,] C = new int[2, 2];

//            for (int i = 0; i < 2; i++)
//            {
//                for (int j = 0; j < 2; j++)
//                {
//                    int sum = 0;
//                    for (int k = 0; k < 2; k++)
//                        sum += A[i, k] * B[k, j];

//                    C[i, j] = sum;
//                }
//            }
//            return C;
//        }

//        static void PrintMatrix2x2(int[,] M)
//        {
//            for (int i = 0; i < 2; i++)
//            {
//                for (int j = 0; j < 2; j++)
//                    Console.Write(M[i, j] + " ");
//                Console.WriteLine();
//            }
//        }
//    }
//}


//420p_연습문제5
using System;
using System.Collections;
using static System.Console;

namespace UsingHashtable
{
    class MainApp
    {
        static void Main(string[] args)
        {
            Hashtable ht = new Hashtable();
            ht["회사"] = "Microsoft";
            ht["URL"] = "www.microsoft.com";

            WriteLine("회사 : {0}", ht["회사"]);
            WriteLine("URL : {0}", ht["URL"]);
        }
    }
}


