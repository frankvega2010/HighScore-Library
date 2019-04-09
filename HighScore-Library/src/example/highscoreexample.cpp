#include <iostream>
#include "score.h"

using namespace std;

void createHighScore_Example()
{
	HighScore highscoretest;

	createHighScore(highscoretest);

	for (int i = 0; i < MAXSCORELENGHT; i++) // MAXSCORELENGHT is 32
	{
		cout << highscoretest.scoreList[i].name << " ";
		cout << highscoretest.scoreList[i].value << endl;
	}
}

void createHighScore_Example2()
{
	HighScore highscoretest;

	createHighScore(highscoretest);

	for (int i = 0; i < MAXSCORELENGHT; i++) // MAXSCORELENGHT is 32
	{
		if (i < 5) // Show until 5
		{
			cout << highscoretest.scoreList[i].name << " ";
			cout << highscoretest.scoreList[i].value << endl;
		}
		else
		{
			return;
		}
	}
}

void addScore_Example()
{
	HighScore highscoretest;

	int index = 3;

	createHighScore(highscoretest);

	addScore(highscoretest, index, 45, 'g');

	cout << highscoretest.scoreList[index].name << " ";
	cout << highscoretest.scoreList[index].value << endl;
	cout << endl;

	for (int i = 0; i < MAXSCORELENGHT; i++) // MAXSCORELENGHT is 32
	{
		cout << highscoretest.scoreList[i].name << " ";
		cout << highscoretest.scoreList[i].value << endl;
	}
}

void getScoreName_Example()
{
	HighScore highscoretest;

	int index = 3;

	createHighScore(highscoretest);

	addScore(highscoretest, index, 45, 'g');

	cout << getScoreName(highscoretest, index) << endl;
	//cout << getScoreValue(highscoretest, index) << endl;
}

void main()
{
	createHighScore_Example();

	cout << endl;

	createHighScore_Example2();

	cout << endl;

	addScore_Example();

	cout << endl;

	getScoreName_Example();

	cout << endl;

	cin.get();
}