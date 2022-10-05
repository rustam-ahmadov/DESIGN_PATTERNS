#include <string.h>
#include <iostream>

class Subsystem1
{
public:
    std::string Operation1() const {
        return "Subsystem1: Ready!\n";
    }

    std::string OperationN() const {
        return "Subsystem1: Go!\n";
    }
};