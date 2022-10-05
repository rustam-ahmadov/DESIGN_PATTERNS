#include <iostream>
#include <algorithm>

class Target
{
public:
    virtual ~Target() = default;
    virtual void printDistance(double miles) const
    {
        std::cout << "Distance in miles:" << miles;
    }
};

class Adaptee
{
public:
    void printDistanceInKm(double km) const
    {
        std::cout << "Distance in km:" << km;
    }
};

class Adapter : public Target
{
    Adaptee *_adaptee;

public:
    Adapter(Adaptee *adaptee) : _adaptee(adaptee){};
    void printDistance(double miles) const override
    {
        const double KM_IN_MILES = 1.6;
        double km = miles * KM_IN_MILES;
        _adaptee->printDistanceInKm(km);
    }
};

void ClientCode(const Target *target, double miles)
{
    target->printDistance(miles);
}

int main(int argc, char **argv)
{
    std::cout << "Client: I can work just fine with the Target objects:\n";
    Target *target = new Target;
    ClientCode(target, 8);

    std::cout << "\n\n";

    std::cout << "Client: But I can work with it via the Adapter:\n";
    Adaptee *adaptee = new Adaptee;
    Adapter *adapter = new Adapter(adaptee);
    ClientCode(adapter, 8);

    std::cout << "\n";

    return 0;
}