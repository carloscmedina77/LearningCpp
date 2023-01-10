// working.cpp by Bill Weinman [bw.org]
// updated 2022-05-21
#include <format>
#include <iostream>

using std::format;
using std::cout;

int main() {
    auto x = 42;
    auto y = 7;
    if (x < y) {
        cout << "condition is true\n";
    }
    else {
        cout << "condition is false\n";
    }
}
