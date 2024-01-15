#pragma once
#include<iostream>
using namespace std;

class Road
{
public:
    virtual double marshrut() const = 0;   // ��� �������
};
class Urban :public Road // ��������� �������
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
        cout << "��� ������� � ����� ������. ����� �������: " << time << endl;
        return 0;
    }
};
class NotUrban : public Road // ������������� �������
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
        cout << "��� ������������� �������. ����������: " << length << endl;
        return 0;
    }
};