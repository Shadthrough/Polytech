//Lab 7 - Dynamic memory
/*
Stack memory - static, if stack too big => overflow
To use free OS memory (heap (Pile of undisposed memory))
Example:
int * ptr_int//Var name// = new() int//size of getable memory//       We get pointer ptr_int with size of int
Overflow - when all RAM ends
To get rid of memory that we do not use should write "Var_name delete;"
C is diff from C++ in new/delete - they r only in C++
In dynamic memory u can only get memory for 1D array;
To del array should "delete [] Pointer_name"

int ** dynamic2DArray = new int *[size]
to DEL all the dynam array u should first DEL inner arrays then outter one. 
Ex: For {delete [] name[shit];} delete [] name.
when giving 2D to func should do "** int"
*/

#include "pch.h"
#include <iostream>

//

#include "pch.h"
#include <iostream>

class dynamic_matrix
{
private:
	int rows;
	int columns;
	double *matr;
public:
	dynamic_matrix();
	~dynamic_matrix();

	bool input();
	bool print();
	bool summMatrix(dynamic_matrix matr1);
	bool multMatrix(dynamic_matrix matr1);
	bool transp();
	int getRows()
	{
		return rows;
	}
	int getColumns()
	{
		return columns;
	}
	/*double getElem(int row, int col)
	{
		if (row<rows && col<columns && row>-1 && col>-1)
		{
			return matr[row][col];
		}
		std::cout << "Connot get element. Index Error!\n";
		return	-1;
	}*/
};

dynamic_matrix::dynamic_matrix()
{
}

dynamic_matrix::~dynamic_matrix()
{
}

bool dynamic_matrix::input()
{
	std::cout << "Insert rows";
	std::cin >> rows;
	std::cout << "Insert columns";
	std::cin >> columns;
	std::cout << "Insert matrix's elements";
	matr = new double[rows * columns];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			std::cin >> matr[i * columns + j];
		}
	}
	std::cout << std::endl << "Done";
	return true;
}

bool dynamic_matrix::print()
{
	std::cout << std::endl << "Printing matrix... \n";
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			std::cout << matr[i * columns + j] << ' ';
		}
		std::cout << std::endl;
	}
	return true;
}

bool dynamic_matrix::summMatrix(dynamic_matrix matr1)
{
	if ((rows == matr1.rows) && (columns == matr1.columns))
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns; j++)
			{
				matr[i * columns + j] += matr1.matr[i * columns + j];
			}
		}
		std::cout << std::endl << "Done" << std::endl;
		return true;
	}
	else
	{
		std::cout << std::endl << "Error" << std::endl;
		return false;
	}
}

bool dynamic_matrix::multMatrix(dynamic_matrix matr1)
{
	if (rows == matr1.columns)
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < matr1.columns; j++)
			{
				double mid = 0;
				for (int k = 0; k < rows; k++)
				{
					mid += matr[i * rows + k] * matr1.matr[k * rows + j];
				}
				matr[i * rows + j] = mid;
			}
		}
		std::cout << std::endl << "Done" << std::endl;
		return true;
	}
	else
	{
		std::cout << std::endl << "Error" << std::endl;
		return false;
	}
}

bool dynamic_matrix::transp()
{
	int ch;
	if (rows != columns)
	{
		ch = rows;
		rows = columns;
		columns = ch;
	}
	double sw = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = i; j < columns; j++)
		{
			sw = matr[i * columns + j];
			matr[i * columns + j] = matr[j * columns + i];
			matr[j * columns + i] = sw;
		}
	}
	std::cout << std::endl << "Done" << std::endl;
	return true;
}



int main()
{
	dynamic_matrix matrA, matrB;
	matrA.input();
 	matrB.input();
	//matrA.transp();
	matrA.print();
	//matrA.summMatrix(matrB);
	//matrA.print();
	matrA.multMatrix(matrB);
	matrA.print();
	return 0;
}