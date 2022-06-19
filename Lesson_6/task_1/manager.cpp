#include "manager.h"

Manager::Manager()
{
}

void Manager::addSteelArms(SteelArms steelarm)
{
    steelarms.push_back(steelarm);
}

void Manager::addFireArms(Firearms firearm)
{
    firearms.push_back(firearm);

}

void Manager::infoSteelArms()
{
    for(SteelArms steelarm : steelarms)
    {
        steelarm.getInfo();
    }
}

void Manager::infoFireArms()
{
    for(Firearms firearm : firearms)
    {
        firearm.getInfo();
    }
}

void Manager::AttackFA()
{
    for(Firearms firearm : firearms){
        firearm.getAttack();
    }
}

