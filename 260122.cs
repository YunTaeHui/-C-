//[1-1] 다음의 문장들을 C#의 조건식 한줄로 표현하라. (true 일 때 문제번호를 출력하라)
//[1-1-1]
//using System;
//namespace _260121
//{
//    internal class Program
//    {
//        static void Main(string[] args)
//        {
//            Console.WriteLine("x 값을 입력하세요.");
//            int x = int.Parse(Console.ReadLine());
//            if (x > 90 && x < 100) Console.WriteLine("1");
//        }
//    }
//}

//[1-1-2]
//using System;
//namespace _260121
//{
//    internal class Program
//    {
//        static void Main(string[] args)
//        {
//            Console.WriteLine("ch 값을 입력하세요.");
//            char ch = char.Parse(Console.ReadLine());
//            if (ch != ' ' && ch != '\t') Console.WriteLine("2");
//        }
//    }
//}

//[1-1-3]
//namespace _260121
//{
//    internal class Program
//    {
//        static void Main(string[] args)
//        {
//            Console.WriteLine("년도 값을 입력하세요.");
//            int year = int.Parse(Console.ReadLine());
//            if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) Console.WriteLine("3");
//        }
//    }
//}

//[1-1-4]
//using System;
//namespace _260121
//{
//    internal class Program
//    {
//        static void Main(string[] args)
//        {
//            Console.WriteLine("true 또는 false 를 입력하세요.");
//            bool powerOn = bool.Parse(Console.ReadLine());
//            if (!powerOn) Console.WriteLine("4");
//        }
//    }
//}


//[1-2] 0~100점 사이의 값을 입력받았을 때, 점수에 따라 A~E 등급을 20점마다 끊어서 출력하라.
//(단, if문은 사용하지 않는다.)
//using System;
//namespace _260121
//{
//    internal class Program
//    {
//        static void Main(string[] args)
//        {
//            Console.WriteLine("점수를 입력하세요.");
//            int score = int.Parse(Console.ReadLine());
//            switch (score / 20)
//            {
//                case 5:     //100점
//                case 4:     //80 ~ 99
//                    Console.WriteLine("A");
//                    break;
//                case 3:     //60 ~ 79
//                    Console.WriteLine("B");
//                    break;
//                case 2:     //40 ~ 59
//                    Console.WriteLine("C");
//                    break;
//                case 1:     //20 ~ 39
//                    Console.WriteLine("D");
//                    break;
//                case 0:     //0 ~ 19
//                    Console.WriteLine("E");
//                    break;
//                default:     //0 ~ 19
//                    Console.WriteLine("잘못된 점수입니다.");
//                    break;
//            }
//        }
//    }
//}


//[1-3] 1+(1+2)+(1+2+3)+(1+2+3+4)+...+(1+2+3+...+10) 의 결과를 계산하는 프로그램을 작성하시오.
//using System;
//namespace _260121
//{
//    internal class Program
//    {
//        static void Main(string[] args)
//        {
//            //int total = 0;
//            //for (int i = 1; i <= 10; i++)
//            //{
//            //    int sum = 0;
//            //    for (int j = 1; j <= i; j++)
//            //    {
//            //        sum += j;
//            //    }
//            //    total += sum;
//            //}
//            int sum = 0;
//            int total = 0;
//            for (int i = 1; i <= 10; i++)
//            {
//                sum += i;
//                total += sum;
//            }
//            Console.WriteLine(total);
//        }
//    }
//}


//[1-4] 1+(-2)+3+(-4)+... 과 같은 식으로 계속 더해나갔을 때, 몇까지 더해야 총합이 100 이상이
//되는지 구하는 프로그램을 작성하시오.
//using System;
//namespace _260121
//{
//    internal class Program
//    {
//        static void Main(string[] args)
//        {
//            int delta = 1;
//            int sum = 0;
//            int n = 1;
//            while (true)
//            {
//                sum += n * delta;
//                delta = -delta;
//                if (sum >= 100) break;
//                n++;
//            }
//            Console.WriteLine($"총합이 100 이상이 되는 마지막 수: {n}");
//            Console.WriteLine($"그때의 총합: {sum}");
//        }
//    }
//}


//[1-5] 어떤 값을 두 개 입력받았을 때, 둘 다 숫자였다면 더해서 출력하고, 알파벳 문자열이었다면
//나열해서 출력하고 그 외에는 계산 불가를 출력하여라.(char 배열 사용할 것)
//using System;
//namespace _260121
//{
//    internal class Program
//    {
//        static bool IsAllDigits(char[] arr)
//        {
//            if (arr.Length == 0) return false;
//            foreach (char c in arr)
//            {
//                if (c < '0' || c > '9')
//                    return false;
//            }
//            return true;
//        }
//        static bool IsAllAlphabets(char[] arr)
//        {
//            if (arr.Length == 0) return false;
//            foreach (char c in arr)
//            {

//                bool isUpper = (c >= 'A' && c <= 'Z');
//                bool isLower = (c >= 'a' && c <= 'z');

//                if (!(isUpper || isLower))
//                    return false;
//            }
//            return true;
//        }
//        static void Main(string[] args)
//        {
//            Console.Write("값 1 입력: ");
//            char[] a = Console.ReadLine().ToCharArray();

//            Console.Write("값 2 입력: ");
//            char[] b = Console.ReadLine().ToCharArray();

//            //둘 다 숫자면 더한다
//            if (int.TryParse(a, out int num1) && int.TryParse(b, out int num2))
//            {
//                Console.WriteLine(num1 + num2);
//            }
//            //둘 다 알파벳이면 나열한다
//            else if (IsAllAlphabets(a) && IsAllAlphabets(b))
//            {
//                Console.WriteLine(new string(a) + new string(b));
//            }
//            //그 외에는 계산 불가
//            else
//            {
//                Console.WriteLine("계산 불가");
//            }
//        }
//    }
//}


//[1-6] 다음의 코드에서 enum을 쓰지 않고 같은 결과를 낼 수 있게 변경하시오.
//[예시]
//using System;
//namespace _260121
//{
//    class Program
//    {
//        enum DIR { NONE, LEFT, UP, RIGHT, DOWN };
//        static void Main(string[] args)
//        {
//            DIR dir;
//            do
//            {
//                Console.WriteLine("방향을 입력해주세요 : (0~4)");
//                string input = Console.ReadLine();
//                dir = (DIR)int.Parse(input);
//                Console.WriteLine(dir + "방향입니다.");
//            } while (dir != DIR.NONE);
//        }
//    }
//}
//[풀이-배열]
//using System;
//namespace _260121
//{
//    class Program
//    {
//        static void Main(string[] args)
//        {
//            string[] dirName = { "NONE", "LEFT", "UP", "RIGHT", "DOWN" };
//            int dir;
//            do
//            {
//                Console.WriteLine("방향을 입력해주세요 : (0~4)");
//                dir = int.Parse(Console.ReadLine());

//                if (dir >= 0 && dir < dirName.Length)
//                    Console.WriteLine(dirName[dir] + " 방향입니다.");
//                else
//                    Console.WriteLine("잘못된 입력입니다.");
//            } while (dir != 0);
//        }
//    }
//}
//[풀이-switch 식]
//using System;
//namespace _260121
//{
//    class Program
//    {
//        static void Main(string[] args)
//        {
//            int dir;
//            do
//            {
//                Console.WriteLine("방향을 입력해주세요 : (0~4)");
//                dir = int.Parse(Console.ReadLine());

//                string name = dir switch
//                {
//                    0 => "NONE",
//                    1 => "LEFT",
//                    2 => "UP",
//                    3 => "RIGHT",
//                    4 => "DOWN",
//                    _ => null
//                };

//                if (name != null)
//                    Console.WriteLine($"{name} 방향입니다.");
//                else
//                    Console.WriteLine("잘못된 입력입니다.");

//            } while (dir != 0);
//        }
//    }
//}


//[1-7] 숫자로 이루어진 문자열 str이 있을 때 각 자리의 합을 더한 결과를 출력하는 코드를
//완성하라 만일 문자열이 "12345" 라면 '1+2+3+4+5'의 결과인 15를 출력이 출력되어야 한다.
//(1)에 알맞은 코드를 넣으시오.
//[예시]
//using System;
//namespace _260121
//{
//    class Program
//    {
//        static void Main(string[] args)
//        {
//            string str = "12345";
//            int sum = 0;

//            for (int i = 0; i < str.Length; i++)
//            {
//                //(1) 알맞은 코드를 넣어 완성하시오.
//            }
//            Console.WriteLine("sum={0}", sum);
//        }
//    }
//}
//[풀이]
//using System;
//namespace _260121
//{
//    class Program
//    {
//        static void Main(string[] args)
//        {
//            string str = "12345";
//            int sum = 0;

//            for(int i=0; i<str.Length; i++)
//            {
//                //sum += int.Parse(str[i].ToString());
//                sum += str[i] - '0';
//            }
//            Console.WriteLine("sum={0}", sum);
//        }
//    }
//}


//[1-8] 자신의 이름 데이터를 XOR를 사용해 암호화 복호화를 하는 프로그램을 작성하시오.
//(단, 사용자 화면이 존재하여야하며 패스워드는 ReadLine()으로 입력받아야만 한다.
//byte 배열을 만들 때에는 Encoding.Unicode.GetBytes(str);을 사용한다.
//byte 배열을 string 만들 때에는 Encoding.Default.GetString(bytearr);을 사용한다.)
//using System;
//using System.Text;

//namespace _260121
//{
//    class Program
//    {
//        //XOR 처리 함수 (암호화/복호화 공용)
//        static byte[] XOR(byte[] data, byte[] key)
//        {
//            byte[] result = new byte[data.Length];
//            for (int i = 0; i < data.Length; i++)
//            {
//                result[i] = (byte)(data[i] ^ key[i % key.Length]);
//            }
//            return result;
//        }
//        static void Main(string[] args)
//        {
//            Console.Write("이름을 입력하세요: ");
//            string name = Console.ReadLine();

//            Console.Write("패스워드를 입력하세요: ");
//            string password = Console.ReadLine();

//            //byte 배열 만들 때: Encoding.Unicode.GetBytes(str)
//            byte[] nameBytes = Encoding.Unicode.GetBytes(name);
//            byte[] keyBytes = Encoding.Unicode.GetBytes(password);

//            //암호화
//            byte[] encrypted = XOR(nameBytes, keyBytes);

//            // 출력용: 암호화 결과를 사람이 볼 수 있게 Hex로 변형
//            Console.WriteLine("\n[암호화 결과 (HEX)]");
//            Console.WriteLine(BitConverter.ToString(encrypted));

//            //byte 배열을 string 만들 때: Encoding.Default.GetString(bytearr)
//            string encryptedText = Encoding.Default.GetString(encrypted);

//            Console.WriteLine("\n[암호화 결과 (문자열로 보기)]");
//            Console.WriteLine(encryptedText);

//            // 복호화 (암호화 데이터에 같은 패스워드로 XOR)
//            byte[] decrypted = XOR(encrypted, keyBytes);

//            // 복호화 문자열 Default로 표시
//            string decryptedText = Encoding.Unicode.GetString(decrypted);

//            Console.WriteLine("\n[복호화 결과]");
//            Console.WriteLine(decryptedText);
//        }
//    }
//}


//using System;
//namespace BasicClass
//{
//    class Cat
//    {
//        public string Name;
//        public string Color;

//        public void Meow()
//        {
//            Console.WriteLine($"{Name} : 야옹");
//        }
//    }
//    class MainApp
//    {
//        static void Main(string[] args)
//        {
//            Cat kitty = new Cat();
//            kitty.Color = "하얀색";
//            kitty.Name = "키티";
//            kitty.Meow();
//            Console.WriteLine($"{kitty.Name} : {kitty.Color}");

//            Cat nero = new Cat();
//            nero.Color = "검은색";
//            nero.Name = "네로";
//            nero.Meow();
//            Console.WriteLine($"{nero.Name} : {nero.Color}");
//        }
//    }
//}


//using System;
//namespace Constructor
//{
//    class Cat
//    {
//        public Cat()
//        {
//            Name = "";
//            Color = "";
//        }
//        public Cat(string _Name, string _Color)
//        {
//            Name = _Name;
//            Color = _Color;
//        }
//        ~Cat()
//        {
//            Console.WriteLine($"{Name} : 잘가");
//        }
//        public string Name;
//        public string Color;
//        public void Meow()
//        {
//            Console.WriteLine($"{Name} : 야옹");
//        }
//    }
//    class MainApp
//    {
//        static void Main(string[] args)
//        {
//            Cat kitty = new Cat("키티", "하얀색");
//            kitty.Meow();
//            Console.WriteLine($"{kitty.Name} : {kitty.Color}");

//            Cat nero = new Cat("네로", "검은색");
//            nero.Meow();
//            Console.WriteLine($"{nero.Name} : {nero.Color}");
//        }
//    }
//}


//using System;
//class Global
//{
//    public static int Count = 0;
//}
//class ClassA
//{
//    public ClassA()
//    {
//        Global.Count++;
//    }
//}
//class ClassB
//{
//    public ClassB()
//    {
//        Global.Count++;
//    }
//}
//class MainApp
//{
//    static void Main()
//    {
//        Console.WriteLine($"Global.Count : {Global.Count}");
//        new ClassA();
//        new ClassA();
//        new ClassB();
//        new ClassB();

//        Console.WriteLine($"Global.Count : {Global.Count}");
//    }
//}


//using System;
//namespace DeepCopy
//{
//    class MyClass
//    {
//        public int MyField1;
//        public int MyField2;

//        public MyClass DeepCopy()
//        {
//            MyClass newCopy = new MyClass();
//            newCopy.MyField1 = this.MyField1;
//            newCopy.MyField2 = this.MyField2;

//            return newCopy;
//        }
//    }
//    class MainApp
//    {
//        static void Main(string[] args)
//        {
//            Console.WriteLine("Shallow Copy");
//            {
//                MyClass source = new MyClass();
//                source.MyField1 = 10;
//                source.MyField2 = 20;

//                MyClass target = source;
//                target.MyField2 = 30;

//                Console.WriteLine($"{source.MyField1} {source.MyField2}");
//                Console.WriteLine($"{target.MyField1} {target.MyField2}");
//            }

//            Console.WriteLine("Deep Copy");
//            {
//                MyClass source = new MyClass();
//                source.MyField1 = 10;
//                source.MyField2 = 20;

//                MyClass target = source.DeepCopy();
//                target.MyField2 = 30;

//                Console.WriteLine($"{source.MyField1} {source.MyField2}");
//                Console.WriteLine($"{target.MyField1} {target.MyField2}");
//            }
//        }
//    }
//}


using System;
namespace This
{
    class Employee
    {
        private string Name;
        private string Position;

        public void SetName(string Name)
        {
            this.Name = Name;
        }
        public string GetName()
        {
            return Name;
        }
        public void SetPosition(string Position)
        {
            this.Position = Position;
        }
        public string GetPosition()
        {
            return this.Position;
        }
    }
    class MainApp
    {
        static void Main(string[] args)
        {
            Employee pooh = new Employee();
            pooh.SetName("Pooh");
            pooh.SetPosition("Waiter");
            Console.WriteLine($"{pooh.GetName()} {pooh.GetPosition()}");

            Employee trigger = new Employee();
            trigger.SetName("Pooh");
            trigger.SetPosition("Waiter");
            Console.WriteLine($"{trigger.GetName()} {trigger.GetPosition()}");
        }
    }
}