#include <iostream>

struct S {
  int x = 1;
  int &r = x;

  void f(int y) const { r = y; }
};

int main() {
  const S s{};
  s.f(2);
  std::cout << s.x;

  return 0;
}