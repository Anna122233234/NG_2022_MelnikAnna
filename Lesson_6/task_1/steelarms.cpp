#include "steelarms.h"

SteelArms::SteelArms()
{
    m_name = "NoName";
    m_damage = 10;
    m_manufacturer = "NoManufacurers";
    m_weight = 0.250;
    m_deterioration = 10;
}

void SteelArms::setDamage(int damage)
{
    if(damage < 0)
    {
        cout << "The damage can`t be lower 0" << endl;
        return ;
    }
    m_damage = damage;
}


void SteelArms::getInfo()
{
    cout << "SteelArms Info:" << endl
         << "   Name: " << getName() << endl
         << "   Damage: " << getDamage() << endl
         << "   Deterioration: " << getDeterioration() << endl
         << "   Weight: " << getWeight() << endl
         << "   Manufacturer: " << getManufacturer() << endl;
}




