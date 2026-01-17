
//5.4.2 형식 패턴
//using static System.Console;

//namespace _260116
//{
//    class Preschooler { }
//    class Underage { }
//    class Adult { }
//    class Senior { }

//    internal class _260117
//    {
//        static int CalculateFee(object visitor)
//        {
//            return visitor switch
//            {
//                Underage => 100,
//                Adult => 500,
//                Senior => 200,
//                _ => throw new ArgumentException(
//                    $"Prohibited age: {visitor.GetType()}", nameof(visitor)),
//            };
//        }

//        static void Main(string[] args)
//        {
//            WriteLine($"Fee for a senior: {CalculateFee(new Senior())}");
//            WriteLine($"Fee for a adult: {CalculateFee(new Adult())}");
//            WriteLine($"Fee for a underage: {CalculateFee(new Underage())}");
//            WriteLine($"Fee for a preschooler: {CalculateFee(new Preschooler())}");
//        }
//    }
//}


//5.4.3 상수 패턴
//using static System.Console;

//namespace _260116
//{
//    internal class _260117
//    {
//        static void Main(string[] args)
//        {
//            var GetCountryCode = (string nation) => nation switch
//            {
//                "KR" => 82,
//                "US" => 1,
//                "UK" => 44,
//                _ => throw new ArgumentException("Not supported Code")
//            };
//            WriteLine(GetCountryCode("KR"));
//            WriteLine(GetCountryCode("US"));
//            WriteLine(GetCountryCode("UK"));
//        }
//    }
//}


//5.4.4 프로퍼티 패턴
//using System.Data;
//using static System.Console;

//namespace _260116
//{
//    internal class _260117
//    {
//        class Car
//        {
//            public string Model { get; set; }
//            public DateTime ProducedAt { get; set; }
//        }

//        static string GetNickname(Car car)
//        {
//            var GenerateMessage = (Car car, string nickname) =>
//            $"{car.Model} produced in {car.ProducedAt.Year} is {nickname}";

//            if (car is Car { Model: "Mustang", ProducedAt.Year: 1967 })
//                return GenerateMessage(car, "Fastback");
//            else if (car is Car { Model: "Mustang", ProducedAt.Year: 1976 })
//                return GenerateMessage(car, "Cobra II");
//            else
//                return GenerateMessage(car, "Unknown");
//        }
//        static void Main(string[] args)
//        {
//            WriteLine(
//                GetNickname(
//                    new Car() { Model = "Mustang", ProducedAt = new DateTime(1967, 11, 23) }));
//            WriteLine(
//                GetNickname(
//                    new Car() { Model = "Mustang", ProducedAt = new DateTime(1976, 6, 7) }));
//            WriteLine(
//                GetNickname(
//                    new Car() { Model = "Mustang", ProducedAt = new DateTime(2099, 12, 25) }));
//        }
//    }
//}


//5.4.6 논리 패턴
//using System.Data;
//using static System.Console;

//namespace _260116
//{
//    internal class _260117
//    {
//        class OrderItem
//        {
//            public int Amount { get; set; }
//            public int Price { get; set; }
//        }
//        static double GetPrice(OrderItem orderItem) => orderItem switch
//        {
//            OrderItem { Amount: 0 } or OrderItem { Price: 0 }
//            => 0.0,
//            OrderItem { Amount: >= 100 } and OrderItem { Price: >= 10_000 }
//            => orderItem.Amount * orderItem.Price * 0.8,
//            not OrderItem { Amount: < 100 }
//            _ => orderItem.Amount * orderItem.Price,
//        };

//        static void Main(string[] args)
//        {
//            WriteLine(GetPrice(new OrderItem() { Amount = 0, Price = 10_000 }));
//            WriteLine(GetPrice(new OrderItem() { Amount = 100, Price = 10_000 }));
//            WriteLine(GetPrice(new OrderItem() { Amount = 100, Price = 9_000 }));
//            WriteLine(GetPrice(new OrderItem() { Amount = 1, Price = 1_000 }));
//        }
//    }
//}


//5.4.8 위치 패턴-1
//using System.Data;
//using static System.Console;

//namespace _260116
//{
//    internal class _260117
//    {
//        static void Main(string[] args)
//        {
//            Tuple<string, int> itemPrice = new Tuple<string, int>("espresso", 3000);

//            if (itemPrice is ("espresso", < 5000))
//            {
//                WriteLine("The coffee is affordable");
//            }
//        }
//    }
//}


//5.4.8 위치 패턴-2
//using static System.Console;

//namespace _260116
//{
//    internal class _260117
//    {
//        struct Audience
//        {
//            public bool IsCitizen { get; init; }
//            public int Age { get; init; }

//            public Audience(bool inCitizen, int age)
//            {
//                IsCitizen = inCitizen;
//                Age = age;
//            }
//            public void Deconstruct(out bool isCitizen, out int age)
//            {
//                isCitizen = IsCitizen;
//                age = Age;
//            }
//        }

//        static void Main(string[] args)
//        {
//            var CalculateFee = (Audience audience) => audience switch
//            {
//                (true, < 19) => 100,
//                (true, _) => 200,
//                (false, < 19) => 200,
//                (false, _) => 400,
//            };

//            var a1 = new Audience(true, 10);
//            WriteLine(
//                $"내국인: {a1.IsCitizen} 나이: {a1.Age} 요금: {CalculateFee(a1)}");

//            var a2 = new Audience(false, 33);
//            WriteLine(
//                $"내국인: {a2.IsCitizen} 나이: {a2.Age} 요금: {CalculateFee(a2)}");
//        }
//    }
//}


//5.4.9 var 패턴
//using static System.Console;

//namespace _260116
//{
//    internal class _260117
//    {
//        static void Main(string[] args)
//        {
//            var IsPassed =
//                (int[] scores) => scores.Sum() / scores.Length is var average
//                && Array.TrueForAll(scores, (score) => score >= 60)
//                && average >= 60;

//            int[] scores1 = { 90, 80, 60, 80, 70 };
//            WriteLine($"{string.Join(",", scores1)}: Pass:{IsPassed(scores1)}");

//            int[] scores2 = { 90, 80, 59, 80, 70 };
//            WriteLine($"{string.Join(",", scores2)}: Pass:{IsPassed(scores2)}");
//        }
//    }
//}


//5.4.10 무시 패턴
//using static System.Console;

//namespace _260116
//{
//    internal class _260117
//    {
//        static void Main(string[] args)
//        {
//            var GetCountryCode = (string nation) => nation switch
//            {
//                "KR" => 82,
//                "US" => 1,
//                "UK" => 44,
//                _ => throw new ArgumentException("Not supported Code")  //무시 패턴 매칭
//            };

//            WriteLine(GetCountryCode("KR"));
//            WriteLine(GetCountryCode("US"));
//            WriteLine(GetCountryCode("UK"));
//        }
//    }
//}


//5.4.11 목록 패턴
//using static System.Console;

//namespace _260116
//{
//    internal class _260117
//    {
//        static void Main(string[] args)
//        {
//            var GetStatistics = (List<object[]> records) =>
//            {
//                var statistics = new Dictionary<string, int>();

//                foreach (var record in records)
//                {
//                    var (contentType, contentViews) = record switch
//                    {
//                        [_, "COMEDY", .., var views] => ("COMEDY", views),
//                        [_, "SF", .., var views] => ("SF", views),
//                        [_, "ACTION", .., var views] => ("ACTION", views),
//                        [_, .., var amount] => ("ETC", amount),
//                        _ => ("ETC", 0),
//                    };

//                    if (statistics.ContainsKey(contentType))
//                        statistics[contentType] += (int)contentViews;
//                    else
//                        statistics.Add(contentType, (int)contentViews);
//                }
//                return statistics;
//            };

//            List<object[]> MovieRecords = new List<object[]>()
//            {
//                new object[] {0, "COMEDY", "Spy", 2015, 10_000 },
//                new object[] {1, "COMEDY", "Scary Movie", 20_000 },
//                new object[] {2, "SF", "Avengers: Inifinate War", 100_000 },
//                new object[] {3, "COMEDY", "극한직업", 25_000 },
//                new object[] {4, "SF", "Star Wars: A New Hope", 200_000 },
//                new object[] {5, "ACTION", "Fast & Furious", 80_000 },
//                new object[] {6, "DRAMA", "Notting Hill", 1_000 },
//            };

//            var statistics = GetStatistics(MovieRecords);

//            foreach (var s in statistics)
//                WriteLine($"{s.Key}: {s.Value}");
//        }
//    }
//}
