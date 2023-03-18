#include "registration.h"

// Вывод зарегистрированных транспортных средств
void registratedVehiclesPrint(int counter, Participants participants[]) {
    std::cout << "Зарегестрированные транспортные средства: ";
    for (int i = 0; i < counter; i++) {
        if (i == 0) {
            std::cout << participants[i].getName();
        }
        else std::cout << ", " << participants[i].getName();
    }
    std::cout << std::endl;
}


// Регистрация транспортных средств 
Participants* registration(int type, int distance) {
    int userVehicleReg = 0;
    int counter = 0;
    bool isRegistrated = false;
    int regOrStart = 0;

    Camel camel;
    FasterCamel fastCamel;
    Centaur centaur;
    Boots boots;
    Carpet carpet;
    Eagle eagle;
    Broom broom;

    int sizeVehilceList = 8;
    std::string* vehilceList = new std::string[sizeVehilceList];
    vehilceList[0] = "Завершить регистрацию";

    switch (type)
    {
    case 1: // Land race
        sizeVehilceList = 5;
        vehilceList[1] = camel.getName();
        vehilceList[2] = fastCamel.getName();
        vehilceList[3] = centaur.getName();
        vehilceList[4] = boots.getName();
        break;
    case 2: // Air race
        sizeVehilceList = 4;
        vehilceList[1] = carpet.getName();
        vehilceList[2] = eagle.getName();
        vehilceList[3] = broom.getName();
        break;
    case 3: // Mix race
        sizeVehilceList = 8;
        vehilceList[1] = camel.getName();
        vehilceList[2] = fastCamel.getName();
        vehilceList[3] = centaur.getName();
        vehilceList[4] = boots.getName();
        vehilceList[5] = carpet.getName();
        vehilceList[6] = eagle.getName();
        vehilceList[7] = broom.getName();
        break;
    default:
        break;
    }

    int sizeRegistrated = sizeVehilceList - 1;
    Participants* participants = new Participants[sizeRegistrated];

    while (!(counter > 1 && regOrStart == 2)) {
        if (counter < 1) {
            std::cout << "Необходимо количество транспортных средст для начала гонки: " << 2 - counter << "!" << std::endl;
            std::cout << "1. Зарегестрировать транспортное средство" << std::endl;
        }
        else if (counter == sizeRegistrated) {
            registratedVehiclesPrint(counter, participants);

            std::cout << "Вы зарегистрировали все возможные транспортные средства, начните гонку!" << std::endl;
        }
        else if (counter > 1) {
            registratedVehiclesPrint(counter, participants);

            std::cout << "Вы можете начать гонку или зарегистрировать еще транспортных средств!" << std::endl;
            std::cout << "1. Зарегестрировать транспортное средство" << std::endl;
        }

        if (counter > 1) {
            std::cout << "2. Начать гонку" << std::endl;
        }
        std::cout << "Выберите действие: ";
        std::cin >> regOrStart;

        system("cls");

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<int>::max(), '\n');
            continue;
        }

        if (regOrStart == 1) {
            while (true) {
                if (counter != 0) {
                    registratedVehiclesPrint(counter, participants);
                }

                std::cout << "Гонка для наземного транспорта. Расстояние: " << distance << std::endl;

                for (int i = 1; i < sizeVehilceList; i++) {
                    isRegistrated = false;
                    for (int x = 0; x < sizeRegistrated; x++) {
                        if (participants[x].getName() == vehilceList[i]) {
                            isRegistrated = true;
                        }
                    }
                    if (isRegistrated) {
                        continue;
                    }
                    std::cout << i << ". " << vehilceList[i] << std::endl;
                }

                if (counter > 1) {
                    std::cout << "0. " << vehilceList[0] << std::endl;
                    std::cout << "Выберите транспорт или 0 для окончания регистрации: ";
                }
                else std::cout << "Выберите транспорт: ";
                std::cin >> userVehicleReg;

                for (int i = 0; i < sizeRegistrated; i++) {
                    isRegistrated = false;
                    if (vehilceList[userVehicleReg] == participants[i].getName()) {
                        isRegistrated = true;
                        break;
                    }
                }

                if (isRegistrated) {
                    system("cls");
                    std::cout << "Транспортное средство уже зарегестрировано!" << std::endl;
                    continue;
                }

                if (userVehicleReg == 0 && counter > 1) {
                    break;
                }
                if (userVehicleReg <= 0 || userVehicleReg > sizeRegistrated) {
                    system("cls");
                    std::cout << "Введите корректное значение!" << std::endl;
                    continue;
                }

                switch (type)
                {
                case 1: // Land race
                    switch (userVehicleReg)
                    {
                    case 1:
                        camel.race(distance);
                        participants[counter] = Participants(camel.getName(), camel.getResult());
                        participants->addMembers();
                        break;
                    case 2:
                        fastCamel.race(distance);
                        participants[counter] = Participants(fastCamel.getName(), fastCamel.getResult());
                        participants->addMembers();
                        break;
                    case 3:
                        centaur.race(distance);
                        participants[counter] = Participants(centaur.getName(), centaur.getResult());
                        participants->addMembers();
                        break;
                    case 4:
                        boots.race(distance);
                        participants[counter] = Participants(boots.getName(), boots.getResult());
                        participants->addMembers();
                        break;
                    default:
                        break;
                    }
                    break;

                case 2: // Air race
                    switch (userVehicleReg)
                    {
                    case 1:
                        carpet.race(distance);
                        participants[counter] = Participants(carpet.getName(), carpet.getResult());
                        participants->addMembers();
                        break;
                    case 2:
                        eagle.race(distance);
                        participants[counter] = Participants(eagle.getName(), eagle.getResult());
                        participants->addMembers();
                        break;
                    case 3:
                        broom.race(distance);
                        participants[counter] = Participants(broom.getName(), broom.getResult());
                        participants->addMembers();
                        break;
                    default:
                        break;
                    }
                    break;

                case 3: // Mix race
                    switch (userVehicleReg)
                    {
                    case 1:
                        camel.race(distance);
                        participants[counter] = Participants(camel.getName(), camel.getResult());
                        participants->addMembers();
                        break;
                    case 2:
                        fastCamel.race(distance);
                        participants[counter] = Participants(fastCamel.getName(), fastCamel.getResult());
                        participants->addMembers();
                        break;
                    case 3:
                        centaur.race(distance);
                        participants[counter] = Participants(centaur.getName(), centaur.getResult());
                        participants->addMembers();
                        break;
                    case 4:
                        boots.race(distance);
                        participants[counter] = Participants(boots.getName(), boots.getResult());
                        participants->addMembers();
                        break;
                    case 5:
                        carpet.race(distance);
                        participants[counter] = Participants(carpet.getName(), carpet.getResult());
                        participants->addMembers();
                        break;
                    case 6:
                        eagle.race(distance);
                        participants[counter] = Participants(eagle.getName(), eagle.getResult());
                        participants->addMembers();
                        break;
                    case 7:
                        broom.race(distance);
                        participants[counter] = Participants(broom.getName(), broom.getResult());
                        participants->addMembers();
                        break;
                    default:
                        break;
                    }
                    break;

                default:
                    break;
                }

                counter++;

                if (counter == sizeRegistrated) {
                    break;
                }

                system("cls");
            }
            system("cls");
        }

    }

    delete[] vehilceList;
    return participants;
}