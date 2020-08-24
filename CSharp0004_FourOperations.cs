using System;

namespace CSharp0004_FourOperations
{
    class CSharp0004_FourOperations
    {
        static void Main(string[] args)
        {

            Console.Write("Enter username : ");
            string user;
            user = Console.ReadLine();

            Console.WriteLine("Hello Hello! Mr/Ms " + user + ", welcome to the csharp service. :D");

            Console.Write("Enter 1st number : ");
            float number1 = float.Parse(Console.ReadLine());

            Console.Write("Enter 2nd number : ");
            float number2 = float.Parse(Console.ReadLine());

            Console.WriteLine("Addition       : " + (number1 + number2));
            Console.WriteLine("Subtraction    : " + (Math.Abs(number1 - number2)));
            // used absolute to the minValue-maxValue for is positive
            Console.WriteLine("Multiplication : " + (number1 * number2));
            Console.WriteLine("Division       : " + (number1 / number2) + " or : " + (number2 / number1));
            Console.WriteLine("Mod/Remainder  : " + (number1 % number2) + " or : " + (number2 % number1));

            int number3 = int.Parse(Console.ReadLine());
            int number4 = int.Parse(Console.ReadLine());

            Console.WriteLine("Number 3 : " + number3 + " + Number 4 : " + number4 + " = " + (number3 + number4));
            Console.WriteLine("Number 3 : " + number3 + " - Number 4 : " + number4 + " = " + (number3 - number4));
            Console.WriteLine("Number 3 : " + number3 + " x Number 4 : " + number4 + " = " + (number3 * number4));
            Console.WriteLine("Number 3 : " + number3 + " / Number 4 : " + number4 + " = " + (number3 / number4));
        }
    }
}
