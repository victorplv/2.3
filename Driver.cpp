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
	if (this->id) cout << "����� ��������: " << id << endl;
	else cout << "� �������� ��� ������ ��� �������� ���������" << endl;
}
void Driver::GetRequest()
{
	if (this->request) cout << "�������� � ������� " << endl;
	else cout << "�������� �������� " << endl;
}
void Driver::PrintDriver()
{
	void GetId();
	void GetRequest();
}
