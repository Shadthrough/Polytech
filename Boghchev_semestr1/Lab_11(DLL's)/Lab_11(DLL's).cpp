//#include "..\Dll\Dll.h"
//Explicit
//typedef int(CALLBACK* FUNC) (args)
//Loadlibrary(L"")
//GetProcAdress(L"file")
//HINSTANSE - type of data for func pointers


//		Errors:
//	When u try to use loadlibrary(L"") L means that we should use x64
//Also when u change to x64 it changes from libr to exe.
//	If libraries are not found try full path with '/' instead of '\'
//	If HINSTANCE does not work see if "Windows.h" is included


#include "pch.h"
#include <iostream>
#include "Windows.h"

//typedef int(CALLBACK* FUNC)(int, int, int);
extern "C" __declspec(dllimport) int Disc(int a, int b, int c);

int main()
{
	//HINSTANCE hDLL;
	//hDLL = LoadLibrary(L"C:/Users/Shadthrough/source/repos/Lab_1/x64/Debug/Dll.dll");
	//std::cout << hDLL << std::endl;
	//FUNC pDisc = (FUNC)GetProcAddress(hDLL, "Disc");
	//std::cout << pDisc;
	int a, b, c;
	int d = 0;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	//d = pDisc(a, b, c);
	d = Disc(a, b, c);
	std::cout << d;
	return 0;
}
