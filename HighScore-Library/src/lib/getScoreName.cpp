#include "score.h"

string getScoreName(HighScore& score, int index)
{
	return score.scoreList[index].name;
}