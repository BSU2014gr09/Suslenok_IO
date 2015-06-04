#include <iostream>
#include <fstream>
using namespace std;
int countExclamtions(char* str);

void main()
{
	ifstream in("input.txt");
	int lineCounter = 0;

	char* buff = new char[100];
	while (!in.eof())
	{
		in.getline(buff, 100);
		lineCounter++;
	}
	in.close();
	in.open("input.txt");

	char **lines = new char*[lineCounter];
	for (int i = 0; i < lineCounter; i++)
	{
		lines[i] = new char[100];
		in.getline(lines[i], 100);
	}

	for (int i = 0; i < lineCounter - 1; i++)
	{
		for (int j = i + 1; j < lineCounter; j++)
		{
			if (countExclamtions(lines[i]) > countExclamtions(lines[j]))
			{
				char* tmp = lines[i];
				lines[i] = lines[j];
				lines[j] = tmp;
			}
		}
	}

	for (int i = 0; i < lineCounter; i++)
	{
		cout<<lines[i]<<endl;
	}

}

int countExclamtions(char* str)
{
	char counter = 0;
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] == '!')
		{
			counter++;
		}
	}
	return counter;
}