// LabforBab1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <locale>
#include <Windows.h>
#include "iostream"

using namespace std;


int main()
{
	//setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Бойко Владислав Леонтиевич." << endl;
	cout << "Родился 15 сентября 1998 года в одном городе в Украине 90-тых." << endl;

	system("pause");
}

