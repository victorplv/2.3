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
	if (status) cout << "поезда в процессе " << endl;
	else cout << "Поездка не назначена" << endl;
}
void Route::GetEnd(){
	cout << "Оценка поездки " << end << endl;
}
void Route::Print() {
	Route::GetStatus();
	Route::GetEnd();
}
void Route::BanDriver() {
	Route::driver.SetRequest(false);
	cout << "Водитель отстранен " << endl;
}
void Route::RepaierCar() {
	Route::avto.SetOper(false);
	cout << "Поступила заявка на ремонт автомобиля" << endl;
}