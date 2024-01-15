#include"Route.h"
#include <iostream>


using namespace std;

void ScoreTrip(Route& route, int end)
{
    if (end < 0)
    {
        throw exception("Недопустимая оценка поездки");
    }
    route.end = end;
    cout << "\nУстановлена новая оценка поездки: " << end << endl;
}

int main()
{

    setlocale(LC_ALL, "rus");

    Route trip[5];

    int i;
    int count = 0;
    trip[0] = Route();
    trip[1] = Route(true, 999, 123, 123, true, true, 123);
    trip[2] = Route();


    trip[0].D.SetSalary(10000);
    trip[0].D.GetSalary();

    trip[0].disp.SetId(12345);
    trip[0].disp.Print();

    trip[0].D.Print();
    trip[0].D = GlavDisp(123, 1, 100000);
    trip[1].D = trip[0].D;

    trip[0].road1 = Urban(2.3);
    trip[0].road1.marshrut();

    trip[1].road2 = NotUrban(234.5);
    trip[1].road2.marshrut();
    
    trip[0].cash = Cash<string>("Наличные");
    trip[0].cash.print();
    trip[1].cash = Cash<string>("Перевод");
    trip[1].cash.print();
   
}
