open class Coffee {
  open fun cost(): Int {
    return 5
  }
}

open class CoffeeDecorator(private val coffee: Coffee) : Coffee() {
  override fun cost(): Int {
    return coffee.cost()
  }
}

class MilkDecorator(coffee: Coffee) : CoffeeDecorator(coffee) {
  override fun cost(): Int {
    return super.cost() + 2
  }
}

class SugarDecorator(coffee: Coffee) : CoffeeDecorator(coffee) {
  override fun cost(): Int {
    return super.cost() + 1
  }
}