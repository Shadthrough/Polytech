// Lab 2 - arrays
// Array - block of simmular type of data
//Such as string, matrix, 2D 3D graphics, Just a line of numbers ar a table, Videobuffer
//Data_type Name [size]
//Data_type Name [size] = {value for all}
//Data_type Name [size] = {value1, value2 ...}
//Example:

//int arr[5] = {1, 50, 11, 12, 6}

//Name[index] - call an element
//Arrays r nummering from 0 to (length - 1)
//2-dimentional - 
//Type Name [size1][size2] = 
//{{a11, a12, a13}
//{a21, a22, a23}
//{a31, a32, a33}}
// Name[1][2] = a12;	if want to num all arr for 1 do
//						int a[a][b] = {{value}}

#include "pch.h"
#include <iostream>

int main()
{
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
	/*int c1[3][3] = { {0} };
	for (i = 0; i < 3; i++)
	{
		for (j = 0; i < 3; j++)
		{
			for
		}
	}
	*/
	return 0;
}


