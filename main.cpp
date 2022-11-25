#include <iostream>

int main() {
    std::cout << "bindera!" << std::endl;
    int x = 15;
    while (x--) {
        for (int i = 0; i <= x; i++) {
            std::cout << i << '\t';
        }
        std::cout << '\n';
    }
    return 12;
}
