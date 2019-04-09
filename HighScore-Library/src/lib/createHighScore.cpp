#include "score.h"

void createHighScore(HighScore& score)
{
	for (int i = 0; i < MAXSCORELENGHT; i++)
	{
		score.scoreList[i].name = "AAA";
		score.scoreList[i].value = 0;
	}
}