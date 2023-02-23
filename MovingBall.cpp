#include <iostream>
#include <Windows.h>
#include <stdlib.h>
using namespace std;

const int LENGTH = 20;
int ballX = LENGTH;

int main()
{
	for (int i = 0; i < LENGTH; i++) {
		system("CLS");
		for (int j = 0; j < LENGTH; j++)
		{
			if (j != ballX)
				cout << "-";
			else if (j == ballX) {
				cout << "O";
			}
		}
		Sleep(100);
		ballX--;
	}

}
