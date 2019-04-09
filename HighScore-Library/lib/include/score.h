#ifndef SCORE_H
#define SCORE_H
#define MAXSCORELENGHT 32
#include <string>
using namespace std;

struct Score
{
	string name;
	int value;
};

struct HighScore
{
	Score scoreList[MAXSCORELENGHT];
};
void createHighScore(HighScore& score);
void addScore(HighScore& score, int index, string name, int value);
string getScoreName(HighScore& score, int index);
int getScoreValue(HighScore& score, int index);

#endif