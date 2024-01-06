#include <iostream>

int main() {
    for (int i = 1; i <= 2; ++i) {
        for (int j = 1; j <= 3; ++j) {
            std::cout << i * 2 << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
