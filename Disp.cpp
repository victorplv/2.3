#include <iostream>
#include"Disp.h"

void Disp::SetId(int id)
{
	this->id_d = id;
}
void Disp::SetSt(int st) {
	this->status_d = st;
}
void Disp::GetId()
{
	cout << "ID ���������� " << id_d << endl;
}
void Disp::GetSt() {
	cout << "����� ���������� " << status_d << endl;
}
void Disp::Print()
{
	cout << "� ���������, ��� id: " << id_d << endl;
}
void GlavDisp::Print()
{
	cout << "� ������� ���������"<< endl;
}