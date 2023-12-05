#include <iostream>
#include "Avto.h"

void Avto::GetLook() {
	cout << "Внешний вид " << &Avto::CarCard::GetLook << endl;
}
void Avto::GetMark() {
	cout << "Марка машины " << &Avto::CarCard::GetMark << endl;
}
void Avto::GetType() {
	cout << "Тип машины " << &Avto::CarCard::GetType << endl;
}
void Avto::SetCarID(int car_id)
{
	this->car_id = car_id;
}
void Avto::SetOper(bool oper) {
	this->operability = oper;
}
void Avto::GetCarId() {
	cout << "ID машины " << car_id;
}
void Avto::GetOper() {
	if (operability) cout << "Машина рабочая" << endl;
	else cout << "Машина сломана" << endl;
}
void Avto::CarCard::GetLook() {
	cout << "хихихи ха" << endl;
}
void Avto::CarCard::GetMark() {
	cout << "хихихи ха" << endl;
}
void Avto::CarCard::GetType() {
	cout << "хихихи ха" << endl;
}

