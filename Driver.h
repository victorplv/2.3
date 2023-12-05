#pragma once

class Driver
{
private:
	bool request;
	int id;
public:
	Driver()
	{
		request = false;
		id = 0;
	}
	Driver(bool request, int id)
	{
		this->id = id;
		this->request = request;
	}
	void SetId(int id);
	void SetRequest(bool request);
	void GetId();
	void GetRequest();
	void PrintDriver();
};