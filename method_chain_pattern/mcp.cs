using System;

public class Calculator
{
  private double result;

  public Calculator()
  {
    result = 0;
  }

  public Calculator Add(double value)
  {
    result += value;
    return this;
  }

  public Calculator Subtract(double value)
  {
    result -= value;
    return this;
  }

  public Calculator Multiply(double value)
  {
    result *= value;
    return this;
  }

  public Calculator Divide(double value)
  {
    if (value != 0)
    {
      result /= value;
    }
    else
    {
      Console.WriteLine("Cannot divide by zero");
    }
    return this;
  }

  public double GetResult()
  {
    return result;
  }
}

public class Program
{
  public static void Main(string[] args)
  {
    Calculator calculator = new Calculator();
    double result = calculator.Add(10).Subtract(2).Multiply(3).Divide(4).GetResult();
    Console.WriteLine("The result is: " + result);
  }
}
