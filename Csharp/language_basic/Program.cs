using static Day0.HelloWorld;
using static Day1.BasicOfStrings;

string? userInput;
short userChoice;
do {
    Console.Write("Enter a number: ");
    userInput = Console.ReadLine();
    try {
        userChoice = short.Parse(userInput!);
    } catch (FormatException e) {
        Console.WriteLine(e.StackTrace);
    } finally {
        Console.WriteLine($"User entered: {userInput}");
    }
} while(true);

switch(userChoice) {
    case 0:
        Console.WriteLine("Day 0!");
        helloWorld();
        break;
    case 1:
        Console.WriteLine("Day 1!");
        basicOfStrings();
        break;
    default:
        Console.Error.WriteLine("Invalid choice!");
        break;
}