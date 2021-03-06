// Lab 2 - arrays
// Array - block of identical type of data
//Such as string, matrix, 2D 3D graphics, Just a line of numbers or a table, Videobuffer
//Data_type Name [size]
//Data_type Name [size] = {value for all}
//Data_type Name [size] = {value1, value2 ...}
//Example:

//int arr[5] = {1, 50, 11, 12, 6}

//Name[index] - call an element 
//Arrays r nummering from 0 to (length - 1)
//2D arr - 
//Type Name [size1][size2] = 
//{{a11, a12, a13}
//{a21, a22, a23}
//{a31, a32, a33}}
// Name[1][2] = a12;	if want to num all arr at once do
//						int a[a][b] = {{value}}

#include "pch.h"
#include <iostream>

void bubble(int arr[])
{
	int sw = 0;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10 - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				sw = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = sw;
			}
		}

	}
	for (int i = 0; i < 10; i++)
	{
		std::cout << arr[i] << '\t';
	}
	std::cout << std::endl;
}
void Ceasar(char text[])
{
	int val;
	for (int i = 0; i < 14; i++)
	{
		val = (text[i]);
		if ((val >= 88 && val <= 90) || (val >= 120 && val <= 122))
		{
			val -= 23;
			text[i] = char(val);
		}
		if ((val >= 65 && val <= 87) || (val >= 97 && val <= 119))
		{
			val += 3;
			text[i] = char(val);
		}
	}
	for (int i = 0; i < 14; i++)
	{
		std::cout << text[i];
	}
	std::cout << std::endl;
}
void shakemeup(int shake[])
{
	int sw;
	int size = 10;
	int s = 1;
	int e = size - 1;
	std::cout << std::endl;
	while (s <= e)
	{
		for (int i = e; i >= s; i--)
		{
			if (shake[i - 1] > shake[i])
			{
				sw = shake[i];
				shake[i] = shake[i - 1];
				shake[i - 1] = sw;
			}
		}
		s++;
		for (int i = s; i <= e; i++)
		{
			if (shake[i - 1] > shake[i])
			{
				sw = shake[i];
				shake[i] = shake[i - 1];
				shake[i - 1] = sw;
			}
		}
		e--;
	}
	for (int i = 0; i < 10; i++)
	{
		std::cout << shake[i] << ' ';
	}
}
					//Main
int main()
{
	std::cout << "Elementwise matrix multiplying" << '\n';
	int a[3][3] = { {1, 2, 3},
					{4, 5, 6},
					{7, 8, 9} };
	int b[3][3] = { {10, 11, 12},
					{13, 14, 15},
					{16, 17, 18} };
	int c[3][3] = { {0} };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			c[i][j] = a[i][j] * b[i][j];
			std::cout << c[i][j] << '\t';
		}
		std::cout << '\n';
	}
	std::cout << '\n' << '\n';
	std::cout << "Classic matrix multiplying" << '\n';
	int c1[3][3] = { {0} };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				c1[i][j] += a[i][k] * b[k][j];
			}
			std::cout << c1[i][j] << '\t';
		}
		std::cout << '\n';
	}
	std::cout << std::endl;
	//Bubble sorting
	std::cout << "Bubble sorting" << '\n';
	int bub[10];
	for (int i = 0; i < 10; i++)
	{
		bub[i] = 1 + rand() % 100;
		std::cout << bub[i] << '\t';
	}
	std::cout << '\n';
	bubble(bub);
	std::cout << '\n';
	
	//Ceasar's cipher
	std::cout << "Ceasar's cipher" << '\n';
	char line[] = "i want to cry";
	Ceasar(line);
	std::cout << std::endl;
	//Shaker sort
	std::cout << "Shaker sorting" << '\n';
	int shake[10];
	for (int i = 0; i < 10; i++)
	{
		shake[i] = 1 + rand() % 100;
		std::cout << shake[i] << ' ';
	}
	shakemeup(shake);
	return 0;
}