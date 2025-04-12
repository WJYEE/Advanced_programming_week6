class Coffee : 
  def cost(self):
    return 5
  
class CoffeDecorator(Coffee):
  def __init__(self, coffee):
    self._coffee = coffee
  def cost(self):
    return self._coffee.cost()
  
class MilkDecorator(CoffeDecorator):
  def cost(self):
    return self._coffee.cost() + 2

class SugarDecorator(CoffeDecorator):
  def cost(self):
    return self._coffee.cost() + 1