// Test.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>

int main()
{
	std::ofstream f("Shit.txt");
	f << "POOOOOOOOOOOOO";
	f.close();
}

