#include<iostream>
#include"func.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int choice = 1;
	while (choice)
	{
		cout << endl << "1 - condition" << endl << "2 - run" << endl << "0 - exit" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			system("cls");
			cout << "В массиве А(N,М) найти строку, для которой количество перемен знаков максимально и умножить её на вектор.";
			break;
		case 2:
		{
			system("cls");
			cout << "Проверьте out.txt\n";
			justDoIt();
			break;
		}
		case 0:
			break;
		default:
			system("cls");
			cout << "Choose the correct!";
		}
	}
	return 0;

}