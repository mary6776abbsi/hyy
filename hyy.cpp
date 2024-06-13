#include <iostream>

void printStars(int n) {
    // Ç 5 ÎØ Çæá
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << '*';
        }
        std::cout << std::endl;
    }

    // Ç ÎØ ÌÏÇ ˜ääÏå
    for (int j = 0; j < n * 2; ++j) {
        std::cout << '*';
    }
    std::cout << std::endl;

    // Ç 5 ÎØ Ïæã
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << '*';
        }
        std::cout << std::endl;
    }
}

int main() {
    int n;
    std::cout << "Enter the number of stars: ";
    std::cin >> n;

    printStars(n);

    return 0;
}
