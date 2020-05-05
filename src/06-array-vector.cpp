#include <iostream>
#include <array>
#include <vector>


int main() {

    // using older style C array (built in)
    const size_t heightA{4};
    const size_t widthA{4};

    std::string setA [heightA][widthA] {
        {"a", "b", "c", "d"},
        {"e", "f", "g", "h"},
        {"i", "j", "k", "l"},
        {"m", "n", "o", "p"}
    };

    for (auto& row : setA) {
        for (auto& col : row) {
            std::cout << col;
        }
        std::cout << "\n";
    }

    std::cout << "\n-----\n";

    // using newer style class template array (from <array>)
    const size_t heightB{4};
    const size_t widthB{4};

    std::array<std::array<std::string, widthB>, heightB> setB {{
        {"a", "b", "c", "d"},
        {"e", "f", "g", "h"},
        {"i", "j", "k", "l"},
        {"m", "n", "o", "p"}
    }};

    for (auto& row : setB) {
        for (auto& col : row) {
            std::cout << col;
        }
        std::cout << "\n";
    }

    std::cout << "\n-----\n";

    // vector approach with <vector>... dynamic - no need to specify a size, just the type!
    std::vector<std::vector<std::string>> setC {
        {"a", "b", "c", "d"},
        {"e", "f", "g", "h"},
        {"i", "j", "k", "l"},
        {"m", "n", "o", "p"}
    };

    for (auto& row : setC) {
        for (auto& col : row) {
            std::cout << col;
        }
        std::cout << "\n";
    }

return 0;
}
