#include "Structures.h"
#include <iostream>
// #include "Data.h" // Ошибка т.к. дублируется объявление переменных

extern int _A; // модификатор объявления переменной, указывающий на то, что она уже объявлена в каком-либо другом файле

void print_person(const person& P){
	std::cout << "Имя:      " << P.name << std::endl;
	std::cout << "Возраст:  " << P.age << std::endl;
	std::cout << "Работа:   " << P.job << std::endl;
	std::cout << "Зарплата: " << P.salary << std::endl;
	std::cout << "A = " << _A << std::endl;
}


