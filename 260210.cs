//namespace _260210
//{
//    class Beverage
//    {
//        private string name;
//        private int price;

//        public Beverage(string name, int price)
//        {
//            this.name = name;
//            this.price = price;
//        }
//        public virtual string Info()//버추얼 상속
//        {
//            return $"{name}: {price}";
//        }
//    }
//    class Coffee : Beverage
//    {
//        private string beanType;
//        public Coffee(string name, int price, string beanType) : base(name, price)
//        {
//            this.beanType = beanType;
//        }
//        public sealed override string Info()
//        {
//            return $"{base.Info()} (원두: {beanType})";
//        }
//    }
//    class Latte : Coffee
//    {
//        private int milkAmount;
//        public Latte(string name, int price, string beanType, int milkAmount)
//            : base(name, price, beanType)
//        {
//            this.milkAmount = milkAmount;
//        }
//        public new string Info()
//        {
//            return $"{base.Info()} (우유 {milkAmount}ml 사용)";
//        }
//    }
//    class MainApp
//    {
//        static void Main(string[] args)
//        {
//            Beverage drink1 = new Beverage("물", 1000);
//            Coffee drink2 = new Coffee("아메리카노", 4000, "에티오피아");
//            Latte drink3 = new Latte("라떼", 4500, "콜롬비아", 200);

//            Console.WriteLine(drink1.Info());
//            Console.WriteLine(drink2.Info());
//            Console.WriteLine(drink3.Info());

//            Coffee coffeeRef = drink3;
//            Console.WriteLine(coffeeRef.Info());
//        }
//    }
//}


//using System;
//using System.IO;

//namespace Interface
//{
//    interface ILogger
//    {
//        void WriteLog(string message);
//    }
//    class ConsoleLogger : ILogger
//    {
//        public void WriteLog(string message)
//        {
//            Console.WriteLine(
//                "{0} {1}",
//                DateTime.Now.ToLocalTime(), message);
//        }
//    }
//    class FileLogger : ILogger
//    {
//        private StreamWriter writer;

//        public FileLogger(string path)
//        {
//            writer = File.CreateText(path);
//            writer.AutoFlush = true;
//        }
//        public void WriteLog(string message)
//        {
//            writer.WriteLine("{0} {1}", DateTime.Now.ToShortTimeString(), message);
//        }
//    }
//    class ClimateMonitor
//    {
//        private ILogger logger;
//        public ClimateMonitor(ILogger logger)
//        {
//            this.logger = logger;
//        }
//        public void start()
//        {
//            while(true)
//            {
//                Console.Write("온도를 입력해주세요: ");
//                string temperature = Console.ReadLine();
//                if (temperature == "")
//                    break;

//                logger.WriteLog("현재 온도 : " + temperature);
//            }
//        }
//    }
//    class MainApp
//    {
//        static void Main(string[] args)
//        {
//            ClimateMonitor monitor = new ClimateMonitor(
//                new FileLogger("MyLog.Txt"));

//            monitor.start();
//        }
//    }
//}


//using System;
//namespace DerivedInterface
//{
//    interface ILogger
//    {
//        void WriteLog(string message);
//    }
//    interface IFormattableLogger : ILogger
//    {
//        void WriteLog(string format, params Object[] args);
//    }
//    class ConsoleLogger2 : IFormattableLogger
//    {
//        public void WriteLog(string message)
//        {
//            Console.WriteLine("{0} {1}",
//                DateTime.Now.ToLocalTime(), message);
//        }

//        public void WriteLog(string format, params Object[] args)
//        {
//            String message = String.Format(format, args);
//            Console.WriteLine("{0} {1}",
//                DateTime.Now.ToLocalTime(), message);
//        }
//    }
//    class MainApp
//    {
//        static void Main(string[] args)
//        {
//            IFormattableLogger logger = new ConsoleLogger2();
//            logger.WriteLog("The world is not flat.");
//            logger.WriteLog("{0} + {1} = {2}", 1, 1, 2);
//        }
//    }
//}


//using System;
//namespace MultiInterfaceInheritance
//{
//    interface IRunnable
//    {
//        void Run();
//    }
//    interface IFlyable
//    {
//        void Fly();
//    }
//    class FlyingCar : IRunnable, IFlyable
//    {
//        public void Run()
//        {
//            Console.WriteLine("Run! Run!");
//        }
//        public void Fly()
//        {
//            Console.WriteLine("Fly! Fly!");
//        }
//    }
//    class MainApp
//    {
//        static void Main(string[] args)
//        {
//            FlyingCar car = new FlyingCar();
//            car.Run();
//            car.Fly();

//            IRunnable runnable = car as IRunnable;
//            runnable.Run();

//            IFlyable flyable = car as IFlyable;
//            flyable.Fly();
//        }
//    }
//}


//using System;
//namespace DefaultImplementation
//{
//    interface ILogger
//    {
//        void WriteLog(string message);

//        void WriteError(string error)
//        {
//            WriteLog($"Error: {error}");
//        }
//    }
//    class ConsoleLogger : ILogger
//    {
//        public void WriteLog(string message)
//        {
//            Console.WriteLine(
//                $"{DateTime.Now.ToLocalTime()}, {message}");
//        }
//    }
//    class MainApp
//    {
//        static void Main(string[] args)
//        {
//            ILogger logger = new ConsoleLogger();
//            logger.WriteLog("System Up");
//            logger.WriteError("System Fail");

//            ConsoleLogger clogger = new ConsoleLogger();
//            clogger.WriteLog("System Up");
//            //clogger.WriteError("System Fail");
//        }
//    }
//}


using System;
namespace AbstractClass
{
    abstract class AbstractBase
    {
        protected void PrivateMethodA()
        {
            Console.WriteLine("AbstractBase.PrivateMethodA()");
        }
        public void PublicMethodA()
        {
            Console.WriteLine("AbstractBase.PublicMethodA()");
        }
        public abstract void AbstractMethodA();
    }
    class Derived : AbstractBase
    {
        public override void AbstractMethodA()
        {
            Console.WriteLine("Derived.AbstractMethodA()");
            PrivateMethodA();
        }
    }
    class MainApp
    {
        static void Main(string[] args)
        {
            AbstractBase obj = new Derived();
            obj.AbstractMethodA();
            obj.PublicMethodA();
        }
    }
}
