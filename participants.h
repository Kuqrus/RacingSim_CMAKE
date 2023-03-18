#pragma once
#include <iostream>

class Participants
{
public:
	Participants();

	Participants(std::string _name, double _score);

	void setName(std::string _name);
	void setScore(double _score);
	void addMembers();

	std::string getName();
	double getScore();
	int getMembers();

private:
	std::string name;
	double score;
	int members = 0;
};

