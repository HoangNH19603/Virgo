using System.Net.Http;
using System.Net;

using (HttpClient client = new HttpClient()) {
    HttpResponseMessage response = await client.GetAsync("https://dummyjson.com/quotes/random");
    string data = await response.Content.ReadAsStringAsync();
    Console.WriteLine($"Status: {response.StatusCode}");
    Console.WriteLine($"{data}");
}

using (WebClient wClient = new WebClient())
{
    string result = wClient.DownloadString("https://api.mangadex.org/manga/random");
    Console.WriteLine(result);
}