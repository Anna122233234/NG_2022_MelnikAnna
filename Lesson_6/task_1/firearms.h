#ifndef FIREARMS_H
#define FIREARMS_H
#include <string>
#include <iostream>

using namespace std;

class Firearms
{
public:
    Firearms();
    void setName(string name){m_name = name;}
    string getName(){return m_name;}

    void setDamage(int damage){m_damage = damage;}
    int getDamage(){return m_damage;}

    void setWeight(float weight){m_weight = weight;}
    float getWeight(){return m_weight;}

    void setManufacturer(string manufacturer){m_manufacturer = manufacturer;}
    string getManufacturer(){return m_manufacturer;}

    void setRande(float rande){m_rande = rande;}
    float getRande(){return m_rande;}

    void setMisfire(int misfire){m_misfire = misfire;}
    int getMisfire(){return m_misfire;}

    void setRapidity(float rapidity){m_rapidity = rapidity;}
    float getRapidity(){return m_rapidity;}

    void setDeterioration(int deterioration){m_deterioration = deterioration;}
    int getDeterioration(){return m_deterioration;}

    void getAttack();

    void getInfo();

private:
    string m_name;
    int m_damage; //урон
    float m_weight;//вес
    float m_rande;//дальбойность
    int m_misfire;//осечка
    float m_rapidity;//скорость
    string m_manufacturer;//изготовитель
    int m_deterioration;//износ
};

#endif // FIREARMS_H
