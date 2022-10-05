#include <iostream>
#include <string.h>

class Subsystem2
{
public:
    std::string Operation1() const {
        return "Subsystem2 : Get ready!\n";
    }
    std::string OperationZ() const {
        return "Subsystem2 : Fire!\n";
    }
};