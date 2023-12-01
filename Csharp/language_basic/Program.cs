using static Day0.HelloWorld;
using static Day1.BasicOfStrings;

string? userInput;
short userChoice;

//// Begin Code Explanation ////
// ## Summary
// This code snippet is a part of a larger program that prompts the user to enter a number repeatedly until a valid short integer is entered. It uses a do-while loop to repeatedly ask the user for input, attempts to parse the input as a short integer, and checks if the parsed value is of type short. If the input is not a valid short integer, a FormatException is caught and the stack trace is printed. Finally, the user's input is displayed. The loop continues until a valid short integer is entered.

// ## Code Analysis
// ### Inputs
// - `userInput` (string): The user's input as a string.
// - `userChoice` (short): The parsed value of `userInput` as a short integer.
// ___
// ### Flow
// 1. The code prompts the user to enter a number.
// 2. The user's input is read using `Console.ReadLine()` and stored in the `userInput` variable.
// 3. The code attempts to parse the `userInput` as a short integer using `short.Parse()`.
// 4. If the parsing is successful and the parsed value is of type short, the loop is exited.
// 5. If the parsing fails and a FormatException is thrown, the stack trace is printed.
// 6. Finally, the user's input is displayed using `Console.WriteLine()`.
// ___
// ### Outputs
// - None (void)
// ___
//// End Code Explanation ////

do {
    Console.Write("Enter a number: ");
    userInput = Console.ReadLine();
    try {
        userChoice = short.Parse(userInput!);
        if (userChoice.GetType() == typeof(short)) break;
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
        Console.WriteLine();
        stringFunctions();
        break;
    default:
        Console.Error.WriteLine("Invalid choice!");
        break;
}