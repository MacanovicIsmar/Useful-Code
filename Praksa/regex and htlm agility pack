using HtmlAgilityPack;
using System;
using System.Linq;
using System.Text.RegularExpressions;

namespace RezultatiImporter
{
    class Program
    {
        static void Main(string[] args)
        {

            HtmlWeb web = new HtmlWeb();
            HtmlDocument document = web.Load("http://www.example.com/");
            var title = document.DocumentNode.SelectNodes("//div/h1").First().InnerText;
            var discription = document.DocumentNode.SelectNodes("//div/p").First().InnerText;

            HtmlDocument document2 = web.Load("https://en.wikipedia.org/wiki/HTML");
            var title2 = document2.DocumentNode.SelectNodes("//*[@id='firstHeading']").First().InnerText;
            var discription2 = document2.DocumentNode.SelectNodes("//*[@id='mw-content-text']/div[1]/p[2]").First().InnerText;

            HtmlDocument document3 = web.Load("http://m.rezultati.com/");
            var paragraph = document3.DocumentNode.SelectNodes("//*[@id='score-data']/h4[1]").First().InnerText;


            //*[@id="firstHeading"]   xpath
            //*[@id=\"firstHeading\"] zbog 

            //*[@id="mw-content-text"]/div[1]/p[1]
            //*[@id="mw-content-text"]/div[1]/p[2]
            //*[@id="mw-content-text"]/div[1]/p[3]
            //*[@id="mw-content-text"]/div[1]/p[2]

            //*[@id="score-data"]/h4[1]


            Console.WriteLine("Hello World!");
            Console.WriteLine(title);
            Console.WriteLine(discription);
            Console.WriteLine(title2);
            Console.WriteLine(discription2);
            Console.WriteLine(paragraph);




            // Define a regular expression for repeated words.
            Regex rx = new Regex(@"\b(?<word>\w+)\s+(\k<word>)\b",
              RegexOptions.Compiled | RegexOptions.IgnoreCase);

            // Define a test string.
            string text = "The the quick brown fox  fox jumps over the lazy dog dog.";

            // Find matches.
            MatchCollection matches = rx.Matches(text);

            // Report the number of matches found.
            Console.WriteLine("{0} matches found in:\n   {1}",
                              matches.Count,
                              text);

            // Report on each match.
            foreach (Match match in matches)
            {
                GroupCollection groups = match.Groups;
                Console.WriteLine("'{0}' repeated at positions {1} and {2}",
                                  groups["word"].Value,
                                  groups[0].Index,
                                  groups[1].Index);
            }



            string input = "aaaa 1234 ...... 1234 ::::: asgsgd";
            string regex = @"\.\.\.\. (\d+) ::::: (\w+)";
            Match m = Regex.Match(input, regex);

            if (m.Success)
            {
                int numberAfterDots = int.Parse(m.Groups[1].Value);
                string wordAfterColons = m.Groups[2].Value;
                Console.WriteLine(numberAfterDots);
                // ... Do something with these values
            }

            string input2 = "aaaa 1234 ...... 1234 ::::: asgsgd";
            var numbers = Regex.Matches(input2, @"\d+")
                               .Cast<Match>()
                               .Select(m => int.Parse(m.Value))
                               .ToList();

            Console.WriteLine(numbers.FirstOrDefault().ToString());

        }
    }
}
