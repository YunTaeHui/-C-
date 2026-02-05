//using System;
//namespace _260205
//{
//    class Account
//    {
//        private string owner;
//        private long balance;

//        public Account(string owner, long balance)
//        {
//            this.owner = owner;
//            this.balance = balance;
//        }
//        public void setOwner(string owner)
//        {
//            this.owner = owner;
//        }
//        public string getOwner()
//        {
//            return owner;
//        }

//        public void setBalance(long balance)
//        {
//            this.balance = balance;
//        }
//        public long getBalance()
//        {
//            return balance;
//        }

//        public long deposit(long amount)
//        {
//            if(amount <= 0) return balance;
//            balance += amount;
//            return balance;
//        }
//        public long withdraw(long amount)
//        {
//            if (amount <= 0) return balance;
//            if (balance < amount)
//            {
//                Console.Write($"[금액 초과] 요청:{amount}/잔액:{balance} -> 잔액 전체 출금");
//                amount = balance;
//            }
//            balance -= amount;
//            return balance;
//        }
//    }
//    class Program
//    {
//        static void Main(string[] args)
//        {
//            Console.Write("초기 금액 입력: ");
//            long balance = long.Parse(Console.ReadLine());
//            Account acc = new Account("홍길동", balance);

//            Console.Write("추가 금액 입력: ");
//            long depositAmount = long.Parse(Console.ReadLine());
//            acc.deposit(depositAmount);

//            Console.Write("출금 금액 입력: ");
//            long withdrawAmount = long.Parse(Console.ReadLine());
//            acc.withdraw(withdrawAmount);

//            Console.WriteLine("\nOwner: " + acc.getOwner());
//            Console.WriteLine("Balance: " + acc.getBalance());
//        }
//    }
//}


//캡슐화 기법 사용 필드 미사용
//using System;
//namespace _260205
//{
//    class Account
//    {
//        public string owner { get; private set; }
//        public long balance { get; private set; }

//        public Account(string owner, long balance)
//        {
//            this.owner = owner;
//            this.balance = balance;
//        }

//        public long deposit(long amount)
//        {
//            if (amount <= 0) return balance;
//            balance += amount;
//            return balance;
//        }
//        public long withdraw(long amount)
//        {
//            if (amount <= 0) return balance;
//            if (balance < amount)
//            {
//                Console.Write($"[금액 초과] 요청:{amount}/잔액:{balance} -> 잔액 전체 출금");
//                amount = balance;
//            }
//            balance -= amount;
//            return balance;
//        }
//    }
//    class Program
//    {
//        static void Main(string[] args)
//        {
//            Console.Write("초기 금액 입력: ");
//            long balance = long.Parse(Console.ReadLine());
//            Account acc = new Account("홍길동", balance);

//            Console.Write("추가 금액 입력: ");
//            long depositAmount = long.Parse(Console.ReadLine());
//            acc.deposit(depositAmount);

//            Console.Write("출금 금액 입력: ");
//            long withdrawAmount = long.Parse(Console.ReadLine());
//            acc.withdraw(withdrawAmount);

//            Console.WriteLine("\nOwner: " + acc.owner);
//            Console.WriteLine("Balance: " + acc.balance);
//        }
//    }
//}


//using System;
//using MyExtension;

//namespace MyExtension
//{
//    public static class IntegerExtension
//    {
//        public static int Square(this int myInt)
//        {
//            return myInt * myInt;
//        }
//        public static int Power(this int myInt, int exponent)
//        {
//            int result = myInt;
//            for (int i = 1; i < exponent; i++)
//                result = result * myInt;

//            return result;
//        }
//        public static double add(this double myInt, int exponent)
//        {

//            return myInt + exponent;
//        }
//        public static int toInt(this string myInt)
//        {
//            int result = int.Parse(myInt);
//            return result;
//        }
//    }
//}
//namespace ExtensionMethod
//{
//    class MainApp
//    {
//        static void Main(string[] args)
//        {
//            Console.WriteLine($"3^2 : {3.Square()}");
//            Console.WriteLine($"3^4 : {3.Power(4)}");
//            Console.WriteLine($"2^10 : {2.Power(10)}");
//            Console.WriteLine($"add : {(2.5).add(10)}");
//            Console.WriteLine($"to : {"123".toInt()}");
//        }
//    }
//}


//using System;
//namespace Structure
//{
//    struct Point3D
//    {
//        public int X;
//        public int Y;
//        public int Z;

//        public Point3D(int X, int Y, int Z)
//        {
//            this.X = X;
//            this.Y = Y;
//            this.Z = Z;
//        }

//        public override string ToString()
//        {
//            return string.Format($"{X}, {Y}, {Z}");
//        }
//    }
//    class MainApp
//    {
//        static void Main(string[] args)
//        {
//            Point3D p3d1;
//            p3d1.X = 10;
//            p3d1.Y = 20;
//            p3d1.Z = 40;

//            Console.WriteLine(p3d1.ToString());

//            Point3D p3d2 = new Point3D(100, 200, 300);
//            Point3D p3d3 = p3d2;
//            p3d3.Z = 400;

//            Console.WriteLine(p3d2.ToString());
//            Console.WriteLine(p3d3.ToString());
//        }
//    }
//}


//using System;
//namespace ReadonlyStruct
//{
//    readonly struct RGBColor
//    {
//        public readonly byte R;
//        public readonly byte G;
//        public readonly byte B;

//        public RGBColor(byte r, byte g, byte b)
//        {
//            R = r;
//            G = r;
//            B = b;
//        }
//    }
//    class MainApp
//    {
//        static void Main(string[] args)
//        {
//            RGBColor Red = new RGBColor(255, 0, 0);
//            RGBColor Green = new RGBColor(255, 255, 0);
//            Red.G = 100;
//        }
//    }
//}


//using System;
//namespace ReadonlyMethod
//{
//    struct ACSetting
//    {
//        public double currentInCelsius;
//        public double target;

//        public ACSetting(int currentInCelsius, int target)
//        {
//            this.currentInCelsius = currentInCelsius;
//            this.target = target;
//        }

//        public readonly double GetFahrenheit()
//        {
//            return currentInCelsius * 1.8 + 32;
//        }
//    }
//    class MainApp
//    {
//        static void Main(string[] args)
//        {
//            ACSetting acs = new ACSetting(25, 25);
//            //acs.currentInCelsius = 25;
//            //acs.target = 25;

//            Console.WriteLine($"{acs.GetFahrenheit()}");
//            Console.WriteLine($"{acs.target}");
//        }
//    }
//}


//310p 문제5
//using System;
//namespace ReadonlyMethod
//{
//    struct ACSetting
//    {
//        public double currentInCelsius;
//        public double target;

//        public readonly double GetFahrenheit()
//        {
//            return currentInCelsius * 1.8 + 32;
//        }
//    }
//    class MainApp
//    {
//        static void Main(string[] args)
//        {
//            ACSetting acs;
//            acs.currentInCelsius = 25;
//            acs.target = 25;

//            Console.WriteLine($"{acs.GetFahrenheit()}");
//            Console.WriteLine($"{acs.target}");
//        }
//    }
//}


//311p 문제7
//using System;
//namespace PositionalPattern
//{
//    class MainApp
//    {
//        private static double getDiscountRate(object client)
//        {
//            switch(client)
//            {
//                case ("학생", int n) when n < 18:
//                    return 0.2;
//                case ("학생", _):
//                    return 0.1;
//                case ("일반", int n) when n < 18:
//                    return 0.1;
//                case ("일반", _):
//                    return 0.05;
//                default:
//                    return 0;
//            };
//        }
//        static void Main(string[] args)
//        {
//            var alice = (job: "학생", age: 17);
//            var bob = (job: "학생", age: 23);
//            var charlie = (job: "일반", age: 15);
//            var dave = (job: "일반", age: 21);

//            Console.WriteLine($"alice   : {getDiscountRate(alice)}");
//            Console.WriteLine($"bob     : {getDiscountRate(bob)}");
//            Console.WriteLine($"charlie : {getDiscountRate(charlie)}");
//            Console.WriteLine($"dave    : {getDiscountRate(dave)}");
//        }
//    }
//}


using System;
namespace Class_Program
{
    class Beverage
    {
        private string name;
        private int price;

        public Beverage(string name, int price)
        {
            this.name = name;
            this.price = price;
        }

        public virtual string Info()
        {
            return $"{name}: {price}";
        }
    }
    class Coffee : Beverage
    {
        private string beanType;

        public Coffee(string name, int price, string beanType) : base(name, price)
        {
            this.beanType = beanType;
        }

        public sealed override string Info()
        {
            return $"{name}: {price} (원두:{beanType})";
        }
    }
}