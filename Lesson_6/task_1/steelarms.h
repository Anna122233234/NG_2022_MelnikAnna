#ifndef STEELARMS_H
#define STEELARMS_H
#include <string>
#include <iostream>

using namespace std;

class SteelArms
{
public:
    SteelArms();
    void setName(string name){m_name = name;}
    string getName(){return m_name;}

    void setDamage(int damage);
    int getDamage(){return m_damage;}

    void setWeight(float weight){m_weight = weight;}
    float getWeight(){return m_weight;}

    void setManufacturer(string manufacturer){m_manufacturer = manufacturer;}
    string getManufacturer(){return m_manufacturer;}

    void setDeterioration(int deterioration){m_deterioration  = deterioration;}
    int getDeterioration(){return m_deterioration;}

    void getInfo();

private:
    string m_name;
    int m_damage; //урон
    float m_weight;//вес
    string m_manufacturer;//изготовитель
    int m_deterioration;//износ
};

#endif // STEELARMS_H
