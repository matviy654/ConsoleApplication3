#include <iostream>
#include <string>
#include <iomanip>

// Завдання 1
void task1() {
    int number, digit, sum = 0, count = 0, zero_count = 0;
    std::cout << "Завдання 1. Введіть число: ";
    std::cin >> number;

    int temp = abs(number); 
    while (temp > 0) {
        digit = temp % 10;
        sum += digit;
        if (digit == 0) {
            zero_count++;
        }
        temp /= 10;
        count++;
    }

    double average = count > 0 ? static_cast<double>(sum) / count : 0;
    std::cout << "Кількість цифр: " << count << std::endl;
    std::cout << "Сума цифр: " << sum << std::endl;
    std::cout << "Середнє арифметичне цифр: " << average << std::endl;
    std::cout << "Кількість нулів: " << zero_count << std::endl;
}

void task2() {
    int cellSize;
    std::cout << "Завдання 2. Введіть розмір клітинки: ";
    std::cin >> cellSize;

    for (int row = 0; row < 8; ++row) {
        for (int i = 0; i < cellSize; ++i) {
            for (int col = 0; col < 8; ++col) {
                if ((row + col) % 2 == 0) {
                    std::cout << std::string(cellSize, '*');
                }
                else {
                    std::cout << std::string(cellSize, '-');
                }
            }
            std::cout << std::endl;
        }
    }
}

int main() {
    int choice;

    do {
        std::cout << "\nМеню:\n";
        std::cout << "1. Порахувати цифри, суму та середнє арифметичне\n";
        std::cout << "2. Вивести шахову дошку\n";
        std::cout << "0. Вихід\n";
        std::cout << "Ваш вибір: ";
        std::cin >> choice;

        switch (choice) {
        case 1: task1(); break;
        case 2: task2(); break;
        case 0: std::cout << "Вихід...\n"; break;
        default: std::cout << "Невірний вибір!\n";
        }
    } while (choice != 0);

    return 0;
}
