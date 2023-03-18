#include "userInputs.h"

// Ввод типа гонки
int selectType() {
    int type = 0;
    std::cout << "Добро пожаловать в гоночный симулятор!\n1. Гонка для наемного транспорта\n2. Гонка для воздушного транспорта\n3. Гонка для наземного и воздушного транспорта\nВыберите тип гонки: ";
    std::cin >> type;
    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<int>::max(), '\n');
    }
    system("cls");

    while (type < 1 || type > 3) {
        std::cout << "Введите корректный вариант!" << std::endl;
        std::cout << "1. Гонка для наемного транспорта\n2. Гонка для воздушного транспорта\n3. Гонка для наземного и воздушного транспорта\nВыберите тип гонки: ";
        std::cin >> type;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<int>::max(), '\n');
        }
        system("cls");
        if (type >= 1 && type <= 3) {
            break;
        }
    }
    return type;
}

// Ввод дистанции
int selectDistance() {
    int distance = 0;
    std::cout << "Укажите длину дистанции (должная быть положительна): ";
    std::cin >> distance;
    system("cls");
    while (distance <= 0) {
        std::cout << "Длина дистанции должна быть положительна!" << std::endl;
        std::cout << "Укажите дистанцию: ";
        std::cin >> distance;
        system("cls");
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<int>::max(), '\n');
            continue;
        }
    }
    return distance;
}