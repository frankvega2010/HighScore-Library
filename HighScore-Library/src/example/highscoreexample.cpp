#include <iostream>
#include <string>
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

	addScore(highscoretest, index, "Frank", 45);

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

	addScore(highscoretest, index, "Frank", 45);

	cout << getScoreName(highscoretest, index) << endl;
}

void getScoreValue_Example()
{
	HighScore highscoretest;

	int index = 3;

	createHighScore(highscoretest);

	addScore(highscoretest, index, "Frank", 45);

	cout << getScoreValue(highscoretest, index) << endl;
}

void main()
{
	cout << "// createHighScore_Example() ---------------------------------" << endl;
	createHighScore_Example();
	cout << endl;

	cout << "// createHighScore_Example2() ---------------------------------" << endl;
	createHighScore_Example2();
	cout << endl;

	cout << "// addScore_Example() ---------------------------------" << endl;
	addScore_Example();
	cout << endl;

	cout << "// getScoreName_Example() ---------------------------------" << endl;
	getScoreName_Example();
	cout << endl;

	cout << "// getScoreValue_Example() ---------------------------------" << endl;
	getScoreValue_Example();
	cout << endl;

	cin.get();
}