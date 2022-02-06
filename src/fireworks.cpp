#include "fireworks.h"

#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
#pragma comment(lib, "winmm.lib")

void FireWorks(string Message = "FireWorks")
{
	system("color 0A");
	int Count = 0;
	string Line = "\0";
	sndPlaySound("D:\\MyRepository\\Projects\\new_year_fireworks\\new_year_fireworks\\sound\\fireworks.wav", SND_ASYNC | SND_NODEFAULT | SND_LOOP);
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j == 0)
			{
				system("color 0A");
			}
			else if (j == 1)
			{
				system("color 0B");
			}
			else if (j == 2)
			{
				system("color 0C");
			}
			else if (j == 3)
			{
				system("color 0D");
			}
			else if (j == 4)
			{
				system("color 0E");
			}
			else if (j == 5)
			{
				system("color 01");
			}
			else if (j == 6)
			{
				system("color 02");
			}
			else if (j == 7)
			{
				system("color 04");
			}
			else if (j == 8)
			{
				system("color 05");
			}
			else
			{
				system("color 06");
			}
			Count = (rand() % 100) + 1;
			while (Count > 0)
			{
				Line = Line + ' ';
				Count = Count - 1;
			}
			if (j % 10 == 0)
			{
				cout << Line << "*" << Message << "*";
			}
			else
			{
				cout << Line << "*";
			}
			Line = " ";
			Sleep(50);
		}
	}

	PlaySound(NULL, NULL, SND_ASYNC);
}
