#include <iostream>
#include <Windows.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;

const int borderX = 40;
const int borderY = 20;
int isAlive = 1;
int ballX = borderX / 2;
int ballY = borderY / 2;

int draw();
int movement();

int main()
{
	while (isAlive == 1)
	{
		system("CLS");
		draw();
		movement();
		Sleep(10);
		
		
	}
}

int draw()
{
	for (int i = 0; i <= borderX; i++) {
		cout << "#";
	}
	cout << endl;
	for (int i = 0; i <= borderY; i++) {
		for (int j = 0; j <= borderX; j++) {
			if (j == 0 || j == borderX)
				cout << "#";
			else if (j == ballX && i == ballY)
				cout << 0;
			else
				cout << " ";
		}
		cout << endl;
	}
	for (int i = 0; i <= borderX; i++) {
		cout << "#";
	}
	return 0;
}

int movement()
{
	char input = ' ';
	if (_kbhit) {
		input = _getch();
		if (input == 'a')
			ballX--;
		else if (input == 'd')
			ballX++;
		else if (input == 'w')
			ballY--;
		else if (input == 's')
			ballY++;

	}
	return 0;
}
