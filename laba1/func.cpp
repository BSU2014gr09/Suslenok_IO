#include<iostream>
#include"func.h"
void enter(char * a)
{
cout << "Введите массив: " << endl;
fflush(stdin);
gets(a);
}

void subStr(char *s1, char *s2, int nach, int kol)лась
{
char *p = s1;// зачем введена новая переменная р? Почему не использовалась ЛОКАЛЬНАЯ s1 (см. строку 53, например)
p = p + nach;
strncpy(s2, p, kol); s2[kol] = 0;
}

void delStr(char *s, int nach, int kol)
{
char *p = s, *q; // зачем введены новые переменные р,q? Почему не использовалась ЛОКАЛЬНАЯ s1 (см. строку 53, например)
p = p + nach;
q = p + kol;
strcpy(p, q);
}

void delWord(char* str, int maxLen)
{
int len=0, nach=0, kol=0;
char *sub = new char[50];
if (!sub){ cout << "No memory"; exit(1); }
char pat[6] = "., !?";
while (*(str + len) != 0)
{
str = str + strspn(str, pat);
nach += strspn(str, pat);
len = strcspn(str, pat);
if (len == maxLen)
{
kol = len;
subStr(str, sub, nach, kol);
delStr(str, nach,kol );
}
else str = str + len;

}
}

int maxLenWord(char* str)
{
int maxLen = 0,len=0;
char pat[6] = "., !?";
while (*(str + len) !=0)
{
str = str + strspn(str, pat);
len = strcspn(str, pat); 
if (len > maxLen)
maxLen = len;
str = str + len; 

}
return maxLen;
}

void print(char* str)
{
cout << str << endl;
}
