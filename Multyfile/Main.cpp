#include <iostream>
#include "functions.h"
#include "Structures.h"
#include "Data.h"

// ������� ���������� ������������� ��������:
//	1) ��������� ������;
//	2) ���������� ���� �� ������� ��� �������� ������ � ��������
//	3) �������� ����������� ���������


int main() {
	setlocale(LC_ALL(NULL), "Russian");
	
	int n,m;


	// ������� ������� � ��������� �����
	/*
	std::cout << "������� 2 ����� ->";
	std::cin >> n >> m;
	std::cout << n << " + " << m << " = " << sum(n, m) << std::endl;

	hi();
	*/

	const int s = 10;
	int arr[s]{ 1,2,3 };
	print_arr(arr, s);

	person p1{
		"Salam Alekumov", 25, "Shaurm'e", 80000
	};

	_A = 5;

	print_person(p1);

	_A = 10;

	std::cout << "A = " << _A << "\n";
	std::cout << "PI = " << _PI << "\n";
	std::cout << "E = " << _E << "\n";

	return 0;
}