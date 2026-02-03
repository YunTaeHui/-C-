//문제1-1
//using System;
//namespace Class_Program
//{
//    class Student
//    {
//        public string department;
//        public int studentNum;
//    }
//    class Program
//    {
//        static void Main(string[] args)
//        {
//            Student s = new Student();
//            s.department = "기계공학과";
//            s.studentNum = 20261234;

//            Console.WriteLine($"학과: {s.department}");
//            Console.WriteLine($"학번: {s.studentNum}");
//        }
//    }
//}


//문제1-2
//using System;
//namespace Class_Program
//{
//    class Student
//    {
//        private string department;
//        private int studentNum;

//        public void setDepartment(string department)
//        {
//            this.department = department;
//        }
//        public void setStudentNum(int studentNum)
//        {
//            this.studentNum = studentNum;
//        }

//        public string getDepartment()
//        {
//            return department;
//        }
//        public int getStudentNum()
//        {
//            return studentNum;
//        }
//    }
//    class Program
//    {
//        static void Main(string[] args)
//        {
//            Student s = new Student();
//            s.setDepartment("기계공학과");
//            s.setStudentNum(20141559);

//            Console.WriteLine($"학과: {s.getDepartment()}");
//            Console.WriteLine($"학번: {s.getStudentNum()}");
//        }
//    }
//}


//문제2-1
//using System;
//namespace Class_Program
//{
//    class Circle
//    {
//        protected double radius;
//        const double PI = 3.141592;
//        public Circle(double radius)
//        {
//            this.radius = radius;
//        }

//        public double getArea()
//        {
//            return radius * radius * PI;
//        }
//    }
//    class Cylinder
//    {
//        protected Circle circle;
//        protected double height;
//        public Cylinder(Circle circle, double height)
//        {
//            this.circle = circle;
//            this.height = height;
//        }
//        public Cylinder(double radius, double height) : this(new Circle(radius), height)
//        {
//        }
//        public double getVolume()
//        {
//            return circle.getArea() * height;
//        }
//    }
//    class Program
//    {
//        static void Main(string[] args)
//        { 
//            Cylinder cd = new Cylinder(2.8, 5.6);
//            Console.WriteLine($"원통 부피: {cd.getVolume()}");
//        }
//    }
//}


//문제2-2
//using System;
//namespace Class_Program
//{
//    class Circle
//    {
//        protected double radius;
//        const double PI = 3.141592;
//        public Circle(double radius)
//        {
//            this.radius = radius;
//        }
//        public double getArea()
//        {
//            return radius * radius * PI;
//        }
//    }
//    class Cylinder
//    {
//        protected Circle circle;
//        protected double height;
//        public Cylinder(Circle circle, double height)
//        {
//            this.circle = circle;
//            this.height = height;
//        }
//        public double getVolume()
//        {
//            return circle.getArea() * height;
//        }
//    }
//    class Program
//    {
//        static void Main(string[] args)
//        {
//            Cylinder cd = new(new Circle(2.8), 5.6);
//            Console.WriteLine($"원통 부피: {cd.getVolume()}");
//        }
//    }
//}


//문제3
//using System;
//namespace Class_Program
//{
//    class SalaryMan
//    {
//        private int salary = 1_000_000;
//        public SalaryMan() { }
//        public SalaryMan(int salary)
//        {
//            this.salary = salary;
//        }
//        public int getAnnualGross()
//        {
//            return salary * 12 + salary * 5;
//        }
//    }
//    class Program
//    {
//        static void Main(string[] args)
//        {
//            var result1 = new SalaryMan().getAnnualGross();
//            var result2 = new SalaryMan(2_000_000).getAnnualGross();

//            Console.WriteLine(result1);
//            Console.WriteLine(result2);
//        }
//    }
//}


using System;
using MyExtension;

namespace MyExtension
{
    public static class IntegerExtension
    {
        public static int Square(this int myInt)
        {
            return myInt * myInt;
        }
        public static int Power(this int myInt, int exponent)
        {
            int result = myInt;
            for (int i = 1; i < exponent; i++)
                result = result * myInt;

            return result;
        }
    }
}
namespace MyExtension
{
    class MainApp
    {
        static void Main(string[] args)
        {
            Console
        }
    }
}