#pragma once

#include <iostream>

using namespace std;

class Disp {
protected:
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
	Disp& operator==(const Disp & other)
	{
		id_d = other.id_d;
		status_d = other.status_d;
		return *this;
	}
	void SetId(int id);
	void SetSt(int st);
	void GetId();
	void GetSt();
	void Print();
};
class GlavDisp : public Disp
{
private:
	int salary;
public:
	void SetSalary(int sal)
	{
		this->salary = sal;
	}
	void GetSalary() 
	{
		cout << "Зарплата за поездку: " << salary << endl;
	}
	void Print();
	GlavDisp() :Disp()
	{

	}
	GlavDisp(int id_d, int status_d, int salary): Disp(id_d, status_d )
	{
		this->salary = salary;
		cout << "\nКонстуктор главного диспетчера" << endl;
	}
	GlavDisp& operator==(const GlavDisp& other)
	{
		Disp::operator=(other);
		return *this;
	}
	
};