#pragma once
#include<iostream>
using namespace std;

class Road
{
public:
    virtual double marshrut() const = 0;   // Вид поездки
};
class Urban :public Road // Городская поездка
{
private:
    double time;
public:
    Urban()
    {}
    Urban(double t) :time(t) 
    {    }
    double marshrut() const override
    {
        cout << "Это поездка в черте города. Время поездки: " << time << endl;
        return 0;
    }
};
class NotUrban : public Road // Междугородняя поездка
{
private:
    double length;
public:
    NotUrban()
    {}
    NotUrban(double l): length(l)
    {}
    double marshrut() const override
    {
        cout << "Это междугородняя поездка. Расстояние: " << length << endl;
        return 0;
    }
};