#include <iostream>

class Engine {
 public:

  Engine(unsigned hp):
      horsepower(hp) {
  }

  void display_engine() {
    std::cout << "This engine has " << horsepower << " horsepower.\n";
  }

 private:
  unsigned int horsepower;
};

class Motorcar {
 public:

  Motorcar(std::string const &n, unsigned int hp):
      eng(hp), name(n) {
  }

  void display_motorcar() {
    std::cout << "This motorcar's make is " << name << '\n';
    eng.display_engine();
  }

 private:
  Engine eng;
  std::string name;
};

int main() {
  Motorcar c("Mini Cooper Clubman", 170);

  c.display_motorcar();
  return 0;
}
