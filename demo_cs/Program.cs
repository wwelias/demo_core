using System;
using democli;

namespace demo_cs
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");

            Class01 c = new Class01();
            var result = c.DoStuff(5, 2);
            Console.WriteLine($"Result: {result}");
        }
    }
}
