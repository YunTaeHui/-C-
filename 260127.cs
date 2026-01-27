//using System;
//namespace Overriding
//{
//    class ArmorSuite
//    {
//        public virtual void Initialize()
//        {
//            Console.WriteLine("Armored");
//        }
//    }
//    class IronMan : ArmorSuite
//    {
//        public override void Initialize()
//        {
//            base.Initialize();
//            Console.WriteLine("Repulsor Rays Armed");
//        }
//    }
//    class WarMachine : ArmorSuite
//    {
//        public override void Initialize()
//        {
//            base.Initialize();
//            Console.WriteLine("Double-Barrel Cannons Armed");
//            Console.WriteLine("Micro-Rocket Launcher Armed");
//        }
//    }
//    class MainApp
//    {
//        static void Main(string[] args)
//        {
//            Console.WriteLine("Creating ArmorSuite...");
//            ArmorSuite armorsuite = new ArmorSuite();

//        }
//    }
//}


//using System;
//namespace MethodHiding
//{
//    class Base
//    {
//        public virtual void MyMethod()
//        {
//            Console.WriteLine("Base.MyMethod()");
//        }
//    }
//    class Derived : Base
//    {
//        public override void MyMethod()
//        {
//            Console.WriteLine("Derived.MyMethod()");
//        }
//    }
//    class MainApp
//    {
//        static void Main(string[] args)
//        {
//            Base baseObj = new Base();
//            baseObj.MyMethod();

//            Derived derivedObj = new Derived();
//            derivedObj.MyMethod();

//            Base baseOrDerived = new Derived();
//            baseOrDerived.MyMethod();
//        }
//    }
//}


//using System;
//class Base
//{
//    public virtual void SealMe()
//    {
//    }
//}
//class Derived : Base
//{
//    public sealed override void SealMe()
//    {
//    }
//}
//class WantToOverride : Derived
//{
//    public override void SealMe()
//    {
//    }
//}
//class MainApp
//{
//    static void Main(string[] args)
//    {
//    }
//}


//using System;
//namespace ReadonlyFields
//{
//    class configuration
//    {
//        private readonly int min;
//        private readonly int max;

//        public configuration(int v1, int v2)
//        {
//            min = v1;
//            min = v2;
//        }
//        public void ChangeMax(int newMax)
//        {
//            //max = newMax;
//        }
//        public int getMin()
//        {
//            return min;
//        }
//    }
//    class MainApp
//    {
//        static void Main(string[] args)
//        {
//            configuration c = new configuration(100, 10);
//            Console.WriteLine($"{c.getMin()}");
//        }
//    }
//}


//using System;
//using System.Collections.Generic;

//namespace NestedClass
//{
//    class Configuration
//    {
//        List<ItemValue> listConfig = new List<ItemValue>();
//        public void SetConfig(string item, string value)
//        {
//            ItemValue iv = new ItemValue();
//            iv.SetValue(this, item, value);
//        }
//        public string GetConfig(string item)
//        {
//            foreach (ItemValue iv in listConfig)
//            {
//                if (iv.GetItem() == item)
//                    return iv.GetValue();
//            }
//            return "";
//        }
//        private class ItemValue
//        {
//            private string item;
//            private string value;

//            public void SetValue(Configuration config, string item, string value)
//            {
//                this.item = item;
//                this.value = value;

//                bool found = false;
//                for(int i=0; i<config.listConfig.Count; i++)
//                {
//                    if (config.listConfig[i].item == item)
//                    {
//                        config.listConfig[i] = this;
//                        found = true;
//                        break;
//                    }
//                }
//                if (found == false)
//                    config.listConfig.Add(this);
//            }
//            public string GetItem()
//            { return item; }
//            public string GetValue()
//            { return value; }
//        }
//    }
//    class MainApp
//    {
//        static void Main(string[] args)
//        {
//            Configuration config = new Configuration();
//            config.SetConfig("Version", "V 5.0");
//            config.SetConfig("Size", "655,324 KB");

//            Console.WriteLine(config.GetConfig("Version"));
//            Console.WriteLine(config.GetConfig("Size"));
//            config.SetConfig("Version", "V 5.0.1");
//            Console.WriteLine(config.GetConfig("Version"));
//        }
//    }
//}


using System;
using MyExtension;

namespace MyExtension
{
    public static class IntegerExtension
    {
        public static int Square(this int MyInt)
        {
            return MyInt * MyInt;
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
namespace MyExtensionMethod
{
    class MainApp
    {
        static void Main(string[] args)
        {
            Console.WriteLine($"3^2 : {3.Square()}");
            Console.WriteLine($"3^4 : {3.Power(4)}");
            Console.WriteLine($"2^10 : {2.Power(10)}");

        }
    }
}