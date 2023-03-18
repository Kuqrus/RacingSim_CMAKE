#include "participants.h"

Participants::Participants() {
	name = "None";
	score = -1;
}

Participants::Participants(std::string _name, double _score) {
	name = _name;
	score = _score;
};

void Participants::setName(std::string _name) { name = _name; }
void Participants::setScore(double _score) { score = _score; }
void Participants::addMembers() { members++; }

std::string Participants::getName() { return name; }
double Participants::getScore() { return score; }
int Participants::getMembers() { return members; }