//

#include <iostream>
#include "lib.h"

class dynamic_matrix
{
private:
	int rows;
	int columns;
	double *matr;
public:
	dynamic_matrix();
	~dynamic_matrix();

	friend dynamic_matrix operator + (const dynamic_matrix & l, dynamic_matrix & r);
	friend dynamic_matrix operator * (const dynamic_matrix & l, dynamic_matrix & r);
	friend dynamic_matrix operator - (const dynamic_matrix & l, dynamic_matrix & r);
	friend std::ostream & operator << (std::ostream & os, dynamic_matrix & r);
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

dynamic_matrix operator + (const dynamic_matrix & l, dynamic_matrix & r)
{
	if (l.rows == r.rows && l.columns == r.columns)
	{
		dynamic_matrix res;
		res.columns = r.columns;
		res.rows = r.rows;
		res.matr = new double[res.rows * res.columns];
		for (int i = 0; i < res.rows; i++)
		{
			for (int j = 0; j < res.columns; j++)
			{
				res.matr[i * res.columns + j] =
					l.matr[i * res.columns + j] + r.matr[i * res.columns + j];
			}
		}
		return res;
	}
	else
		return l;
}
dynamic_matrix operator - (const dynamic_matrix & l, dynamic_matrix & r)
{
	if (l.rows == r.rows && l.columns == r.columns)
	{
		dynamic_matrix res;
		res.columns = r.columns;
		res.rows = r.rows;
		res.matr = new double[res.rows * res.columns];
		for (int i = 0; i < res.rows; i++)
		{
			for (int j = 0; j < res.columns; j++)
			{
				res.matr[i * res.columns + j] =
					l.matr[i * res.columns + j] - r.matr[i * res.columns + j];
			}
		}
		return res;
	}
	else
		return l;
}

dynamic_matrix operator * (const dynamic_matrix & l, dynamic_matrix & r)
{
	if (l.rows == r.columns)
	{
		dynamic_matrix res;
		res.columns = r.columns;
		res.rows = l.rows;
		res.matr = new double[res.rows * res.columns];
		for (int i = 0; i < l.rows; i++)
		{
			for (int j = 0; j < r.columns; j++)
			{
				double mid = 0;
				for (int k = 0; k < l.rows; k++)
				{
					mid += l.matr[i * l.rows + k] * r.matr[k * l.rows + j];
				}
				res.matr[i * l.rows + j] = mid;
			}
		}
		std::cout << std::endl << "Done" << std::endl;
		return res;
	}
	else
	{
		std::cout << std::endl << "Error" << std::endl;
		return l;
	}
}

std::ostream & operator << (std::ostream & os, dynamic_matrix & r)
{
	for (int i = 0; i < r.rows; i++)
	{
		for (int j = 0; j < r.columns; j++)
		{
			os << r.matr[i * r.columns + j] << ' ';
		}
		os << std::endl;
	}
	return os;
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
	for (int i = 0; i < columns; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			sw = matr[i * columns + j];
			matr[i * columns + j] = matr[j * columns + i];
			matr[j * columns + i] = sw;
		}
	}
	std::cout << std::endl << "Done" << std::endl;
	return true;
}
void Hello()
{
	std::cout << "Hello";
}
