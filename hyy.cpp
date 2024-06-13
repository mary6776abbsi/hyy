#include <iostream>

void printStars(int n) {
    // �ǁ 5 �� ���
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << '*';
        }
        std::cout << std::endl;
    }

    // �ǁ �� ��� �����
    for (int j = 0; j < n * 2; ++j) {
        std::cout << '*';
    }
    std::cout << std::endl;

    // �ǁ 5 �� ���
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
