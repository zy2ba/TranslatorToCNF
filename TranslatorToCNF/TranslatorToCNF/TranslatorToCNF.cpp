// TranslatorToCNF.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

using namespace std;

int main(int argc, char *argv[])
{
	setlocale(LC_ALL, "Russian_Russia.1251");//обеспечивает русский язык
	int argn = 1;
	while (argn < argc) {
		if ( (strcmp(argv[argn], "help") == 0) || (strcmp(argv[argn], "HELP") == 0)) {
			cout << "Здесь когда-то будет help" << endl;
			argn++;
		}
		else {
			cout << "Обнаружена нераспознанная комманда \"" 
				<< argv[argn] << "\", она была пропущена.\n Запустите программу с аргументом help для получения справки" << endl;
			argn++;
		}
	}
	getchar();
	return 0;
}

