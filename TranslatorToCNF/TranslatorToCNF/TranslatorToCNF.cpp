// TranslatorToCNF.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

using namespace std;

int main(int argc, char *argv[])
{
	setlocale(LC_ALL, "Russian_Russia.1251");//������������ ������� ����
	int argn = 1;
	while (argn < argc) {
		if ( (strcmp(argv[argn], "help") == 0) || (strcmp(argv[argn], "HELP") == 0)) {
			cout << "����� �����-�� ����� help" << endl;
			argn++;
		}
		else {
			cout << "���������� �������������� �������� \"" 
				<< argv[argn] << "\", ��� ���� ���������.\n ��������� ��������� � ���������� help ��� ��������� �������" << endl;
			argn++;
		}
	}
	getchar();
	return 0;
}

