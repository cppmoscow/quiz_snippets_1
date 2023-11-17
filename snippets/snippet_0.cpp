#include <cassert>
#include <new>

struct C {
  virtual int transform();
};

struct D : C {
  int transform() {
    new (this) C;
    return 2;
  }
};

int C::transform() {
  new (this) D;
  return 1;
}

int main() {
  C c;
  int n = c.transform();
  int m = c.transform();
  assert(m + n == 3);
}