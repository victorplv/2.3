#include "Driver.h"
#include<iostream>
using namespace std;

void Driver::SetId(int id)
{
	this->id = id;
}
void Driver::SetRequest(bool request)
{
	this->request = request;
}
void Driver::GetId()
{
	if (this->id) cout << "Номер водителя: " << id << endl;
	else cout << "У водителя нет номера или водитель отстранен" << endl;
}
void Driver::GetRequest()
{
	if (this->request) cout << "Водитель в поездке " << endl;
	else cout << "Водитель свободен " << endl;
}
void Driver::PrintDriver()
{
	void GetId();
	void GetRequest();
}
