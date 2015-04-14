#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include"func.h"
using namespace std;

int main()
{
setlocale(LC_ALL, "Russian");
int n, value, maxLen;
bool pr = false;
cout << " Введите максимальную длину строки: ";
cin >> n;
char *str = new char[n];
if (!str)
{
cout << "No memory";
exit(1);
}
while (1)
{
cout << "\n Введите номер пункта:"; 
cout << "1) Ввод строки " << endl
<< "2) Вывод строки " « endl
<< "3) Преобразование строки " « endl
<< "4) Выход" « endl;
cin >> value;
switch (value)
{
case 1:
system("cls");
enter(str);
break;
case 2:
system("cls");
print(str);
break;
case 3:
system("cls");
maxLen=maxLenWord(str);
delWord(str, maxLen);
//cout « endl « maxLen « endl;
break;
case 4:
system("cls");
cout << "Good-Bye!" << endl;
exit(1);
break;
}
}
system("pause");
}