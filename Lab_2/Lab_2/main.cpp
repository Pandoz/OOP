#include <iostream>
#include <ctime>
#include "Functions.h"

const int GLOBAL_ARRAY_SIZE = 5;

int main()
{
	system("chcp 1251");
	system("cls");
	srand((unsigned)time(NULL));

	// ���������� ������� ���������� �������
	int array[GLOBAL_ARRAY_SIZE];
	for (int i = 0; i < GLOBAL_ARRAY_SIZE; ++i)
		array[i] = (rand() % 10) + 1;

	std::cout << "��������� ������: ";
	for (int i = 0; i < GLOBAL_ARRAY_SIZE; ++i)
		std::cout << array[i] << " ";
	std::cout << "\n";


	std::cout << "\n[ ������� #1 ]\n";
	int (*pointer1)(int[]) = &sum;
	int (*pointer2)(int[]) = &mult;
	std::cout << "����� ��������� ������� �����: " << pointer1(array) << '\n';
	std::cout << "������������ ��������� ������� �����: " << pointer2(array) << '\n';

	std::cout << "\n[ ������� #2 ]\n";
	void (*bar)(int[]) = foo(array);
	bar(array);
	std::cout << "�������� ������: ";
	for (int i = 0; i < GLOBAL_ARRAY_SIZE; ++i)
		std::cout << array[i] << " ";
	std::cout << '\n';

	return 0;
}