#pragma once

#include <iostream>

using namespace std;

class Disp {
private:
	int id_d;
	int status_d;
public:
	Disp() {
		id_d = 0;
		status_d = 0;
	}
	Disp(int id, int st) {
		this->id_d = id;
		this->status_d = st;
	}
	void SetId(int id);
	void SetSt(int st);
	void GetId();
	void GetSt();
};