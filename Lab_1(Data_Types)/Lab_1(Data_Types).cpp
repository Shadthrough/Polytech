// лабораторная 1 СТРУКТУРА ПРОГРАММЫ, ТИПЫ ДАННЫХ, ОСНОВНЫЕ ОПЕРАТОРЫ
#include "pch.h"
#include <iostream>//подключить библиотеки

int main()// "Точка входа"
{
	//STD - облость видимости
	// в iostream есть часть библиотеке std
	// \n- знак переноса строки/ Существует \t-табуляция \" "\  */
	std::cout << "\"Hello, World!\"\n";
	std::cout << "Hello, World!\r";
	std::cout << "\'Hello, World!\'\t";
	std::cout << "Hello, World!\t";
	std::cout << "\*Hello, World!\*";
	//обьявление пременных/тип данных
	//int a;
	//int nuber_of_desks;
	//double speed;
	//типы данных
	//char(x8),short(x16),int(x32),long int(x32),long long(x64) - целые цисла со знаком
	//float(x32),double(x64)-числа с плаваюшей точкой
	//char- так же символы
	//boll,long boll
	std::cout << '\n';
	std::cout << '\n';
	std::cout << "name\t\t|size of \t|min\t\t\t|max\t\n";
	std::cout << "bool \t\t|" << sizeof(bool) << "\t\t|" << 0;
	std::cout << "\t\t\t|" << 0b10000000 << "\t\n";
	std::cout << "int\t\t|" << sizeof(int) << "\t\t|" << INT_MIN;
	std::cout << "\t\t| " << INT_MAX << "\t\n";
	std::cout << "char\t\t|" << sizeof(char) << "\t\t|" << CHAR_MIN;
	std::cout << "\t\t\t| " << CHAR_MAX << "\t\n";
	std::cout << "short\t\t|" << sizeof(short) << "\t\t|" << SHRT_MIN;
	std::cout << "\t\t\t| " << SHRT_MAX << "\t\n";
	std::cout << "long\t\t|" << sizeof(long) << "\t\t|" << LONG_MIN;
	std::cout << "\t\t| " << LONG_MAX << "\t\n";
	std::cout << "double\t\t|" << sizeof(double) << "\t\t|" << DBL_MIN;
	std::cout << "\t\t| " << DBL_MAX << "\t\n";
	std::cout << "long long\t|" << sizeof(long long) << "\t\t|" << LLONG_MIN;
	std::cout << "\t| " << LLONG_MAX << "\t\n";
}