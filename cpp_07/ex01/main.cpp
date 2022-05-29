#include "iter.hpp"

class Awesome {
  private:
    int _n;

  public:
    Awesome(void) : _n(42) { return; }
    int get(void) const { return this->_n; }
};

std::ostream &operator<<(std::ostream &o, Awesome const &rhs) {
    o << rhs.get();
    return o;
}

template <typename T> void print(T const &x) {
    std::cout << x << std::endl;
    return;
}

template <typename T> void print2(T const &x) {
    std::cout << x << " ";
    return;
}

template <typename T> void add(T const &t) { const_cast<T &>(t)++; }

int main() {
    int tab[] = {0, 1, 2, 3, 4};
    char tab1[] = "Hello world!";
    Awesome tab2[5];

    std::cout << "print digit array" << std::endl;
    iter(tab, 5, print);
    iter(tab, 5, add);
    iter(tab, 5, add);
    std::cout << "after add * 2, print2" << std::endl;
    iter(tab, 5, print2);
    std::cout << std::endl;

    std::cout << "print2 string" << std::endl;
    iter(tab1, 12, print2);
    std::cout << std::endl;
    iter(tab1, 12, add);
    std::cout << "after add, print2" << std::endl;
    iter(tab1, 12, print2);
    std::cout << std::endl;
    std::cout << "print digit array set Default: 42" << std::endl;
    iter(tab2, 5, print);

    return 0;
}