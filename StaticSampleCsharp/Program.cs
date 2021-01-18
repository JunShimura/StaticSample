using System;

namespace StaticSampleCsharp
{
    public class Counter
    {
        private static int count = 0;
        public int countAdd(int a)
        {
            count += a;
            return count;
        }
    };

    class Program
    {
        static void Main(string[] args)
        {
            const int TIME = 5;
            Counter counterA = new Counter();
            Counter counterB = new Counter();

            for (int i = 0; i < TIME; i++)
            {
                int n, ans;
                Console.WriteLine("Aに数を入力");
                n = Int32.Parse(Console.ReadLine());
                ans = counterA.countAdd(n);
                Console.WriteLine( "A={0}",ans );
                Console.WriteLine("Bに数を入力");
                n = Int32.Parse(Console.ReadLine());
                ans = counterB.countAdd(n);
                Console.WriteLine("B={0}", ans);
            }
        }
    }
}
