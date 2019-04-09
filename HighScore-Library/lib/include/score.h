#ifndef SCORE_H
#define SCORE_H
#define MAXSCORELENGHT 32

struct Score
{
	char name;
	int value;
};

struct HighScore
{
	Score scoreList[MAXSCORELENGHT];
};
void createHighScore(HighScore& score);
void addScore(HighScore& score, int index, int value, char name);
char getScoreName(HighScore& score, int index);
int getScoreValue(HighScore& score, int index);

#endif