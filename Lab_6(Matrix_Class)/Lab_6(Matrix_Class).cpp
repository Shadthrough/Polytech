//

#include "pch.h"
#include <iostream>

class matrix
{
private:
	double matr[10][10];
	int rows;
	int columns;
public:
	matrix();
	~matrix();

	bool input();
	bool print();
	bool summMatrix(matrix matr1);
	bool multMatrix(matrix matr1);
	bool transp();
	int getRows()
	{
		return rows;
	}
	int getColumns()
	{
		return columns;
	}
	double getElem(int row, int col)
	{
		if (row<rows && col<columns && row>-1 && col>-1)
		{
			return matr[row][col];
		}
		std::cout << "Connot get element. Index Error!\n";
		return	-1;
	}
};

matrix::matrix()
{
}

matrix::~matrix()
{
}

bool matrix::input()
{
	std::cout << "Insert rows";
	int check;
	std::cin >> check;
	if (check <= 10 && check >= 1)
	{
		rows = check;
	}
	else
	{
		std::cout << "Error";
		return false;
	}

	std::cout << "Insert columns";
	check = 0;
	std::cin >> check;
	if (check <= 10 && check >= 1)
	{
		columns = check;
	}
	else
	{
		std::cout << "Error";
		return false;
	}
	std::cout << "Insert matrix's elements";
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			std::cin >> matr[i][j];
		}
	}
	std::cout << std::endl << "Done";
	return true;
}

bool matrix::print()
{
	std::cout << "Printing matrix...";
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < 0; j++)
		{
			std::cout << matr[i][j] << ' ';
		}
		std::cout << std::endl;
	}
	return true;
}

bool matrix::summMatrix(matrix matr1)
{
	if ((rows == matr1.rows) && (columns == matr1.columns))
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns; j++)
			{
				matr[i][j] += matr1.matr[i][j];
			}
		}
		std::cout << std::endl << "Done";
		return true;
	}
	else
	{
		std::cout << std::endl << "Error";
		return false;
	}
}

bool matrix::multMatrix(matrix matr1)
{
	if (rows == matr1.columns)
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < matr1.columns; j++)
			{
				int mid = 0;
				for (int k = 0; k < rows; k++)
				{
					mid += matr[i][k] * matr1.matr[k][j];
				}
				matr[i][j] = mid;
			}
		}
		std::cout << std::endl << "Done";
		return true;
	}
	else
	{
		std::cout << std::endl << "Error";
		return false;
	}
}

bool matrix::transp()
{
	for (int i = 0; i < rows; i++) 
	{
		for (int j = i; j < columns; j++) 
		{
			matr[i][j] = matr[j][i];
		}
	}
	std::cout << std::endl << "Done";
	return true;
}

int main()
{

	return 0;
}