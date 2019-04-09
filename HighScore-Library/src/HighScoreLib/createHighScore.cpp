#include "score.h"

void createHighScore(HighScore& score)
{
	for (int i = 0; i < MAXSCORELENGHT; i++)
	{
		score.scoreList[i].name = 'a';
		score.scoreList[i].value = 0;
	}
}

//void main()
//{
//	HighScore gameScore1;
//	createHighScore(gameScore1);
//
//	/*for (int i = 0; i < MAXSCORELENGHT; i++)
//	{
//		gameScore1.scoreList[i].name = 'a';
//		gameScore1.scoreList[i].value = 0;
//	}*/
//
//	addScore(gameScore1, 5, 500, 'c');
//	cout << getScoreName(gameScore1, 5);
//	cout << endl;
//	cout << getScoreValue(gameScore1, 5);
//
//	/*gameScore1.scoreList[2].name = 'b';
//	gameScore1.scoreList[2].value = 323;*/
//	cout << endl;
//
//	/*for (int i = 0; i < MAXSCORELENGHT; i++)
//	{
//		cout << gameScore1.scoreList[i].name;
//		cout << gameScore1.scoreList[i].value;
//		cout << endl;
//	}*/
//
//	cin.get();
//}