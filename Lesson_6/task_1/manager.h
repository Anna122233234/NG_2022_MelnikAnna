#ifndef MANAGER_H
#define MANAGER_H
#include "steelarms.h"
#include "firearms.h"
#include <vector>

class Manager
{
public:
    Manager();
    void addSteelArms(SteelArms steelarm);
    void addFireArms(Firearms firearm);
    void infoSteelArms();
    void infoFireArms();
    void AttackFA();

private:
    vector <SteelArms> steelarms;
    vector <Firearms> firearms;
};

#endif // MANAGER_H
