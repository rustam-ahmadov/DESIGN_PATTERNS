
#include"Facade.h"



// Facade is a structural design pattern
// that provides a simplified (but limited) interface to
// a complex system of classes, library or framework.


void ClientCode(Facade *facade)
{
    std::cout<<facade->Operation();
}



int main(int argc, char **argv)
{
    Facade *facade = new Facade();
    ClientCode(facade);

    return 0;
}