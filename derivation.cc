#include <iostream>

class Furniture {
 public:

  Furniture (std::string const &d, unsigned int w):
      description(d), weight(w) {
  }

  void display_furniture() {
    std::cout << "This is a piece of furniture named " << description
              << " and weighs " << weight << '\n';
  }

 private:
  std::string description;
  unsigned int weight;
};

class Bed: public Furniture {
 public:

  Bed(std::string const &d, unsigned int w, unsigned int npers):
      Furniture(d, w),
      persons(npers) {
  }

  void display_bed() {
    std::cout << "This is a bed, it sleeps " << persons << " persons.\n"
              << "Properties as furniture:\n";
    display_furniture();
  }

 private:
  unsigned int persons;
};

int main() {
  Furniture t("dinner table", 100);
  t.display_furniture();
  std::cout << '\n';

  Bed b("kingsize bed", 300, 2);
  b.display_bed();
}
