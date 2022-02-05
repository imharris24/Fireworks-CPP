#include <iostream>
#include <string>
#include "fireworks.h"
using namespace std;

int main()
{
	string Message = "\0";
	while (true)
	{
		system("cls");
		cout << "Enter Message to Display with Fireworks : ";
		getline(cin, Message);
		system("cls");
		FireWorks(Message);
	}
	return 0;
}