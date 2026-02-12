//342p_Property
//using System;
//namespace Property
//{
//    class BirthdayInfo
//    {
//        private string name;
//        private DateTime birthday;

//        public string Name
//        {
//            get
//            {
//                return name;
//            }
//            set
//            {
//                name = value;
//            }
//        }
//        public DateTime Birthday
//        {
//            get
//            {
//                return birthday;
//            }
//            set
//            {
//                birthday = value;
//            }
//        }
//        public int Age
//        {
//            get
//            {
//                return new DateTime(DateTime.Now.Subtract(birthday).Ticks).Year;
//            }
//        }
//    }
//    class MainApp
//    {
//        static void Main(string[] args)
//        {
//            BirthdayInfo birth = new BirthdayInfo();
//            birth.Name = "서현";
//            birth.Birthday = new DateTime(1991, 6, 28);

//            Console.WriteLine($"Name : {birth.Name}");
//            Console.WriteLine($"Birthday : {birth.Birthday.ToShortDateString()}");
//            Console.WriteLine($"Age : {birth.Age}");
//        }
//    }
//}


//346p_AutoImplementedProperty
//using System;
//namespace AutoImplementedProperty
//{
//    class BirthdayInfo
//    {
//        public string Name { get; set; } = "Unknown";
//        public DateTime Birthday { get; set; } = new DateTime(1, 1, 1);
//        public int Age
//        {
//            get
//            {
//                return new DateTime(DateTime.Now.Subtract(Birthday).Ticks).Year;
//            }
//        }
//    }
//    class MainApp
//    {
//        static void Main(string[] args)
//        {
//            BirthdayInfo birth = new BirthdayInfo();
//            Console.WriteLine($"Name : {birth.Name}");
//            Console.WriteLine($"Birthday : {birth.Birthday.ToShortDateString()}");
//            Console.WriteLine($"Age : {birth.Age}");

//            birth.Name = "서현";
//            birth.Birthday = new DateTime(1991, 6, 28);

//            Console.WriteLine($"Name : {birth.Name}");
//            Console.WriteLine($"Birthday : {birth.Birthday.ToShortDateString()}");
//            Console.WriteLine($"Age : {birth.Age}");
//        }
//    }
//}


//349p_ConstructorWithProperty
//using System;
//namespace ConstructorWithProperty
//{
//    class BirthdayInfo
//    {
//        public string Name { get; set; }
//        public DateTime Birthday { get; set; }
//        public int Age
//        {
//            get
//            {
//                return new DateTime(DateTime.Now.Subtract(Birthday).Ticks).Year;
//            }
//        }
//    }
//    class MainApp
//    {
//        static void Main(string[] args)
//        {
//            BirthdayInfo birth = new BirthdayInfo()
//            {
//                Name = "서현",
//                Birthday = new DateTime(1991, 6, 28)
//            };
//            Console.WriteLine($"Name : {birth.Name}");
//            Console.WriteLine($"Birthday : {birth.Birthday.ToShortDateString()}");
//            Console.WriteLine($"Age : {birth.Age}");
//        }
//    }
//}


//352p_InitOnly
//using System;
//namespace InitOnly
//{
//    class Transaction
//    {
//        public string From  { get; init; }
//        public string To    { get; init; }
//        public int Amount   { get; init; }

//        public override string ToString()
//        {
//            return $"{From,-10} -> {To,-10} : ${Amount}";
//        }
//    }
//    class MainApp
//    {
//        static void Main(string[] args)
//        {
//            Transaction tr1 = new Transaction
//            {
//                From = "Alice",
//                To = "Bob",
//                Amount = 100
//            };
//            Transaction tr2 = new Transaction
//            {
//                From = "Bob",
//                To = "Charlie",
//                Amount = 50
//            };
//            Transaction tr3 = new Transaction
//            {
//                From = "Charlie",
//                To = "Alice",
//                Amount = 50
//            };
//            Console.WriteLine(tr1);
//            Console.WriteLine(tr2);
//            Console.WriteLine(tr3);
//        }
//    }
//}


//354p_RequiredProperty
//using System;
//namespace RequiredProperty
//{
//    class BirthdayInfo
//    {
//        public required string Name { get; set; }
//        public required DateTime Birthday { get; init; }
//        public int Age
//        {
//            get
//            {
//                return new DateTime(DateTime.Now.Subtract(Birthday).Ticks).Year;
//            }
//        }
//    }
//    class MainApp
//    {
//        static void Main(string[] args)
//        {
//            BirthdayInfo birth = new BirthdayInfo()
//            {
//                Name = "서현",
//                Birthday
//            = new DateTime(1991, 6, 28)
//            };
//            Console.WriteLine("Name : {0}", birth.Name);
//            Console.WriteLine("Birthday : {0}", birth.Birthday.ToShortDateString());
//            Console.WriteLine("Age : {0}", birth.Age);
//        }
//    }
//}


//357p_Record
//using System;
//namespace Record
//{
//    record RTransaction
//    {
//        public string From  { get; init; }
//        public string To    { get; init; }
//        public int Amount   { get; init; }

//        public override string ToString()
//        {
//            return $"{From,-10} -> {To,-10} : ${Amount}";
//        }
//    }
//    class MainApp
//    {
//        static void Main(string[] args)
//        {
//            RTransaction tr1 = new RTransaction
//            {
//                From = "Alice",
//                To = "Bob",
//                Amount = 100
//            };
//            RTransaction tr2 = new RTransaction
//            {
//                From = "Alice",
//                To = "Charlie",
//                Amount = 100
//            };
//            Console.WriteLine(tr1);
//            Console.WriteLine(tr2);
//        }
//    }
//}


//359p_WithExp
//using System;
//namespace WithExp
//{
//    record RTransaction
//    {
//        public string From  { get; init; }
//        public string To    { get; init; }
//        public int Amount   { get; init; }

//        public override string ToString()
//        {
//            return $"{From,-10} -> {To,-10} : ${Amount}";
//        }
//    }
//    class MainApp
//    {
//        static void Main(string[] args)
//        {
//            RTransaction tr1 = new RTransaction { From = "Alice", To = "Bob", Amount = 100 };
//            RTransaction tr2 = tr1 with { To = "Charlie" };
//            RTransaction tr3 = tr2 with { From = "Dave", Amount = 30 };

//            Console.WriteLine(tr1);
//            Console.WriteLine(tr2);
//            Console.WriteLine(tr3);
//        }
//    }
//}


//361p_RecordComp
//using System;
//namespace RecordComp
//{
//    class CTransaction
//    {
//        public string From { get; init; }
//        public string To { get; init; }
//        public int Amount { get; init; }

//        public override string ToString()
//        {
//            return $"{From,-10} -> {To,-10} : ${Amount}";
//        }
//    }
//    record RTransaction
//    {
//        public string From { get; init; }
//        public string To { get; init; }
//        public int Amount { get; init; }

//        public override string ToString()
//        {
//            return $"{From,-10} -> {To,-10} : ${Amount}";
//        }
//    }
//    class MainApp
//    {
//        static void Main(string[] args)
//        {
//            CTransaction trA = new CTransaction { From = "Alice", To = "Bob", Amount = 100 };
//            CTransaction trB = new CTransaction { From = "Alice", To = "Bob", Amount = 100 };

//            Console.WriteLine(trA);
//            Console.WriteLine(trB);
//            Console.WriteLine($"trA equals to trB : {trA.Equals(trB)}");

//            RTransaction tr1 = new RTransaction { From = "Alice", To = "Bob", Amount = 100 };
//            RTransaction tr2 = new RTransaction { From = "Alice", To = "Bob", Amount = 100 };

//            Console.WriteLine(tr1);
//            Console.WriteLine(tr2);
//            Console.WriteLine($"tr1 equals to tr2 : {tr1.Equals(tr2)}");
//        }
//    }
//}


//364p_AnonymousType
//using System;
//namespace AnonymousType
//{
//    class MainApp
//    {
//        static void Main(string[] args)
//        {
//            var a = new { Name = "박상현", Age = 123 };
//            Console.WriteLine($"Name:{a.Name}, Age:{a.Age}");

//            var b = new { Subject = "수학", Scores = new int[] { 90, 80, 70, 60 } };

//            Console.Write($"Subject:{b.Subject}, Scores: ");
//            foreach (var score in b.Scores)
//                Console.Write($"{score} ");

//            Console.WriteLine();
//        }
//    }
//}


//364p_AnonymousType_2
//using System;
//namespace AnonymousType
//{
//    class Person
//    {
//        public string Name { get; set; }
//        public int Age { get; set; }
//    }
//    class SubjectScore
//    {
//        public string Subject { get; set; }
//        public int[] Scores { get; set; }
//    }
//    class MainApp
//    {
//        static void Main(string[] args)
//        {
//            Person a = new Person { Name = "박상현", Age = 123 };
//            Console.WriteLine($"Name:{a.Name}, Age:{a.Age}");

//            SubjectScore b = new SubjectScore
//            {
//                Subject = "수학",
//                Scores = new int[] { 90, 80, 70, 60 }
//            };

//            Console.Write($"Subject:{b.Subject}, Scores: ");
//            foreach (var score in b.Scores)
//                Console.Write($"{score} ");

//            Console.WriteLine();
//        }
//    }
//}


//366p_PropertiesInInterface
//using System;
//namespace PropertiesInInterface
//{
//    interface INamedValue
//    {
//        string Name { get; set; }
//        string Value { get; set; }
//    }
//    class NamedValue : INamedValue
//    {
//        public string Name { get; set; }
//        public string Value { get; set; }
//    }
//    class MainApp
//    {
//        static void Main(string[] args)
//        {
//            NamedValue name = new NamedValue()
//            { Name = "이름", Value = "박상현" };

//            NamedValue height = new NamedValue()
//            { Name = "키", Value = "177Cm" };

//            var weight = new { Name = "몸무게", Value = "90Kg" };

//            Console.WriteLine($"{name.Name} : {name.Value}");
//            Console.WriteLine($"{height.Name} : {height.Value}");
//            Console.WriteLine($"{weight.Name} : {weight.Value}");
//        }
//    }
//}


//369p_PropertiesInAbstractClass
//using System;
//namespace PropertiesInAbstractClass
//{
//    abstract class Product
//    {
//        private static int serial = 0;
//        public string SerialID
//        {
//            get { return String.Format("{0:d5}", serial++); }
//        }
//        abstract public DateTime ProductDate { get; set; }
//    }
//    class MyProduct : Product
//    {
//        public override DateTime ProductDate { get; set; }
//    }
//    class MainApp
//    {
//        static void Main(string[] args)
//        {
//            Product product_1 = new MyProduct()
//            { ProductDate = new DateTime(2023, 1, 10) };
//            Console.WriteLine("Product:{0}, Product Date :{1}",
//                product_1.SerialID,
//                product_1.ProductDate);

//            Product product_2 = new MyProduct()
//            { ProductDate = new DateTime(2023, 2, 3) };
//            Console.WriteLine("Product:{0}, Product Date :{1}",
//                product_2.SerialID,
//                product_2.ProductDate);
//        }
//    }
//}


//371p_연습문제1_예제
//using System;
//namespace Ex9_1
//{
//    class NameCard
//    {
//        private int age;
//        private string name;

//        public int GetAge()
//        {
//            return age;
//        }
//        public void SetAge(int value)
//        {
//            age = value;
//        }
//        public string GetName()
//        {
//            return name;
//        }
//        public void SetName(string value)
//        {
//            name = value;
//        }
//    }
//    class MainApp
//    {
//        public static void Main()
//        {
//            NameCard MyCard = new NameCard();

//            MyCard.SetAge(24);
//            MyCard.SetName("상현");

//            Console.WriteLine("나이 : {0}", MyCard.GetAge());
//            Console.WriteLine("이름 : {0}", MyCard.GetName());
//        }
//    }
//}


//371p_연습문제1_프로퍼티
//using System;
//namespace Ex9_1
//{
//    class NameCard
//    {
//        private int age;
//        private string name;

//        public int Age
//        {
//            get { return age; }
//            set { age = value; }
//        }
//        public string Name
//        {
//            get { return name; }
//            set { name = value; }
//        }
//    }
//    class MainApp
//    {
//        public static void Main()
//        {
//            NameCard MyCard = new NameCard();

//            MyCard.Age = 24;
//            MyCard.Name = "상현";

//            Console.WriteLine("나이 : {0}", MyCard.Age);
//            Console.WriteLine("이름 : {0}", MyCard.Name);
//        }
//    }
//}


//371p_연습문제1_자동구현_프로퍼티
//using System;
//namespace Ex9_1
//{
//    class NameCard
//    {
//        public int Age { get; set; }
//        public string Name { get; set; }
//    }
//    class MainApp
//    {
//        public static void Main()
//        {
//            NameCard MyCard = new NameCard();

//            MyCard.Age = 24;
//            MyCard.Name = "상현";

//            Console.WriteLine("나이 : {0}", MyCard.Age);
//            Console.WriteLine("이름 : {0}", MyCard.Name);
//        }
//    }
//}


//372p_연습문제2_예제
//using System;
//namespace Ex9_2
//{
//    class MainApp
//    {
//        static void Main(string[] args)
//        {
//            var nameCard = /* 무명 형식을 이용해서 완성하세요. */;
//            Console.WriteLine("이름:{0}, 나이:{1}", nameCard.Name, nameCard.Age);

//            var complex = /* 무명 형식을 이용해서 완성하세요. */;
//            Console.WriteLine("Real:{0}, Imaginary:{1}", complex.Real, complex.Imaginary);
//        }
//    }
//}


//372p_연습문제2
//using System;
//namespace Ex9_2
//{
//    class MainApp
//    {
//        static void Main(string[] args)
//        {
//            var nameCard = new { Name = "박상현", Age = 17 };
//            Console.WriteLine("이름:{0}, 나이:{1}", nameCard.Name, nameCard.Age);

//            var complex = new { Real = 3, Imaginary = -12 };
//            Console.WriteLine("Real:{0}, Imaginary:{1}", complex.Real, complex.Imaginary);
//        }
//    }
//}


//using System;
//namespace DerivedFromArray
//{
//    class MainApp
//    {
//        static void Main(string[] args)
//        {
//            int[] array = new int[] { 10, 30, 20, 7, 1 };
//            Console.WriteLine($"Type Of array : {array.GetType()}");
//            Console.WriteLine($"Base type Of array : {array.GetType().BaseType}");
//        }
//    }
//}


//[3-1] 다음을 치고 실행시켜라.
//using System;
//namespace Ex3_1
//{
//    abstract class Shape
//    {
//        public double area;
//        public abstract void calcArea();
//    }
//    class Rectangle : Shape
//    {
//        int width { get; init; }
//        int height { get; init; }
//        public Rectangle(int v1, int v2)
//        {
//            this.width = v1;
//            this.height = v2;
//        }
//        public override void calcArea()
//        {
//            area = width * height;
//        }
//    }
//    internal class Program
//    {
//        static void Main(string[] args)
//        {
//            Shape[] shapes = { new Rectangle(3, 4)};
//            foreach (Shape s in shapes)
//            {
//                s.calcArea();
//                Console.WriteLine(s.area);
//            }
//        }
//    }
//}


//[3-1-1] 다음을 치고 실행시켜라.
//추가로 shape를 상속받은 circle 클래스를 만들고 Main에서 사용해보자.
//using System;
//namespace Ex3_1
//{
//    abstract class Shape
//    {
//        public double area;
//        public abstract void calcArea();
//    }
//    class Rectangle : Shape
//    {
//        int width { get; init; }
//        int height { get; init; }
//        public Rectangle(int v1, int v2)
//        {
//            this.width = v1;
//            this.height = v2;
//        }
//        public override void calcArea()
//        {
//            area = width * height;
//        }
//    }
//    class Circle : Shape
//    {
//        int radius { get; init; }
//        public Circle(int v1)
//        {
//            this.radius = v1;
//        }
//        public override void calcArea()
//        {
//            area = radius * radius * 3.141592;
//        }
//    }
//    internal class Program
//    {
//        static void Main(string[] args)
//        {
//            Shape[] shapes = { new Rectangle(3, 4), new Circle(3) };
//            foreach (Shape s in shapes)
//            {
//                s.calcArea();
//                Console.WriteLine(s.area);
//            }
//        }
//    }
//}


//[3-1-2] 다음을 치고 실행시켜라.
//rectangle 클래스를 상속받은 square 클래스도 만들고 Main에서 사용해보자.
using System;
namespace Ex3_1
{
    abstract class Shape
    {
        public double area;
        public abstract void calcArea();
    }
    class Rectangle : Shape
    {
        int width { get; init; }
        int height { get; init; }
        public Rectangle(int v1, int v2)
        {
            this.width = v1;
            this.height = v2;
        }
        public override void calcArea()
        {
            area = width * height;
        }
    }
    class Circle : Shape
    {
        const double PI = 3.141592;
        int radius { get; init; }
        public Circle(int v1)
        {
            this.radius = v1;
        }
        public override void calcArea()
        {
            area = radius * radius * PI;
        }
    }
    class Square : Rectangle
    {
        public Square(int w)
        {
            this w = v1;
        }
    }
    internal class Program
    {
        static void Main(string[] args)
        {
            Shape[] shapes = { new Rectangle(3, 4), new Circle(3), new Square(3) };
            foreach (Shape s in shapes)
            {
                s.calcArea();
                Console.WriteLine(s.area);
            }
        }
    }
}


//[3-1-3] 다음을 치고 실행시켜라.
//shape에 둘레의 길이를 구하는 용도의 함수를 만들고 하위클래스에서 override 해보자.
//using System;
//namespace Ex3_1
//{
//    abstract class Shape
//    {
//        public double area;
//        public double perimeter;
//        public abstract void calcArea();
//        public abstract void calcPerimeter();
//    }
//    class Rectangle : Shape
//    {
//        int width { get; init; }
//        int height { get; init; }
//        public Rectangle(int v1, int v2)
//        {
//            this.width = v1;
//            this.height = v2;
//        }
//        public override void calcArea()
//        {
//            area = width * height;
//        }
//        public override void calcPerimeter()
//        {
//            perimeter = 2 * (width + height);
//        }
//    }
//    class Circle : Shape
//    {
//        const double PI = 3.141592;
//        int radius { get; init; }
//        public Circle(int v1)
//        {
//            this.radius = v1;
//        }
//        public override void calcArea()
//        {
//            area = radius * radius * PI;
//        }
//        public override void calcPerimeter()
//        {
//            perimeter = 2 * PI * radius;
//        }
//    }
//    class Square : Rectangle
//    {
//        int side { get; init; }

//        public Square(int v1, int v2, int v3) : base(v1, v2)
//        {
//            this.side = v3;
//        }
//        public override void calcArea()
//        {
//            area = side * side;
//        }
//        public override void calcPerimeter()
//        {
//            perimeter = 4 * side;
//        }
//    }
//    internal class Program
//    {
//        static void Main(string[] args)
//        {
//            Shape[] shapes = { new Rectangle(3, 4), new Circle(3), new Square(3, 4, 5) };
//            foreach (Shape s in shapes)
//            {
//                s.calcArea();
//                Console.WriteLine($"넓이: {s.area}");
//                s.calcPerimeter();
//                Console.WriteLine($"둘레: {s.perimeter}");
//            }
//        }
//    }
//}


//[3-1-4] 다음을 치고 실행시켜라.
//area변수와 둘레의 길이 필드를 제거하고 out을 사용하여 함수를 재구성해보자.
//using System;
//namespace Ex3_1
//{
//    abstract class Shape
//    {
//        public abstract void calcArea(out double area);
//        public abstract void calcPerimeter(out double perimeter);
//    }
//    class Rectangle : Shape
//    {
//        int width { get; init; }
//        int height { get; init; }
//        public Rectangle(int v1, int v2)
//        {
//            this.width = v1;
//            this.height = v2;
//        }
//        public override void calcArea(out double area)
//        {
//            area = width * height;
//        }
//        public override void calcPerimeter(out double perimeter)
//        {
//            perimeter = 2 * (width + height);
//        }
//    }
//    class Circle : Shape
//    {
//        const double PI = 3.141592;
//        int radius { get; init; }
//        public Circle(int v1)
//        {
//            this.radius = v1;
//        }
//        public override void calcArea(out double area)
//        {
//            area = radius * radius * PI;
//        }
//        public override void calcPerimeter(out double perimeter)
//        {
//            perimeter = 2 * PI * radius;
//        }
//    }
//    class Square : Rectangle
//    {
//        int side { get; init; }

//        public Square(int v1, int v2, int v3) : base(v1, v2)
//        {
//            this.side = v3;
//        }
//        public override void calcArea(out double area)
//        {
//            area = side * side;
//        }
//        public override void calcPerimeter(out double perimeter)
//        {
//            perimeter = 4 * side;
//        }
//    }
//    internal class Program
//    {
//        static void Main(string[] args)
//        {
//            Shape[] shapes = { new Rectangle(3, 4), new Circle(3), new Square(3, 4, 5) };
//            foreach (Shape s in shapes)
//            {
//                s.calcArea(out double area);
//                Console.WriteLine($"넓이: {area}");
//                s.calcPerimeter(out double perimeter);
//                Console.WriteLine($"둘레: {perimeter}");
//            }
//        }
//    }
//}