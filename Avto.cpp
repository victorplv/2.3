#include <iostream>
#include "Avto.h"

void Avto::GetLook() {
	cout << "������� ��� " << &Avto::CarCard::GetLook << endl;
}
void Avto::GetMark() {
	cout << "����� ������ " << &Avto::CarCard::GetMark << endl;
}
void Avto::GetType() {
	cout << "��� ������ " << &Avto::CarCard::GetType << endl;
}
void Avto::SetCarID(int car_id)
{
	this->car_id = car_id;
}
void Avto::SetOper(bool oper) {
	this->operability = oper;
}
void Avto::GetCarId() {
	cout << "ID ������ " << car_id;
}
void Avto::GetOper() {
	if (operability) cout << "������ �������" << endl;
	else cout << "������ �������" << endl;
}
void Avto::CarCard::GetLook() {
	cout << "������ ��" << endl;
}
void Avto::CarCard::GetMark() {
	cout << "������ ��" << endl;
}
void Avto::CarCard::GetType() {
	cout << "������ ��" << endl;
}

