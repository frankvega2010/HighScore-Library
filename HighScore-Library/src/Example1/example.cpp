#include <iostream>
#include "score.h"

using namespace std;

void main()
{
	HighScore highscoretest;

	createHighScore(highscoretest);

	for (int i = 0; i < MAXSCORELENGHT; i++)
	{
		cout << highscoretest.scoreList[i].name << " ";
		cout << highscoretest.scoreList[i].value << endl;
	}

	cin.get();
}