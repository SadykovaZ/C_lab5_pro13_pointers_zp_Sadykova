// C_lab5_pro13_pointers.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
#include<time.h>

using namespace std;


int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int n = 0;
start:
	cout << "Введите номер лаб.: ";
	cin >> n;
	if (n == 1)
	{
		cout << "1.	Объвить две переменные и два указателя. Присвоить указателям адреса переменных. Сложить переменные, используя указатели и присвоить результат третьей переменной. Вывести результат сложения на экран и адрес результата." << endl;

		int a = 5, b = 4, s = 0;
		int *p, *p1;
		p = &a;
		p1 = &b;
		s = *p + *p1;
		cout << "Адрес результата = " << &s << " " << "Сумма = " << s << endl;
	}
	else if (n == 2)
	{

		cout << "2.	Исправить код: " << endl;
		//#include <iostream> 
		//using namespace std;
		//void main()
		//{
		//	int a = 2, b = 5;
		//	int *p1, *p2 = &b;
		//	*p1 = 10;
		//	cout << *p1 - *p2;
		//}

		//Исправленный код:
		int a = 2, b = 5;
		int *p1, *p2 = &b;
		p1 = &a;

		cout << *p1 - *p2;
		cout << endl;

	}
	else if (n == 3)
	{
		cout << "3.Исправить код:" << endl;
		//#include <iostream> 
		//using namespace std;
		//void main()
		//{
		//	double a = 2.5, b = 5.2, res;
		//	int *p1 = a, p2 = b;
		//	res = *p1 - p2;
		//	cout << res;
		//}

		//Исправленный код

		double a = 2.5, b = 5.2, res;
		double *p1 = &a, *p2 = &b;
		res = *p1 - *p2;
		cout << res;
		cout << endl;
	}
	else if (n == 4)
	{
		cout << "4.Исправить код:" << endl;
		//#include <iostream>
		//using namespace std;
		//void main()
		//{
		//	const int SIZE = 10;
		//	int A[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
		//	int *p = A;
		//	for (int i = 0; i<SIZE; i++) //выполнить вывод массива используя указатели
		//		cout << *A++;
		//}

		//Исправленный код

		const int SIZE = 10;
		int A[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
		int *p = A;
		for (p = A; p < A + SIZE; p++) //выполнить вывод массива используя указатели
			cout << *p << " " << endl;
	}
	else if (n == 5)
	{
		cout << "5. Используя указатели заполнить массив случайными числами и вывести его на экран." << endl;

		int a[10];
		int *p = a;

		for (p = a; p < a + 10; p++)
		{
			*p = 1 + rand() % 10;
		}
		for (p = a; p < a + 10; p++)
		{
			cout << *p << " ";
		}
		cout << endl;
	}
	else if (n == 6)
	{
		cout << "Дано натуральное число N и массив целых чисел. Используя указатели, выяснить имеется ли в массиве хотя бы одно нечетное отрицательное число и определить его местонахождение в массиве." << endl;

		int a[10] = { 1,2,3,-5,2,8,9,1,4,1 };
		int N;
		int *p = a;
		for (p = a; p < a + 10; p++)
		{
			if (*p < 0 && *p % 2 != 0)
			{
				cout << "Да есть = " << *p << " его номер = " << p - a << endl;
				break;
			}
		}
	}
	else if (n == 7)
	{
		cout << "7. Даны действительные числа а1,..a16. Используя указатели получить min(a1*a9,a2*a10,...,a8*a16)." << endl;
		int a[16] = { 1,2,3,4,5,6,1,2,1,2,2,2,2,1,1,2 };
		int *p = a;
		int res;
		int min = INT_MAX;
		for (p = a; p < a + 16 / 2; p++)
		{
			res = (*p * *(p + 8));
			cout << res << endl;
			if (res < min)
			{
				min = res;
			}
		}
		cout << "Min = " << min << endl;
	}
	else if (n == 8)
	{
		cout << "8. Дана последовательность a1,a2,...,a20. Используя указатели расположить положительные элементы последовательности, стоящие на нечетных местах по возрастанию" << endl;
		int a[20] = { 20,-2,16,1,13,3,10,-7,-6,5,7,8,9,11,12,10,14,13,20,15 };
		int *p = a;
		for (p = a; p < a + 20; p++)
		{
			cout << *p << " ";
		}
		cout << endl;
		for (int pass = 1; pass < 20; pass += 2)
		{
			for (p = a + 1; p < a + 19; p += 2)
			{
				if (*p < 0 || *(p+2)<0) continue;
				{
					if (*p > *(p + 2))
					{
						swap(*p, *(p + 2));
					}
				}
			}
		}
		for (p = a; p < a + 20; p++)
		{
			cout << *p << " ";
		}
		cout << endl;
	}

	else if (n == 9)
	{
		cout << "9.Дана последовательность x1,x2,...,x20. Используя указатели элементы, cтоящие на нечетных местах, расположить в порядке возрастания, а на нечетных в порядке убывания" << endl;

	}

	goto start;
	system("pause");
	return 0;
}

