// C# Implementation
using System;

public abstract class Animal
{
    public abstract string Speak();
}

public class Dog : Animal
{
    public override string Speak()
    {
        return "Woof!";
    }
}

public class Cat : Animal
{
    public override string Speak()
    {
        return "Meow!";
    }
}

public class AnimalFactory
{
    public Animal CreateAnimal(string animalType)
    {
        if (animalType == "dog")
        {
            return new Dog();
        }
        else if (animalType == "cat")
        {
            return new Cat();
        }
        return null;
    }
}

public class Program
{
    public static void Main()
    {
        AnimalFactory factory = new AnimalFactory();
        Animal dog = factory.CreateAnimal("dog");
        Animal cat = factory.CreateAnimal("cat");
        
        Console.WriteLine($"Dog says: {dog.Speak()}");
        Console.WriteLine($"Cat says: {cat.Speak()}");
    }
}