using System;
using System.Collections.Generic;

var languages = new List<string> {"Csharp"};
languages.Add("FSharp");
languages.Add("C");
languages.Add("C++");
languages.Add("Java");

foreach (var item in languages)
{
    System.Console.WriteLine(item);
}