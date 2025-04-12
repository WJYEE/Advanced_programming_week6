#include <iostream>
using namespace std;

class CPU {
public:
  void process() {
    cout << "CPU processing..." << endl;
  }
};

class Memory {
public:
  void load() {
    cout << "Memory loading..." << endl;
  }
};

class SSD {
public:
  void read() {
    cout << "SSD reading..." << endl;
  }
};

class Computer {
private:
  CPU cpu;
  Memory memory;
  SSD ssd;

public:
  // Facade method
  void boost() {
    cout << "Computer starting up..." << endl;
    cpu.process();
    memory.load();
    ssd.read();
    cout << "Computer ready to use!" << endl;
  }
};

int main() {
  Computer c;
  c.boost();
  return 0;
}