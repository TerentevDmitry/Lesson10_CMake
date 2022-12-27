// 10_01.cpp : Задача 1. Простейший проект

#include <iostream>
#include <string>

int main()
{
	setlocale(LC_ALL, "Russian"); //Корректное отображение Кириллицы
	system("chcp 1251");
	std::cout << std::endl;

	std::string name;

	std::cout << "Введите имя: ";
	std::cin >> name;

	std::cout << "Здравствуйте, " << name << "!";
	std::cout << std::endl;
}