#include "userInputs.h"

// ���� ���� �����
int selectType() {
    int type = 0;
    std::cout << "����� ���������� � �������� ���������!\n1. ����� ��� �������� ����������\n2. ����� ��� ���������� ����������\n3. ����� ��� ��������� � ���������� ����������\n�������� ��� �����: ";
    std::cin >> type;
    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<int>::max(), '\n');
    }
    system("cls");

    while (type < 1 || type > 3) {
        std::cout << "������� ���������� �������!" << std::endl;
        std::cout << "1. ����� ��� �������� ����������\n2. ����� ��� ���������� ����������\n3. ����� ��� ��������� � ���������� ����������\n�������� ��� �����: ";
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

// ���� ���������
int selectDistance() {
    int distance = 0;
    std::cout << "������� ����� ��������� (������� ���� ������������): ";
    std::cin >> distance;
    system("cls");
    while (distance <= 0) {
        std::cout << "����� ��������� ������ ���� ������������!" << std::endl;
        std::cout << "������� ���������: ";
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