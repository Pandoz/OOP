#include "Complex.h"
#include <iostream>

std::istream& operator>> (std::istream& in, Complex& comp)
{
	std::cout << "������� ����������� �����: ";
	in >> comp.m_re >> comp.m_im;
	return in;
}