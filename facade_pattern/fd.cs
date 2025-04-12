using System;

class CPU
{
  public void Process()
  {
    Console.WriteLine("CPU processing...");
  }
}

class Memory
{
  public void Load()
  {
    Console.WriteLine("Memory loading...");
  }
}

class SSD
{
  public void Read()
  {
    Console.WriteLine("SSD reading...");
  }
}

class Computer
{
  private CPU cpu;
  private Memory memory;
  private SSD ssd;

  public Computer()
  {
    cpu = new CPU();
    memory = new Memory();
    ssd = new SSD();
  }

  // Facade method
  public void Boost()
  {
    Console.WriteLine("Computer starting up...");
    cpu.Process();
    memory.Load();
    ssd.Read();
    Console.WriteLine("Computer ready to use!");
  }
}

class Program
{
  static void Main(string[] args)
  {
    Computer c = new Computer();
    c.Boost();
  }
}