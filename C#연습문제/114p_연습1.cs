using System;
namespace _114p_연습1
{
    class MainApp
    {
        public static void Main()
        {
            Console.WriteLine("사각형의 너비를 입력하세요.");
            string width = Console.ReadLine();

            Console.WriteLine("사각형의 높이를 입력하세요.");
            string height = Console.ReadLine();

            double getWidth = double.Parse(width);
            double getHeight = double.Parse(height);

            double area = getWidth * getHeight;

            Console.WriteLine(area);
        }
    }
}
