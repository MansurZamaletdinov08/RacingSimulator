#include <iostream>
#include "../TSDynamicLibrary/Transport.h"



void SortTransports(int i) {

}

int main() {
	setlocale(LC_ALL, "Ru");

	int type, distance, registration, transport;
	int race;

	do {
		std::cout << "1. ����� ��� ��������� ����������." << std::endl;
		std::cout << "2. ����� ��� ���������� ����������. " << std::endl;
		std::cout << "3. ����� ��� ��������� � ���������� ����������." << std::endl;

		std::cout << "�������� ��� �����.";
		std::cin >> type;

		std::cout << "������� ����� ���������(������ ���� ������������): ";
		std::cin >> distance;


		std::cout << "������ ���� ����������������� ���� �� ��� ������������ ��������." << std::endl;
		std::cout << "1. ���������������� ���������" << std::endl;
		std::cout << "�������� ��������: ";
		std::cin >> registration;



		std::cout << "����� ��� ��������� ����������. ����������: " << distance << std::endl;
		std::cout << "1. �������-���������\n2. �����\n3. �������\n4. �������\n5. ���\n6. �������-���������\n7. ����-������\n0. ��������� �����������" << std::endl;
		std::cout << "�������� ��������� ��� 0 ��� ��������� �����������: ";
		std::cin >> transport;

		std::cout << "1. �������� ��� ���� �����" << std::endl;
		std::cout << "2. �����" << std::endl;
		std::cout << "�������� ��������: ";
		std::cin >> race;
	} while (race != 2);
}