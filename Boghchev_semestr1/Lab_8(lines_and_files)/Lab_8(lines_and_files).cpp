//#include <cstring> - library for Cstrings: strcat()((Join lines)); strlen()((Length));
//strcmp()((Comparing))letterwise;
/*
How to name:
char name[] = "vsvfvsv sv";
char name[] = {'C', 'd', 'r'..., '\0'};
char name[] = {'\55', '\115', '\566'..., '\0'};

Char is basically a number so u can +, -, *, /;
U print lines with printf() - print formated;
Also u can use %val Ex: print("smth %s smth %f")
https://www.cplusplus.com/reference
%f - double like;
%s - lines;
%d - int like;
%e - exponential;

int i = strcmp(cstr1, cstr2);
printf_s("")//checking for errors with types
strcpy(val1, val2)/strcpy_s(val1, check spase for val1, val2);

#include <string> // String as a class


Diff tween cppstr and cstr:
last for cstr is \0

	Files
0.1 Check if file exists
0.2 When work in C++ should create a file obj
1. Open file
2. Working with file
3. Closing file

To work with C++ with files use: std::fstream

fstream -> basic_fstream

fstream fs; //Creating obj
	// Opening
fs.open()
*/

#include "pch.h"
#include <iostream>
#include <cstring>
#include <string>
#include <fstream>

int main()
{
	/*std::string main_line, sub_line;
    std::cout << "Insert a line\n";
	std::getline(std::cin, main_line);
	std::cout << "Insert a subline\n";
	std::getline(std::cin, sub_line);
	*/
	std::fstream fi, fs;
	std::string main_line, sub_line;
	fi.open("in.txt", std::fstream::in);
	std::getline(fi, main_line);
	std::getline(fi, sub_line);
	fi.close();
	int i = 0;
	fs.open("out.txt", std::fstream::out);
	while (main_line.find(sub_line, i) != -1)
	{
		i = main_line.find(sub_line, i);
		fs << i << '\t';
		i++;
	}
	fs.close();
	return 0;
}
