#include "score.h"

char getScoreName(HighScore& score, int index)
{
	return score.scoreList[index].name;
}