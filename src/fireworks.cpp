#include "fireworks.h"

#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

void FireWorks(string Message = "FireWorks")
{
	int Count = 0;
	string Line = "\0";
	for (int i = 0; i < 1000; i++)
	{
		Count = (rand() % 100) + 1;
		while (Count > 0)
		{
			Line = Line + ' ';
			Count = Count - 1;
		}
		if (i % 10 == 0)
		{
			cout << Line << "*" << Message << "*";
		}
		else
		{
			cout << Line << "*"
				 << "\a";
		}
		Line = " ";
		Sleep(50);
	}
}