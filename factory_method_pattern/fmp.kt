abstract class Animal {
  abstract fun speak(): String
}

class Dog : Animal() {
  override fun speak(): String {
      return "Woof!"
  }
}

class Cat : Animal() {
  override fun speak(): String {
      return "Meow!"
  }
}

class AnimalFactory {
  fun createAnimal(animalType: String): Animal? {
      return when (animalType) {
          "dog" -> Dog()
          "cat" -> Cat()
          else -> null
      }
  }
}

// Example usage
fun main() {
  val factory = AnimalFactory()
  val dog = factory.createAnimal("dog")
  val cat = factory.createAnimal("cat")
  
  println("Dog says: ${dog?.speak()}")
  println("Cat says: ${cat?.speak()}")
}