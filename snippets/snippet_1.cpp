int negate(int i) { return -i; }

template <typename T> typename T::value_type negate(const T &t) {
  typename T::value_type n = -t();
}

int main() { negate(2.0); }
