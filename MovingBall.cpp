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
		for (int i = 0; i < LENGTH; i++)
		{
			if (i != ballX)
				cout << "-";
			else if (i == ballX) {
				cout << "O";
			}
		}
		Sleep(100);
		ballX--;
	}

}
