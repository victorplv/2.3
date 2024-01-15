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
	cout << "ID диспетчера " << id_d << endl;
}
void Disp::GetSt() {
	cout << "Номер диспетчера " << status_d << endl;
}
void Disp::Print()
{
	cout << "Я диспетчер, мой id: " << id_d << endl;
}
void GlavDisp::Print()
{
	cout << "Я главный диспетчер"<< endl;
}