#pragma once

template <typename T >
class Cash {
private:
    T money;
public:
    Cash(){}
    Cash(T money ) : money{ money}
    { }
    void print() 
    {
        std::cout << "������: " <<money  << std::endl;
    }

};