#include <iostream>

enum { max_size_name = 50 };

typedef struct {
  unsigned int id;
  char name[max_size_name];
  double weight;
  unsigned int price;
} THING;

int main() {
  THING box;
  std::cin >> box.id >> box.name >> box.weight >> box.price;
  std::cout << box.name << ' ' << box.id << ": " << box.weight << ", "
            << box.price << std::endl;
  __ASSERT_TESTS__
  return 0;
}