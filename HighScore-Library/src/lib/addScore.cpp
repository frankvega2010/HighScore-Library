#include "score.h"

void addScore(HighScore& score, int index, string name, int value)
{
	score.scoreList[index].name = name;
	score.scoreList[index].value = value;
}