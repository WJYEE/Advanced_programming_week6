public abstract class Coffee
{
  public abstract int Cost();
}

public class BasicCoffee : Coffee
{
  public override int Cost()
  {
    return 5;
  }
}

public abstract class CoffeeDecorator : Coffee
{
  protected Coffee _coffee;

  public CoffeeDecorator(Coffee coffee)
  {
    _coffee = coffee;
  }

  public override int Cost()
  {
    return _coffee.Cost();
  }
}

public class MilkDecorator : CoffeeDecorator
{
  public MilkDecorator(Coffee coffee) : base(coffee) { }

  public override int Cost()
  {
    return _coffee.Cost() + 2;
  }
}

public class SugarDecorator : CoffeeDecorator
{
  public SugarDecorator(Coffee coffee) : base(coffee) { }

  public override int Cost()
  {
    return _coffee.Cost() + 1;
  }
}