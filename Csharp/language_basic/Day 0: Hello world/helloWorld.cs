namespace Day0 {
    class HelloWorld {
        public static void helloWorld() {
            Console.Write("Enter your name: ");
            var name = Console.ReadLine();
            Console.WriteLine("Hello " + name + '!');
        }
    }
}
