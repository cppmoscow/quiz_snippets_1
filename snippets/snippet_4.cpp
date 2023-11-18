#include <iostream>

struct S {
  int x = 1;
  int &r = x;
};

int main() {
  const S s{};
  s.r = 2;
  std::cout << s.x;
}