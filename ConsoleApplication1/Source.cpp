#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <math.h>
#include <conio.h>
#include <time.h>
#include <Windows.h>

using namespace std;

//double min(int *x, int*y);
void m(int *m, int razm, int *pr, int *sum);
void m4(int*m, int razm);
void m5(int *m, int razm);
void str(char *m);

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");
	short int z;
	do
	{
		cout << "Kakoe zadanie?" << endl;
		cin >> z;
		switch (z)
		{
		case 1:
		{
			int one = 99;
			int *refOne, *refTree;

			refOne = &one;
			refTree = refOne; 

			cout << *refOne << " - " << *refTree << endl;
		}
		break;

		case 2:
		{
			int x = 5, y = 6;
			cout << min(&x, &y) << endl;
		}
		break;

		case 3:
		{
			//1.	Написать функцию, которая получает указатель на массив и его размер, и возвращает сумму и произведение его элементов в двух параметрах - ссылках.
			int mas[10], proiz = 1, sum = 0;
			for (int i = 0; i < 10; i++)
			{
				mas[i] = 1 + rand() % 50;
				cout << mas[i] << "\t";
			}
			cout << endl;
			m(mas, 10, &proiz, &sum);
			cout << proiz << endl << sum << endl;
		}
		break;

		case 4:
		{
			//2.	Написать функцию, которая получает указатель на массив и его размер, и возвращает количество отрицательных, положительных и нулевых элементов массива, используя механизм ссылок.
			int mas[10];
			for (int i = 0; i < 10; i++)
			{
				mas[i] = -15 + rand() % 50;
				cout << mas[i] << "\t";
			}
			cout << endl;

			m4(mas, 10);
		}
		break;

		case 5:
		{
			/*3.	Написать функцию, которая получает указатель на двумерный массив и его размер, и возвращает среднее арифметическое элементов массива,
				а также количество чётных и нечётных элементов, используя механизм ссылок.*/
			int mas[10], elem;
			for (int i = 0; i < 10; i++)
			{
				mas[i] = -15 + rand() % 50;
				cout << mas[i] << "\t";
			}
			cout << endl;

			m5(mas, 10);
		}
		break;

		case 6:
		{
			//6.	Создать функцию, позволяющую добавлять блок элементов в конец массива.
			char mas[100] = "Petrov "; 
			str(mas);
			cout << mas << endl;
		}
		break;

		case 7:
		{
			//7.	Создать функцию, позволяющую вставлять блок элементов, начиная с произвольного индекса массива.
			int arr[20] = {1,2,3,4,5,6};
			int ind, ch[20], kol;
			cout << "Vvedite index s kotorogo nado vstavit' elementy" << endl;
			cin >> ind;
			cout << "Kolichestvo elementov" << endl;
			cin >> kol;
			cout << "Vvedite elementy dlya vstavki" << endl;
			for (int i = 0; i < kol; i++)
			{
				
			}
		}
		break;

		} 

	} while (z <= 0);



	system("pause");
}


//double min(int *x, int*y)
//{
//	if (*x > *y)
//		return*x;
//	else
//		return *y;
//}

void m(int *m, int razm, int *pr, int *sum)
{
	for (int i = 0; i < razm; i++)
	{
		*pr *= m[i];
		*sum += m[i];

	}
}

void m4(int*m, int razm)
{
	int pol = 0, ot = 0, zero = 0;
	for (int i = 0; i < razm; i++)
	{
		if (m[i] == 0)
			zero++;
		if (m[i] > 0)
			pol++;
		if (m[i] < 0)
			ot++;
	}
	cout << "Kolichestvo pol = " << pol << endl;
	cout << "Kolichestvo otr = " << ot << endl;
	cout << "Kolichestvo nul = " << zero << endl;
}

void m5(int *m, int razm)
{
	int chet = 0, nechet = 0;
	for (int i = 0; i < razm; i++)
	{
		if (m[i] % 2 == 0)
			chet++;
		else
			nechet++;
	}
	cout << "Chetnyh = " << chet << endl;
	cout << "Nechetnyh = " << nechet << endl;
}

void str(char *m)
{
    SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int len = strlen(m);
	cout << len << endl;
	char name[50];
	cout << "Vvedite imya " << endl;
	//char*rw = nullptr;
	//rw = gets_s(name);
	cin >> name;
	strcat(m, name);

}

int check ()