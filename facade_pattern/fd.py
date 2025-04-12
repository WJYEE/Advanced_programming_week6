class CPU:
  def process(self):
    print("CPU processing...")

class Memory:
  def load(self):
    print("Memory loading...")

class SSD:
  def read(self):
    print("SSD reading...")

class Computer:
  def __init__(self):
    self.cpu = CPU()
    self.memory = Memory()
    self.ssd = SSD()
  # Facade method

  def boost(self):
    print("Computer starting up...")
    self.cpu.process()
    self.memory.load()
    self.ssd.read()
    print("Computer ready to use!")

c = Computer()
c.boost()