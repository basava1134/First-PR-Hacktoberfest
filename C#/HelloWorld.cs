using System;

public class HelloWorld
{
    public static void Main(string[] args)
    {
        Console.WriteLine("Hello, World! Today is " + System.DateTimeOffset.Now.ToString());
        Console.ReadLine();
    }
}