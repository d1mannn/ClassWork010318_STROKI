#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <string>
#include <string.h>
#define greeting "������!"
#define max 51
using namespace std;

void putMine(const char *string)
{
	while (*string != '\0')
	{
		putchar(*string++);
	}
}

void getMine( char *string)
{
	char c = getchar();
	while (c != '\0')
	{
		*string = c;
		string++;
	}
}

int main()
{
	setlocale(LC_ALL, "Rus");
	char name[max] = "BASIC NAME";
	char *cName = NULL;
	char name2[max] = "NOT BASIC";
	int task;
	cout << "������ ����� - ";
	cin >> task;
	switch (task)
	{
		case 1:
		{
			//1
			printf("enter ur name:\n");
			cName = gets_s(name); // �� ��������� ����� �������
			printf("HELLO, %s\n\n", name);
		} break;

		case 2:
		{
			//2
			cName = fgets(name, 10, stdin); // ���� �� ������� - ������ ���������� �� ����, ����� ����������
			printf("%s", cName);
		} break;

		case 3:
		{
			//3
			char NAME[max];
			int c = scanf("%5s %10s", name, NAME); // ������� ������� - ��� ��� ������ ������
			printf("---GOOD DAY %s----\n\n", name);
			printf("GOOD DAY %s\n\n", NAME);
		} break;

		case 4:
		{
			//4
			char namae[max] = "HELLO MY FRIEND";
			const char *str = "Some text for string 2"; // �������
			char dontPanic[] = { 'd', 'n', 't' };

			puts("Puts OUTPUT");
			puts(namae);// puts(&namae[5]) ������ ��������� � 5�� ��������
			puts(str); // puts(str + 4) ������ ��������� � 4�� ��������
			puts(dontPanic); // ������� ������ ) �.�. ���� \0 ���� ����� ������
		} break;

		case 5:
		{
			//5 fputs()
			fputs(name, stdout);
		} break;

		case 6:
		{
			//6 getchar & putchar
			putMine(name);
			puts(name);
		} break;

		case 7:
		{
			//7 strlen(char) - ������� ����� ������
			printf("length %d \n", strlen(name));
		} break;

		case 8:
		{
			//8 strcat() - ���������� (������������� �����)
			strcat(name, name2); // name2 ����������� � name
			printf("name - %s\n", name); 
			printf("name2 - %s\n", name2);

		} break;

		case 9:
		{
			//9 strncat() - ���������, �� ������� �����
			strncat(name, name2, 3); // �������� 3 �������
			//strncat(name, name2 + 4, 3); // �������� 3 ������� � 4 �������
			printf("name - %s\n", name);
			printf("name2 - %s\n", name2);

		}

		case 10:
		{
			char key[max] = "BASIC NAME";
			printf("resul %d\n\n", strcmp(name, key));
			//while (strcmp(name, key)) // name == key
			//{
			//	puts("EVRICA");
			//	gets_s(key);
			//}
		} break;

		case 11:
		{
			//11 strcpy() strncpy()
			//char fName[5][max];
			char key[max] = {};
			char key2[max] = {};
			fgets(key, 5, stdin);
			strcpy(key, key2);
			printf("if Eqials %d", strcmp(key, key2));

			/*int i = 0;
			while (i < max && gets_s(key))
			{
				if (key[0] != 'D')
				{
					printf("%s �� �������� D", key[0]);
				}
				else
				{
					strcpy(fName[i], key);
					i++;
				}
			}
			puts("lits letter");
				for (int i = 0; i < 5; i++)
				{
					if (key[0] != 'D')
					{

					}
				}*/
		} break;
	}



	/*printf("Good day %s\n", name);
	int arr;
	while ((arr = getchar()) != EOF)
	{
		cName = gets_s(name);
	}*/
	


	return 0;

	int r = 123;
	//hex(max); �������� ������� � ������� f12 ����� ������ ��� �������� �������

	//char *gg;
	//scanf("%s", gg); // �� ����� ������� ���

	//cout << endl;
	//system("pause");
	//


	//const char g[] = "������, ��� ����!!!";
	////g[5] = 'S'; // ����� �������� ����� ������ ������ ���� �� �����
	//char i[] = "123456789";
	//printf("%s, %p, %c\n\n\n", "We", "are", *"space"); // s - ������, p - ����� ������� ������� (a)re, c - ��� -���� ������. �� ������ �������
	//cout << g << endl << i << endl;

	//char *gg = "Hello world"; // ������ ������ �� +1 ��� �������� ����� �� ������ ������
	////*(gg + 5) = 'S'; // ��� ������� �� �����
	//puts(gg);

	
}