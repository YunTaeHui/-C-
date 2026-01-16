using System;
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
    }
}
