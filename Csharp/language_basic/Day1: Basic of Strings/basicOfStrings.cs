namespace Day1 {
    class BasicOfStrings {
        /// <summary>
        /// Basic string
        /// </summary>
        public static void basicOfStrings() {
            string firstName = "Nguyen";
            string lastName = "Hoang";
            Console.WriteLine($"My name is {firstName + lastName}");
            Console.WriteLine($"My name uppercase is {(firstName + " " +lastName).ToUpper()}");
            Console.WriteLine($"Hello {(firstName + lastName).Replace(firstName, "Mr ")}");
        }

        /// <summary>
        /// Some string methods
        /// </summary>
        public static void stringFunctions() {
            string line1 = "I found a love, for me";
            string line2 = "Darling, just dive right in and follow my lead";
            string line3 = "     Well, I found a girl, beautiful and sweet     ";

            Console.WriteLine($"{line1}");
            Console.WriteLine($"Line 1 contain \'love\'{line1.Contains("love")}");
            Console.WriteLine($"{line2}");
            Console.WriteLine($"Line 2 start with \'Darling\': {line2.StartsWith("Darling")} and end with \'me\': {line2.EndsWith("me")}");
            Console.WriteLine($"{line3}");
            Console.WriteLine($"Line 3 trimmed: {line3.Trim()}");
        }
    }
}