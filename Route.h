#pragma once
#include "Avto.h"
#include "Driver.h"
#include"Disp.h"

class Route {
private:
	bool status;
	int end;
	Disp disp;
	Avto avto;
	Driver driver;
public:
	Route() {
		status = false;
		end = 0;
	}
	Route(bool status, int id_disp, int st_disp, int car_id, bool car_oper, bool driver_d, int id_driver ) {
		this->status = status;
		this->end = 10;
		disp = Disp(id_disp, st_disp);
		avto = Avto();
		driver = Driver(driver_d, id_driver);
	}
	void SetStatus(bool status);
	void SetEnd(int end);
	void GetStatus();
	void GetEnd();
	void Print();
	void BanDriver();
	void RepaierCar();
};