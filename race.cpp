#include "race.h"

// Сортировка и вывод результатов участников 
void raceResult(Participants participants[]) {
    double tempScore = 0;
    std::string tempName = "";

    for (int i = 0; i < participants->getMembers(); i++) {
        for (int x = participants->getMembers() - 1; x > i; x--) {

            if (participants[x].getScore() < participants[x - 1].getScore()) {
                tempScore = participants[x - 1].getScore();
                participants[x - 1].setScore(participants[x].getScore());
                participants[x].setScore(tempScore);

                tempName = participants[x - 1].getName();
                participants[x - 1].setName(participants[x].getName());
                participants[x].setName(tempName);
            }
        }
    }

    std::cout << "Результаты гонки: " << std::endl;
    for (int i = 0; i < participants->getMembers(); i++) {
        std::cout << i + 1 << ". " << participants[i].getName() << ": " << participants[i].getScore() << std::endl;
    }
}

bool startRace() {
    char endOrRepeat = '0';

    int type = selectType();
    int distance = selectDistance();

    Participants* parti = registration(type, distance);

    raceResult(parti);

    std::cout << "\n\n**********\n\n";

    do
    {
        std::cout << "Провести ещё одну гонку? (y/n): ";
        std::cin >> endOrRepeat;

        system("cls");

        switch (endOrRepeat)
        {
        case 'y':
            return true;
            break;
        case 'n':
            return false;
            break;
        default:
            break;
        }
    } while (endOrRepeat != 'y' || 'n');

}
