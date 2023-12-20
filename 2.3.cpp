#include"Route.h"
#include <iostream>

using namespace std;

void ScoreTrip(Route& route, int end)
{
    route.end = end;
    cout << "\nУстановлена новая оценка поездки: " << end << endl;
}

int main()
{

    setlocale(LC_ALL, "rus");

    Route trip[5];
    
    int i;
    int count=0;
    trip[0] = Route();
    trip[1] = Route(true, 999, 123, 123, true, true, 123);
    trip[2] = Route();
     

    ScoreTrip(trip[1], 5);
    trip[1].GetEnd();
    trip[2].SetEnd(10);
    trip[3] = trip[1] + trip[2];
    trip[3].GetEnd();
    trip[3]++;
    trip[3].GetEnd();

    trip[0].avto.card.SetMark("лада");
    trip[1].avto.card.SetMark("лада");
    trip[2].avto.card.SetMark("бмв");

    for (i = 0; i < 4; i++)
    {
        if (trip[i].avto.card.Poisk().find("лада")) count++;
    }
    cout << "Кол-во автомобилей марки 'Лада': " << count << endl;
    
   
}
