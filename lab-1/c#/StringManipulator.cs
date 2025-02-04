using System;
using System.Linq;

namespace StringManipulatorApp
{
    public class StringManipulator
    {
        private string value;

        // Конструктор з параметром із перевіркою, що рядок містить лише цифри
        public StringManipulator(string value)
        {
            if (!IsDigitsOnly(value))
            {
                throw new ArgumentException("Рядок має містити лише цифрові символи.");
            }
            this.value = value;
        }

        // Властивість для доступу до рядка
        public string Value
        {
            get { return value; }
        }

        public int GetLength()
        {
            return value.Length;
        }

        // Приватний метод для перевірки, що рядок містить лише цифри
        private bool IsDigitsOnly(string str)
        {
            return str.All(char.IsDigit);
        }
    }
}