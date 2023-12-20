#include <iostream>
#include "Avto.h"

void Avto::SetCarID(int car_id)
{
	this->car_id = car_id;
}
void Avto::SetOper(bool oper) 
{
	this->operability = oper;
}
void Avto::GetCarId() 
{
	cout << "ID машины " << car_id;
}
void Avto::GetOper() 
{
	if (operability) cout << "Машина рабочая" << endl;
	else cout << "Машина сломана" << endl;
}


