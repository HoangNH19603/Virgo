namespace Day1 {
    class BasicOfStrings {
        public static void basicOfStrings() {
            string firstName = "Nguyen";
            string lastName = "Hoang";
            Console.WriteLine($"My name is {firstName + lastName}");
            Console.WriteLine($"My name uppercase is {(firstName + lastName).ToUpper()}");
            Console.WriteLine($"Hello {(firstName + lastName).Replace(firstName, "Mr")}");
        }
    }
}