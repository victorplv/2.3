#include"Route.h"
#include <iostream>

using namespace std;

int main()
{

    setlocale(LC_ALL, "rus");

    Route* trip = new Route[3];
    
    trip[0] = Route();
    trip[1] = Route(true, 999, 123, 123, true, true, 123);

    cout << "первая поездка" << endl;
    trip[0].Print();
    cout << "вторая поездка" << endl;
    trip[1].Print();












    cout << "Пожалуйста, примите лабораторную!\n";

}
