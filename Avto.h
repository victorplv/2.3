#pragma once
#include <iostream>

using namespace std;

class Avto
{
private:
	int car_id;
	bool operability;

	class CarCard {
	private:
		int look;
		string type;
		string mark;
	public:
		CarCard() {
			this->look = 0;
			this->mark = "_";
			this->type = "*";
		}
		CarCard(int look, string type, string mark) {
			this->look = look;
			this->mark = mark;
			this->type = type;
		}
		void GetLook();
		void GetMark();
		void GetType();
	};
	CarCard card;
public:
	Avto() {
		this->car_id = 0;
		this->operability = false;
	}
	Avto(int car_id, int look, string type, string mark) {
		this->car_id = car_id;
		this->operability = true;
		this->card = CarCard(10, "седан", "лада");
	}
	void GetLook();
	void GetMark();
	void GetType();
	void SetCarID(int car_id);
	void SetOper(bool oper);
	void GetCarId();
	void GetOper();
};