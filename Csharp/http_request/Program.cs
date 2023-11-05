using System.Net.Http;

HttpClient client = new HttpClient();
HttpRequestMessage request = new HttpRequestMessage(HttpMethod.Get, "https://dummyjson.com/quotes/random");
HttpResponseMessage response = await client.SendAsync(request);
string data = await response.Content.ReadAsStringAsync();
Console.WriteLine($"Status: {response.StatusCode}");
Console.WriteLine($"{data}");
client.Dispose();