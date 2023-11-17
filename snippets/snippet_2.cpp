#include <memory>

struct S {};

int main() {
  alignas(S) unsigned char buffer[4 * sizeof(S)];
  auto arr = new (static_cast<void *>(&buffer)) S[4];
  delete[] arr;
}