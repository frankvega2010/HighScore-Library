#include "score.h"

void addScore(HighScore& score, int index, int value, char name)
{
	score.scoreList[index].name = name;
	score.scoreList[index].value = value;
}