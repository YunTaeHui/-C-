//[3-1-2]
//namespace _260219
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
//        public Rectangle(int w, int h)
//        {
//            this.width = w;
//            this.height = h;
//        }
//        public override void calcArea()
//        {
//            area = width * height;
//        }
//    }
//    class Circle : Shape
//    {
//        const double PI = 3.141592;
//        int radius { get; init; }
//        public Circle(int r)
//        {
//            this.radius = r;
//        }
//        public override void calcArea()
//        {
//            area = radius * radius * PI;
//        }
//    }
//    class Square : Rectangle
//    {
//        public Square(int w) : base(w, w)
//        { }
//    }
//    class MainApp
//    {
//        static void Main(string[] args)
//        {
//            Shape[] shapes = { new Rectangle(3, 4), new Circle(4), new Square(5) };
//            foreach (Shape s in shapes)
//            {
//                s.calcArea();
//                Console.WriteLine(s.area);
//            }
//        }
//    }
//}


//[3-1-3]
//namespace _260219
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
//        public Rectangle(int w, int h)
//        {
//            this.width = w;
//            this.height = h;
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
//        public Circle(int r)
//        {
//            this.radius = r;
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
//        public Square(int w) : base(w, w)
//        { }
//    }
//    class MainApp
//    {
//        static void Main(string[] args)
//        {
//            Shape[] shapes = { new Rectangle(3, 4), new Circle(4), new Square(5) };
//            foreach (Shape s in shapes)
//            {
//                s.calcArea();
//                Console.WriteLine(s.area);
//                s.calcPerimeter();
//                Console.WriteLine(s.perimeter);
//            }
//        }
//    }
//}


//[3-1-4]
//namespace _260219
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
//        public Rectangle(int w, int h)
//        {
//            this.width = w;
//            this.height = h;
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
//        public Circle(int r)
//        {
//            this.radius = r;
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
//        public Square(int w) : base(w, w)
//        { }
//    }
//    class MainApp
//    {
//        static void Main(string[] args)
//        {
//            Shape[] shapes = { new Rectangle(3, 4), new Circle(4), new Square(5) };
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


//[3-2]
//using System;
//class Flower
//{
//    public string flowerName;
//    public int cost;
//    public Flower()
//    {
//        flowerName = "꽃";
//        cost = 10000;
//    }
//    public virtual void printAttributes()
//    {
//        Console.WriteLine(
//            "flowerName = {0}, cost = {1}",
//            flowerName, cost);
//    }
//}
//class Rose : Flower
//{
//    public Rose()
//    {
//        flowerName = "장미";
//        cost = 20000;
//    }
//}
//class Tulip : Flower
//{
//    public Tulip()
//    {
//        flowerName = "튤립";
//        cost = 30000;
//    }
//}
//class MainApp
//{
//    static void Main(string[] args)
//    {
//        Flower flower = new Flower();
//        Rose rose = new Rose();
//        Tulip tulip = new Tulip();

//        flower.printAttributes();
//        rose.printAttributes();
//        tulip.printAttributes();
//    }
//}


//[3-3]
//interface Car
//{
//    string CARSIZE { get; set; }
//    void size();
//    void price();
//    void option();
//}
//class Pride : Car
//{
//    public string CARSIZE { get; set; }
//    public void size()
//    {
//        Console.WriteLine("자동차 크기: {0}", CARSIZE);
//    }
//    public void price()
//    {
//        Console.WriteLine("최고 가격: 1600만원");
//    }
//    public void option()
//    {
//        Console.WriteLine("풀옵션 가격: 200만원");
//    }
//    public void discount()
//    {
//        Console.WriteLine("구형교체: 50만원 할인");
//    }
//}
//class Sonata : Car
//{
//    public string CARSIZE { get; set; }
//    public void size()
//    {
//        Console.WriteLine("자동차 크기: {0}", CARSIZE);
//    }
//    public void price()
//    {
//        Console.WriteLine("최고 가격: 3000만원");
//    }
//    public void option()
//    {
//        Console.WriteLine("풀옵션 가격: 350만원");
//    }
//    public void discount()
//    {
//        Console.WriteLine("구형교체: 100만원 할인");
//    }
//}
//class MainApp
//{
//    static void Main(string[] args)
//    {
//        Pride pr = new Pride() { CARSIZE = "small type" };
//        pr.size();
//        pr.price();
//        pr.option();
//        pr.discount();

//        Console.WriteLine("\n====================\n");

//        Sonata so = new Sonata() { CARSIZE = "middle type" };
//        so.size();
//        so.price();
//        so.option();
//        so.discount();
//    }
//}


//[3-4]
//interface Car
//{
//    string CARSIZE { get; set; }
//    void size();
//    void price();
//    void option();
//}
//interface CarMaker
//{
//    string CarBrand { get; set; }
//    void maker();
//}
//class CarTransfer
//{
//    public void prideCost()
//    {
//        Console.WriteLine("프라이드 운송비: 5만원");
//    }
//    public void sonataCost()
//    {
//        Console.WriteLine("소나타 운송비: 10만원");
//    }
//}
//class Pride : CarTransfer, Car, CarMaker
//{
//    public string CarBrand { get; set; }
//    public string CARSIZE { get; set; }
//    public void maker()
//    {
//        Console.WriteLine("제조사: {0}", CarBrand);
//    }
//    public void size()
//    {
//        Console.WriteLine("자동차 크기: {0}", CARSIZE);
//    }
//    public void price()
//    {
//        Console.WriteLine("최고 가격: 1600만원");
//    }
//    public void option()
//    {
//        Console.WriteLine("풀옵션 가격: 200만원");
//    }
//    public void discount()
//    {
//        Console.WriteLine("구형교체: 50만원 할인");
//    }
//}
//class Sonata : CarTransfer, Car, CarMaker
//{
//    public string CarBrand { get; set; }
//    public string CARSIZE { get; set; }
//    public void maker()
//    {
//        Console.WriteLine("제조사: {0}", CarBrand);
//    }
//    public void size()
//    {
//        Console.WriteLine("자동차 크기: {0}", CARSIZE);
//    }
//    public void price()
//    {
//        Console.WriteLine("최고 가격: 3000만원");
//    }
//    public void option()
//    {
//        Console.WriteLine("풀옵션 가격: 350만원");
//    }
//    public void discount()
//    {
//        Console.WriteLine("구형교체: 100만원 할인");
//    }
//}
//class MainApp
//{
//    static void Main(string[] args)
//    {
//        Pride pr = new Pride() { CarBrand = "KIA", CARSIZE = "small type" };
//        pr.maker();
//        pr.size();
//        pr.price();
//        pr.option();
//        pr.discount();
//        pr.prideCost();

//        Console.WriteLine("\n====================\n");

//        Sonata so = new Sonata() { CarBrand = "HYUNDAI", CARSIZE = "middle type" };
//        so.maker();
//        so.size();
//        so.price();
//        so.option();
//        so.discount();
//        so.sonataCost();
//    }
//}


//[3-5]
//interface Car
//{
//    string CARSIZE { get; set; }
//    void size();
//    void price();
//    void option();
//}
//interface CarMaker
//{
//    string CarBrand { get; set; }
//    void maker();
//}
//class CarTransfer
//{
//    public int PrideTransferCost { get; set; }
//    public int SonataTransferCost { get; set; }
//    public void prideCost()
//    {
//        Console.WriteLine("프라이드 운송비: {0}만원", PrideTransferCost);
//    }
//    public void sonataCost()
//    {
//        Console.WriteLine("소나타 운송비: {0}만원", SonataTransferCost);
//    }
//}
//class Pride : CarTransfer, Car, CarMaker
//{
//    public string CarBrand { get; set; }
//    public string CARSIZE { get; set; }
//    public int MaxPrice { get; set; }
//    public int FullOptionPrice { get; set; }
//    public int DiscountPrice { get; set; }
//    public void maker()
//    {
//        Console.WriteLine("제조사: {0}", CarBrand);
//    }
//    public void size()
//    {
//        Console.WriteLine("자동차 크기: {0}", CARSIZE);
//    }
//    public void price()
//    {
//        Console.WriteLine("최고 가격: {0}만원", MaxPrice);
//    }
//    public void option()
//    {
//        Console.WriteLine("풀옵션 가격: {0}만원", FullOptionPrice);
//    }
//    public void discount()
//    {
//        Console.WriteLine("구형교체: {0}만원 할인", DiscountPrice);
//    }
//}
//class Sonata : CarTransfer, Car, CarMaker
//{
//    public string CarBrand { get; set; }
//    public string CARSIZE { get; set; }
//    public int MaxPrice { get; set; }
//    public int FullOptionPrice { get; set; }
//    public int DiscountPrice { get; set; }
//    public void maker()
//    {
//        Console.WriteLine("제조사: {0}", CarBrand);
//    }
//    public void size()
//    {
//        Console.WriteLine("자동차 크기: {0}", CARSIZE);
//    }
//    public void price()
//    {
//        Console.WriteLine("최고 가격: {0}만원", MaxPrice);
//    }
//    public void option()
//    {
//        Console.WriteLine("풀옵션 가격: {0}만원", FullOptionPrice);
//    }
//    public void discount()
//    {
//        Console.WriteLine("구형교체: {0}만원 할인", DiscountPrice);
//    }
//}
//class MainApp
//{
//    static void Main(string[] args)
//    {
//        Pride pr = new Pride()
//        {
//            CarBrand = "KIA",
//            CARSIZE = "small type",
//            MaxPrice = 1600,
//            FullOptionPrice = 200,
//            DiscountPrice = 50,
//            PrideTransferCost = 5
//        };
//        pr.maker();
//        pr.size();
//        pr.price();
//        pr.option();
//        pr.discount();
//        pr.prideCost();

//        Console.WriteLine("\n====================\n");

//        Sonata so = new Sonata()
//        {
//            CarBrand = "HYUNDAI",
//            CARSIZE = "middle type",
//            MaxPrice = 3000,
//            FullOptionPrice = 350,
//            DiscountPrice = 100,
//            SonataTransferCost = 10
//        };
//        so.maker();
//        so.size();
//        so.price();
//        so.option();
//        so.discount();
//        so.sonataCost();
//    }
//}


//[3-6]
//interface Car
//{
//    string CARSIZE { get; set; }
//    void size();
//    void price();
//    void option();
//}
//interface CarMaker
//{
//    string CarBrand { get; set; }
//    void maker();
//}
//class CarTransfer
//{
//    public int PrideTransferCost { get; set; }
//    public int SonataTransferCost { get; set; }
//    public void prideCost()
//    {
//        Console.WriteLine("프라이드 운송비: {0}만원", PrideTransferCost);
//    }
//    public void sonataCost()
//    {
//        Console.WriteLine("소나타 운송비: {0}만원", SonataTransferCost);
//    }
//}
//class Pride : CarTransfer, Car, CarMaker
//{
//    public string CarBrand { get; set; }
//    public string CARSIZE { get; set; }
//    public int MaxPrice { get; set; }
//    public int FullOptionPrice { get; set; }
//    public int DiscountPrice { get; set; }
//    public void maker()
//    {
//        Console.WriteLine("제조사: {0}", CarBrand);
//    }
//    public void size()
//    {
//        Console.WriteLine("자동차 크기: {0}", CARSIZE);
//    }
//    public void price()
//    {
//        Console.WriteLine("최고 가격: {0}만원", MaxPrice);
//    }
//    public void option()
//    {
//        Console.WriteLine("풀옵션 가격: {0}만원", FullOptionPrice);
//    }
//    public void discount()
//    {
//        Console.WriteLine("구형교체: {0}만원 할인", DiscountPrice);
//    }
//}
//class Sonata : CarTransfer, Car, CarMaker
//{
//    public string CarBrand { get; set; }
//    public string CARSIZE { get; set; }
//    public int MaxPrice { get; set; }
//    public int FullOptionPrice { get; set; }
//    public int DiscountPrice { get; set; }
//    public void maker()
//    {
//        Console.WriteLine("제조사: {0}", CarBrand);
//    }
//    public void size()
//    {
//        Console.WriteLine("자동차 크기: {0}", CARSIZE);
//    }
//    public void price()
//    {
//        Console.WriteLine("최고 가격: {0}만원", MaxPrice);
//    }
//    public void option()
//    {
//        Console.WriteLine("풀옵션 가격: {0}만원", FullOptionPrice);
//    }
//    public void discount()
//    {
//        Console.WriteLine("구형교체: {0}만원 할인", DiscountPrice);
//    }
//}
//class MainApp
//{
//    //static int ReadInt(string msg)
//    //{
//    //    while (true)
//    //    {
//    //        Console.Write(msg);
//    //        string s = Console.ReadLine() ?? "";
//    //        if (int.TryParse(s, out int v)) return v;
//    //        Console.WriteLine("숫자를 입력하세요.");
//    //    }
//    //}
//    //static string ReadString(string msg)
//    //{
//    //    while (true)
//    //    {
//    //        Console.Write(msg);
//    //        string s = Console.ReadLine() ?? "";
//    //        if (!int.TryParse(s, out _) && s.Length > 0)
//    //            return s;
//    //        Console.WriteLine("문자를 입력하세요.");
//    //    }
//    //}
//    static void Main(string[] args)
//    {
//        Console.WriteLine("=== Pride 정보입력 ===");
//        Pride pr = new Pride();

//        Console.Write("제조사(CarBrand): ");
//        pr.CarBrand = Console.ReadLine();

//        Console.Write("자동차 크기(CARSIZE): ");
//        pr.CARSIZE = Console.ReadLine();

//        Console.Write("최고 가격(MaxPrice): ");
//        string input = Console.ReadLine();
//        pr.MaxPrice = Int32.Parse(input);

//        Console.Write("풀옵션 가격(FullOptionPrice): ");
//        string input1 = Console.ReadLine();
//        pr.FullOptionPrice = Int32.Parse(input1);

//        Console.Write("구형교체 할인(DiscountPrice): ");
//        string input2 = Console.ReadLine();
//        pr.DiscountPrice = Int32.Parse(input2);

//        Console.Write("운송비(PrideTransferCost): ");
//        string input3 = Console.ReadLine();
//        pr.PrideTransferCost = Int32.Parse(input3);
//        Console.WriteLine();
//        pr.maker();
//        pr.size();
//        pr.price();
//        pr.option();
//        pr.discount();
//        pr.prideCost();

//        Console.WriteLine("\n====================\n");

//        Console.WriteLine("=== Sonata 정보입력 ===");
//        Sonata so = new Sonata();

//        Console.Write("제조사(CarBrand): ");
//        so.CarBrand = Console.ReadLine();

//        Console.Write("자동차 크기(CARSIZE): ");
//        so.CARSIZE = Console.ReadLine();

//        Console.Write("최고 가격(MaxPrice): ");
//        string input4 = Console.ReadLine();
//        so.MaxPrice = Int32.Parse(input4);

//        Console.Write("풀옵션 가격(FullOptionPrice): ");
//        string input5 = Console.ReadLine();
//        so.FullOptionPrice = Int32.Parse(input5);

//        Console.Write("구형교체 할인(DiscountPrice): ");
//        string input6 = Console.ReadLine();
//        so.DiscountPrice = Int32.Parse(input6);

//        Console.Write("운송비(SonataTransferCost): ");
//        string input7 = Console.ReadLine();
//        so.SonataTransferCost = Int32.Parse(input7);
//        Console.WriteLine();
//        so.maker();
//        so.size();
//        so.price();
//        so.option();
//        so.discount();
//        so.sonataCost();
//    }
//}


//[3-7]
//interface Car
//{
//    string CARSIZE { get; set; }
//    void size();
//    void price();
//    void option();
//}
//interface CarMaker
//{
//    string CarBrand { get; set; }
//    void maker();
//}
//abstract class CarTransfer : Car, CarMaker
//{
//    public string CarBrand { get; set; }
//    public string CARSIZE { get; set; }
//    public int MaxPrice { get; set; }
//    public int FullOptionPrice { get; set; }
//    public int DiscountPrice { get; set; }
//    public int TransferCost { get; set; }
//    public void maker()
//    {
//        Console.WriteLine("제조사: {0}", CarBrand);
//    }
//    public void size()
//    {
//        Console.WriteLine("자동차 크기: {0}", CARSIZE);
//    }
//    public void price()
//    {
//        Console.WriteLine("최고 가격: {0}만원", MaxPrice);
//    }
//    public void option()
//    {
//        Console.WriteLine("풀옵션 가격: {0}만원", FullOptionPrice);
//    }
//    public void discount()
//    {
//        Console.WriteLine("구형교체: {0}만원 할인", DiscountPrice);
//    }

//}
//class Pride : CarTransfer
//{
//    public void prideCost()
//    {
//        Console.WriteLine("Pride 운송비: {0}만원", TransferCost);
//    }
//}
//class Sonata : CarTransfer
//{
//    public void sonataCost()
//    {
//        Console.WriteLine("Sonata 운송비: {0}만원", TransferCost);
//    }
//}
//class MainApp
//{
//    //static int ReadInt(string msg)
//    //{
//    //    while (true)
//    //    {
//    //        Console.Write(msg);
//    //        string s = Console.ReadLine() ?? "";
//    //        if (int.TryParse(s, out int v)) return v;
//    //        Console.WriteLine("숫자를 입력하세요.");
//    //    }
//    //}
//    //static string ReadString(string msg)
//    //{
//    //    while (true)
//    //    {
//    //        Console.Write(msg);
//    //        string s = Console.ReadLine() ?? "";
//    //        if (!int.TryParse(s, out _) && s.Length > 0)
//    //            return s;
//    //        Console.WriteLine("문자를 입력하세요.");
//    //    }
//    //}
//    static void Main(string[] args)
//    {
//        Console.WriteLine("=== Pride 정보입력 ===");
//        Pride pr = new Pride();

//        Console.Write("제조사(CarBrand): ");
//        pr.CarBrand = Console.ReadLine();

//        Console.Write("자동차 크기(CARSIZE): ");
//        pr.CARSIZE = Console.ReadLine();

//        Console.Write("최고 가격(MaxPrice): ");
//        string input = Console.ReadLine();
//        pr.MaxPrice = Int32.Parse(input);

//        Console.Write("풀옵션 가격(FullOptionPrice): ");
//        string input1 = Console.ReadLine();
//        pr.FullOptionPrice = Int32.Parse(input1);

//        Console.Write("구형교체 할인(DiscountPrice): ");
//        string input2 = Console.ReadLine();
//        pr.DiscountPrice = Int32.Parse(input2);

//        Console.Write("Pride 운송비(PrideTransferCost): ");
//        string input3 = Console.ReadLine();
//        pr.TransferCost = Int32.Parse(input3);
//        Console.WriteLine();
//        pr.maker();
//        pr.size();
//        pr.price();
//        pr.option();
//        pr.discount();
//        pr.prideCost();

//        Console.WriteLine("\n====================\n");

//        Console.WriteLine("=== Sonata 정보입력 ===");
//        Sonata so = new Sonata();

//        Console.Write("제조사(CarBrand): ");
//        so.CarBrand = Console.ReadLine();

//        Console.Write("자동차 크기(CARSIZE): ");
//        so.CARSIZE = Console.ReadLine();

//        Console.Write("최고 가격(MaxPrice): ");
//        string input4 = Console.ReadLine();
//        so.MaxPrice = Int32.Parse(input4);

//        Console.Write("풀옵션 가격(FullOptionPrice): ");
//        string input5 = Console.ReadLine();
//        so.FullOptionPrice = Int32.Parse(input5);

//        Console.Write("구형교체 할인(DiscountPrice): ");
//        string input6 = Console.ReadLine();
//        so.DiscountPrice = Int32.Parse(input6);

//        Console.Write("Sonata 운송비(SonataTransferCost): ");
//        string input7 = Console.ReadLine();
//        so.TransferCost = Int32.Parse(input7);
//        Console.WriteLine();
//        so.maker();
//        so.size();
//        so.price();
//        so.option();
//        so.discount();
//        so.sonataCost();
//    }
//}


//using System;
//namespace CopyingArray
//{
//    class MainApp
//    {
//        static void CopyArray<T>(T[] source, T[] target)
//        {
//            for (int i = 0; i < source.Length; i++)
//                target[i] = source[i];
//        }
//        static void Main(string[] args)
//        {
//            int[] source = { 1, 2, 3, 4, 5 };
//            int[] target = new int[source.Length];

//            CopyArray<int>(source, target);

//            foreach (int element in target)
//                Console.WriteLine(element);

//            string[] source2 = { "하나", "둘", "셋", "넷", "다섯" };
//            string[] target2 = new string[source2.Length];

//            CopyArray<string>(source2, target2);

//            foreach (string element in target2)
//                Console.WriteLine(element);
//        }
//    }
//}


//using System;
//namespace CopyingArray
//{
//    class MainApp
//    {
//        static void Main(string[] args)
//        {
//            int[] source = { 1, 2, 3, 4, 5 };
//            int[] target = new int[source.Length];

//            for (int i = 0; i < source.Length; i++)
//                target[i] = source[i];

//            foreach (int element in target)
//                Console.WriteLine(element);

//            string[] source2 = { "하나", "둘", "셋", "넷", "다섯" };
//            string[] target2 = new string[source2.Length];

//            for (int i = 0; i < source2.Length; i++)
//                target2[i] = source2[i];

//            foreach (string element in target2)
//                Console.WriteLine(element);
//        }
//    }
//}


using System;
namespace Generic
{
    class MyList<T>
    {
        private T[] array;

        public MyList()
        {
            array = new T[3];
        }
        public T this[int index]
    }
}