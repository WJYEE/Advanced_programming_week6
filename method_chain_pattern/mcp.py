class Calculator :
  def __init__(self):
    self.result = 0

  def add(self, value):
    self.result += value
    return self
  def subtract(self, value):
    self.result -= value
    return self
  def multiply(self, value):
    self.result *= value
    return self
  def divide(self, value):
    if value != 0:
      self.result /= value
    else:
      print("Cannot divide by zero")
    return self
  def get_result(self):
    return self.result
  

# Example usage
calculator = Calculator()
result = (calculator.add(10)
           .subtract(5)
           .multiply(2)
           .divide(3)
           .get_result())
print("Result:", result)  