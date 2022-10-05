#include "Subsystem1.h"
#include "Subsystem2.h"

class Facade
{
protected:
    Subsystem1 *_subsystem1;
    Subsystem2 *_subsystem2;

public:
    Facade(Subsystem1 *subsystem1 = nullptr, Subsystem2 *subsystem2 = nullptr)
    {
        _subsystem1 = subsystem1 ? subsystem1 : new Subsystem1();
        _subsystem2 = subsystem2 ?: new Subsystem2;
    }

    ~Facade()
    {
        delete _subsystem1;
        delete _subsystem2;
    }

    std::string Operation()
    {
        std::string result = "Facade initializes subsystems:\n";

        result += _subsystem1->Operation1();
        result += _subsystem2->Operation1();

        result += "Facade orders subsystems to perform the action:\n";

        result += _subsystem1->OperationN();
        result += _subsystem2->OperationZ();

        return result;
    }
};