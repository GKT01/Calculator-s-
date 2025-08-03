using System;

namespace Main
{
    class Program
    {

        static void Main(string[] args)
        {
            char request_input = '0';

            do
            {
                Console.Write("Please put an input (+ - * /, . to terminate): ");
                request_input = Convert.ToChar(Console.ReadLine());

                if (request_input != '\0')
                {
                    switch (request_input)
                    {
                        case '+':
                            AddTwoNumbers();
                            break;
                        case '-':
                            SubstractTwoNumbers();
                            break;
                        case '*':
                            MultiplyTwoNumbers();
                            break;
                        case '/':
                            DivideTwoNumbers();
                            break;
                        case '.':
                            Console.WriteLine("Quitting..");
                            break;
                        default:
                            Console.WriteLine("Please put an Valid Input.");
                            break;

                    }
                }
                else
                {
                   Console.WriteLine("Please put an Valid Input.");
                }
            } while (request_input != '.');
        }

        static void AddTwoNumbers()
        {
            double num1, num2;
            Console.Write("Please put a number: ");
            num1 = Convert.ToDouble(Console.ReadLine());

            Console.Write("Please put another number: ");
            num2 = Convert.ToDouble(Console.ReadLine());

            double result = num1 + num2;
            Console.WriteLine("The result is: " + result + "\n");
        }

        static void SubstractTwoNumbers()
        {
            double num1, num2;
            Console.Write("Please put a number: ");
            num1 = Convert.ToDouble(Console.ReadLine());

            Console.Write("Please put another number: ");
            num2 = Convert.ToDouble(Console.ReadLine());

            double result = num1 - num2;
            Console.WriteLine("The result is: " + result + "\n");
        }

        static void MultiplyTwoNumbers()
        {
            double num1, num2;

            Console.Write("Please put a number: ");
            num1 = Convert.ToDouble(Console.ReadLine());

            Console.Write("Please put another number: ");
            num2 = Convert.ToDouble(Console.ReadLine());

            double result = num1 * num2;
            Console.WriteLine("The result is: " + result + "\n");
        }
        
         static void DivideTwoNumbers()
        {
            double num1, num2;
            Console.Write("Please put a number: ");
            num1 = Convert.ToDouble(Console.ReadLine());

            Console.Write("Please put another number: ");
            num2 = Convert.ToDouble(Console.ReadLine());

            double result = num1 / num2;
            Console.WriteLine("The result is: " + result + "\n");
        }
    }
}