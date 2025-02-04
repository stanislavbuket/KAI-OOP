using System;

namespace StringManipulatorApp
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Введіть рядок (тільки цифрові символи):");
            Console.Write("Рядок: ");
            string input = Console.ReadLine();

            try
            {
                // Створення об'єкта класу StringManipulator
                StringManipulator strManip = new StringManipulator(input);

                Console.WriteLine("\nВведений рядок: " + strManip.Value);

                Console.WriteLine("Довжина рядка: " + strManip.GetLength());
            }
            catch (ArgumentException ex)
            {
                Console.WriteLine("Помилка: " + ex.Message);
            }

            Console.WriteLine("\nНатисніть будь-яку клавішу для завершення...");
            Console.ReadKey();
        }
    }
}