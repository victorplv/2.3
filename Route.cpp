#include<iostream>
#include"Route.h"


using namespace std;

void Route::SetStatus(bool status) {
	this->status = status;
}
void Route::SetEnd(int end) {
	this->end = end;
}
void Route::GetStatus() {
	if (status) cout << "������ � �������� " << endl;
	else cout << "������� �� ���������" << endl;
}
void Route::GetEnd(){
	cout << "������ ������� " << end << endl;
}
void Route::Print() {
	Route::GetStatus();
	Route::GetEnd();
}
void Route::BanDriver() {
	Route::driver.SetRequest(false);
	cout << "�������� ��������� " << endl;
}
void Route::RepaierCar() {
	Route::avto.SetOper(false);
	cout << "��������� ������ �� ������ ����������" << endl;
}