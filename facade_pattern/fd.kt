class CPU {
  fun process() {
    println("CPU processing...")
  }
}

class Memory {
  fun load() {
    println("Memory loading...")
  }
}

class SSD {
  fun read() {
    println("SSD reading...")
  }
}

class Computer {
  private val cpu = CPU()
  private val memory = Memory()
  private val ssd = SSD()

  // Facade method
  fun boost() {
    println("Computer starting up...")
    cpu.process()
    memory.load()
    ssd.read()
    println("Computer ready to use!")
  }
}

fun main() {
  val computer = Computer()
  computer.boost()
}