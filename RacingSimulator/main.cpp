#include <iostream>
#include "../TSDynamicLibrary/Transport.h"



void SortTransports(int i) {

}

int main() {
	setlocale(LC_ALL, "Ru");

	int type, distance, registration, transport;
	int race;

	do {
		std::cout << "1. Гонка для наземного транспорта." << std::endl;
		std::cout << "2. Гонка для воздушного транспорта. " << std::endl;
		std::cout << "3. Гонка для наземного и воздушного транспорта." << std::endl;

		std::cout << "Выбирете тип гонки.";
		std::cin >> type;

		std::cout << "Укажите длину дистанции(должна быть положительна): ";
		std::cin >> distance;


		std::cout << "Должно быть зарегестрированно хотя бы два транспортных средства." << std::endl;
		std::cout << "1. Зарегестрировать транспорт" << std::endl;
		std::cout << "выберите действие: ";
		std::cin >> registration;



		std::cout << "Гонка для назменого транспорта. Расстояние: " << distance << std::endl;
		std::cout << "1. Ботинки-вездеходы\n2. Метла\n3. Верблюд\n4. Кентавр\n5. Орёл\n6. Верблюд-быстроход\n7. Ковёр-самолёт\n0. Закончить регестрацию" << std::endl;
		std::cout << "Выберите транспорт или 0 для окончания регистрации: ";
		std::cin >> transport;

		std::cout << "1. Провести ещё одну гонку" << std::endl;
		std::cout << "2. Выйти" << std::endl;
		std::cout << "Выберите действие: ";
		std::cin >> race;
	} while (race != 2);
}