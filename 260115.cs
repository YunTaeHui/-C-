using System;
using System.Collections;
using System.Diagnostics;
using System.Globalization;


//using System.Globalization;
using static System.Console;

namespace _260114
{
    class MainApp
    {
        //enum DialogResult { YES = 10, NO, CANCEL, CONFIRM = 50, OK };
        static void Main(string[] args)
        //{
        //    WriteLine("여러분, 안녕하세요?\r\n반갑습니다!");
        //}

        //{
        //    Console.WriteLine((int)DialogResult.YES);
        //    Console.WriteLine((int)DialogResult.NO);
        //    Console.WriteLine((int)DialogResult.CANCEL);
        //    Console.WriteLine((int)DialogResult.CONFIRM);
        //    Console.WriteLine((int)DialogResult.OK);
        //}

        //{
        //    DialogResult result = DialogResult.YES;

        //    Console.WriteLine(result == DialogResult.YES);
        //    Console.WriteLine(result == DialogResult.NO);
        //    Console.WriteLine(result == DialogResult.CANCEL);
        //    Console.WriteLine(result == DialogResult.CONFIRM);
        //    Console.WriteLine(result == DialogResult.OK);
        //}

        //{
        //    Console.WriteLine((int)DialogResult.YES);
        //    Console.WriteLine((int)DialogResult.NO);
        //    Console.WriteLine((int)DialogResult.CANCEL);
        //    Console.WriteLine((int)DialogResult.CONFIRM);
        //    Console.WriteLine((int)DialogResult.OK);
        //}

        //{
        //    int? a = null;

        //    Console.WriteLine(a.HasValue);
        //    Console.WriteLine(a != null);

        //    a = 3;

        //    Console.WriteLine(a.HasValue);
        //    Console.WriteLine(a != null);
        //    Console.WriteLine(a.Value);
        //}

        //{
        //    var a = 20;
        //    Console.WriteLine("Type: {0}, Value: {1}", a.GetType(), a);

        //    var b = 3.1414213;
        //    Console.WriteLine("Type: {0}, Value: {1}", b.GetType(), b);

        //    var c = "Hello, World!";
        //    Console.WriteLine("Type: {0}, Value: {1}", c.GetType(), c);

        //    var d = new int[] { 10, 20, 30 };
        //    Console.Write("Type: {0}, Value: ", d.GetType());
        //    foreach (var e in d)
        //        Console.Write("{0} ", e);

        //    Console.WriteLine();
        //}

        //{
        //    System.Int32 a = 123;
        //    int b = 456;

        //    Console.WriteLine("a type:{0}, value:{1}", a.GetType().ToString(), a);
        //    Console.WriteLine("b type:{0}, value:{1}", b.GetType().ToString(), b);

        //    System.String c = "abc";
        //    string d = "def";

        //    Console.WriteLine("c type:{0}, value:{1}", c.GetType().ToString(), c);
        //    Console.WriteLine("d type:{0}, value:{1}", d.GetType().ToString(), d);
        //}

        //{
        //    string greeting = "Good Morning";

        //    WriteLine(greeting);
        //    WriteLine();

        //    //IndexOf()
        //    WriteLine("IndexOf 'Good' : {0}", greeting.IndexOf("Good"));
        //    WriteLine("IndexOf 'o' : {0}", greeting.IndexOf('o'));

        //    //LastIndexOf()
        //    WriteLine("LastIndexOf 'Good' : {0}", greeting.LastIndexOf("Good"));
        //    WriteLine("LastIndexOf 'o' : {0}", greeting.LastIndexOf("o"));

        //    //StartWith()
        //    WriteLine("LastIndexOf 'Good' : {0}", greeting.LastIndexOf("Good"));
        //    WriteLine("LastIndexOf 'Morning' : {0}", greeting.LastIndexOf("Morning"));

        //    //EndsWith()
        //    WriteLine("EndsWith 'Good' : {0}", greeting.EndsWith("Good"));
        //    WriteLine("EndsWith 'Morning' : {0}", greeting.EndsWith("Morning"));

        //    //Contains()
        //    WriteLine("Contains 'Evening' : {0}", greeting.Contains("Evening"));
        //    WriteLine("Contains 'Morning' : {0}", greeting.Contains("Morning"));

        //    //Replace()
        //    WriteLine("Replaced 'Morning' with 'Evening' : {0}",
        //        greeting.Replace("Morning", "Evening"));
        //}

        //{
        //    WriteLine("ToLower() : '{0}'", "ABC".ToLower());
        //    WriteLine("ToUpper() : '{0}'", "abc".ToUpper());

        //    WriteLine("Insert() : '{0}'", "Happy Friday!".Insert(5, " Sunny"));
        //    WriteLine("Remove() : '{0}'", "I Don't Love You.".Remove(2, 6));

        //    WriteLine("Trim() : '{0}'", " No Spaces ".Trim());
        //    WriteLine("TrimStart() : '{0}'", " No Spaces ".TrimStart());
        //    WriteLine("TrimEnd() : '{0}'", " No Spaces ".TrimEnd());
        //}

        //{
        //    string greeting = "Good morning.";

        //    WriteLine(greeting.Substring(0, 5));    //"Good"
        //    WriteLine(greeting.Substring(5));       //"morning"
        //    WriteLine();

        //    string[] arr = greeting.Split(
        //        new string[] { " " }, StringSplitOptions.None);
        //    WriteLine("Word Count : {0}", arr.Length);

        //    foreach (string element in arr)
        //        WriteLine("{0}", element);
        //}

        //{
        //    string fmt = "{0,-20}{1,-15}{2,30}";

        //    WriteLine(fmt, "Publisher", "Author", "Title");
        //    WriteLine(fmt, "Marvel", "Stan Lee", "Iron Man");
        //    WriteLine(fmt, "Hanbit", "Sanghyun Park", "This is C#");
        //    WriteLine(fmt, "Prentice Hall", "K&R", "The C Programming Language");
        //}

        //{
        //    //D: 10진수
        //    WriteLine("10진수: {0:D}", 123);
        //    WriteLine("10진수: {0:D5}", 123);

        //    //X: 16진수
        //    WriteLine("16진수: 0x{0:X}", 0xFF1234);
        //    WriteLine("16진수: 0x{0:X8}", 0xFF1234);

        //    //N: 숫자
        //    WriteLine("숫자: {0:N}", 123456789);
        //    WriteLine("숫자: {0:N0}", 123456789);

        //    //F: 고정 소수점
        //    WriteLine("고정 소수점: {0:F}", 123.45);
        //    WriteLine("고정 소수점: {0:F5}", 123.456);

        //    //E: 공학용
        //    WriteLine("공학: {0:E}", 123.456789);
        //}

        //{
        //    DateTime dt = new DateTime(2023, 03, 04, 23, 18, 22);

        //    WriteLine("12시간 형식: {0:yyyy-MM-dd tt hh:mm:ss (ddd)}", dt);
        //    WriteLine("24시간 형식: {0:yyyy-MM-dd HH:mm:ss (dddd)}", dt);

        //    CultureInfo ciKo = new CultureInfo("ko-KR");
        //    WriteLine();
        //    WriteLine(dt.ToString("yyyy-MM-dd tt hh:mm:ss (ddd)", ciKo));
        //    WriteLine(dt.ToString("yyyy-MM-dd HH:mm:ss (dddd)", ciKo));
        //    WriteLine(dt.ToString(ciKo));

        //    CultureInfo ciEn = new CultureInfo("en-US");
        //    WriteLine();
        //    WriteLine(dt.ToString("yyyy-MM-dd tt hh:mm:ss (ddd)", ciEn));
        //    WriteLine(dt.ToString("yyyy-MM-dd HH:mm:ss (dddd)", ciEn));
        //    WriteLine(dt.ToString(ciEn));
        //}

        //{
        //    string name = "김튼튼";
        //    int age = 23;
        //    WriteLine($"{name,-10},{age:D3}");

        //    name = "박날씬";
        //    age = 30;
        //    WriteLine($"{name}, {age,-10:D3}");

        //    name = "이비실";
        //    age = 17;
        //    WriteLine($"{name}, {(age > 20 ? "성인" : "미성년자")}");
        //}

        //114p_연습문제1
        //{
        //    Console.WriteLine("사각형의 너비를 입력하세요.");
        //    string width = Console.ReadLine();

        //    Console.WriteLine("사각형의 높이를 입력하세요.");
        //    string height = Console.ReadLine();

        //    double area = double.Parse(width) * double.Parse(height);
        //    Console.WriteLine($"사각형의 넓이는 {area} 입니다.");
        //}

        //{
        //    int a = 111 + 222;
        //    Console.WriteLine($"a:{a}");

        //    int b = a - 100;
        //    Console.WriteLine($"b:{b}");

        //    int c = b * 10;
        //    Console.WriteLine($"c:{c}");

        //    double d = c / 6.3;
        //    Console.WriteLine($"d:{d}");

        //    Console.WriteLine($"22/7={22 / 7}({22 % 7})");
        //}

        //{
        //    int a = 10;
        //    Console.WriteLine(a++);
        //    Console.WriteLine(++a);

        //    Console.WriteLine(a--);
        //    Console.WriteLine(--a);
        //}

        //{
        //    string result = "123" + "456";
        //    Console.WriteLine(result);

        //    result = "Hello" + " " + "World!";
        //    Console.WriteLine(result);
        //}

        //{
        //    Console.WriteLine($"3 > 4 : {3 > 4}");
        //    Console.WriteLine($"3 >= 4 : {3 >= 4}");
        //    Console.WriteLine($"3 < 4 : {3 < 4}");
        //    Console.WriteLine($"3 <= 4 : {3 <= 4}");
        //    Console.WriteLine($"3 == 4 : {3 == 4}");
        //    Console.WriteLine($"3 != 4 : {3 != 4}");
        //}

        //{
        //    string result = (10 % 2) == 0 ? "짝수" : "홀수";

        //    Console.WriteLine($"{result}");
        //}

        //{
        //    ArrayList a = null;
        //    a?.Add("야구");
        //    a?.Add("축구");
        //    WriteLine($"Count : {a?.Count}");
        //    WriteLine($"{a?[0]}");
        //    WriteLine($"{a?[1]}");

        //    a = new ArrayList();
        //    a?.Add("야구");
        //    a?.Add("축구");
        //    WriteLine($"Count : {a?.Count}");
        //    WriteLine($"{a?[0]}");
        //    WriteLine($"{a?[1]}");
        //}

        //{
        //    Console.WriteLine("Testing << ...");

        //    int a = 1;
        //    Console.WriteLine("a      : {0:D5} (0x{0:X8})", a);
        //    Console.WriteLine("a << 1 : {0:D5} (0x{0:X8})", a << 1);
        //    Console.WriteLine("a << 2 : {0:D5} (0x{0:X8})", a << 2);
        //    Console.WriteLine("a << 3 : {0:D5} (0x{0:X8})", a << 3);
        //    Console.WriteLine("a << 4 : {0:D5} (0x{0:X8})", a << 4);
        //    Console.WriteLine("a << 5 : {0:D5} (0x{0:X8})", a << 5);
        //    Console.WriteLine("\nTesting >> ...");

        //    int b = 255;
        //    Console.WriteLine("b      : {0:D5} (0x{0:X8})", b);
        //    Console.WriteLine("b >> 1 : {0:D5} (0x{0:X8})", b >> 1);
        //    Console.WriteLine("b >> 2 : {0:D5} (0x{0:X8})", b >> 2);
        //    Console.WriteLine("b >> 5 : {0:D5} (0x{0:X8})", b >> 5);
        //    Console.WriteLine("\nTesting >> 2...");

        //    int c = -255;
        //    Console.WriteLine("c      : {0:D5} (0x{0:X8})", c);
        //    Console.WriteLine("c >> 1 : {0:D5} (0x{0:X8})", c >> 1);
        //    Console.WriteLine("c >> 2 : {0:D5} (0x{0:X8})", c >> 2);
        //    Console.WriteLine("c >> 5 : {0:D5} (0x{0:X8})", c >> 5);
        //}

        //{
        //    int a = 9;
        //    int b = 10;

        //    Console.WriteLine($"{a} & {b} : {a & b}");
        //    Console.WriteLine($"{a} | {b} : {a | b}");
        //    Console.WriteLine($"{a} ^ {b} : {a ^ b}");

        //    int c = 255;
        //    Console.WriteLine("~{0}(0x{0:X8}) : {1}(0x{1:X8})", c, ~c);
        //}

        //{
        //    int a;
        //    a = 100;
        //    Console.WriteLine($"a = 100 : {a}");
        //    a += 90;
        //    Console.WriteLine($"a += 90 : {a}");
        //    a -= 80;
        //    Console.WriteLine($"a -= 80 : {a}");
        //    a *= 70;
        //    Console.WriteLine($"a *= 70 : {a}");
        //    a /= 60;
        //    Console.WriteLine($"a /= 60 : {a}");
        //    a %= 50;
        //    Console.WriteLine($"a %= 50 : {a}");
        //    a &= 40;
        //    Console.WriteLine($"a &= 40 : {a}");
        //    a |= 30;
        //    Console.WriteLine($"a |= 30 : {a}");
        //    a ^= 20;
        //    Console.WriteLine($"a ^= 20 : {a}");
        //    a <<= 10;
        //    Console.WriteLine($"a <<= 10 : {a}");
        //    a >>= 1;
        //    Console.WriteLine($"a >>= 1 : {a}");
        //}

        //{
        //    int? num = null;
        //    Console.WriteLine($"{num ?? 0}");

        //    num = 99;
        //    Console.WriteLine($"{num ?? 0}");

        //    string str = null;
        //    Console.WriteLine($"{str ?? "Default"}");

        //    str = "Specific";
        //    Console.WriteLine($"{str ?? "Default"}");
        //}

        //{
        //    Write("숫자를 입력하세요 : ");

        //    string input = ReadLine();
        //    int number = Int32.Parse(input);

        //    if (number < 0)
        //        WriteLine("음수");
        //    else if (number > 0)
        //        WriteLine("양수");
        //    else
        //        WriteLine("0");

        //    if (number % 2 == 0)
        //        WriteLine("짝수");
        //    else
        //        WriteLine("홀수");
        //}

        //{
        //    Write("숫자를 입력하세요. : ");
        //    string input = ReadLine();
        //    int number = Convert.ToInt32(input);

        //    if(number>0)
        //    {
        //        if (number % 2 == 0)
        //            WriteLine("0보다 큰 짝수.");
        //        else
        //            WriteLine("0보다 큰 홀수.");
        //    }
        //    else
        //    {
        //        WriteLine("0보다 작거나 같은 수.");
        //    }
        //}

        //{
        //    Write("요일을 입력하세요.(일,월,화,수,목,금,토) : ");
        //    string day = ReadLine();

        //    switch(day)
        //    {
        //        case "일":
        //            WriteLine("Sunday");
        //            break;
        //        case "월":
        //            WriteLine("Monday");
        //            break;
        //        case "화":
        //            WriteLine("Tuesday");
        //            break;
        //        case "수":
        //            WriteLine("Wednesday");
        //            break;
        //        case "목":
        //            WriteLine("Thursday");
        //            break;
        //        case "금":
        //            WriteLine("Friday");
        //            break;
        //        case "토":
        //            WriteLine("Saturday");
        //            break;
        //        default :
        //            WriteLine($"{day}는(은) 요일이 아닙니다.");
        //            break;
        //    }
        //}

        {
            object obj = null;

            string s = ReadLine();
            if (int.TryParse(s, out int out_i))
                obj = out_i;
            else if (float.TryParse(s, out float out_f))
                obj = out_f;
            else
                obj = s;

            switch(obj)
            {
                case int:
                    WriteLine($"{(int)obj}는 int 형식입니다.");
                    break;
                case float:
                    WriteLine($"{(float)obj}는 float 형식입니다.");
                    break;
                default:
                    WriteLine($"{obj}(은)는 모르는 형식입니다.");
                    break;
            }
        }
    }
}