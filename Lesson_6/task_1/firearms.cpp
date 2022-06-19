#include "firearms.h"

Firearms::Firearms()
{
    m_name = "NoName";
    m_damage = 40;
    m_weight = 5.9;
    m_rande = 500;//дальбойность
    m_misfire = 40;//осечка
    m_rapidity = 90;//скорость
    m_manufacturer = "NoManufacurers";//изготовитель
    m_deterioration = 0;
}

void Firearms::getAttack()
{
    bool attack(true);
    while(m_misfire != 1){
        cout <<"Attack?(1/0)";
        cin >>attack;
        if(attack)
        {
            m_misfire *= 0.5;
            m_deterioration -=20;
            cout << "Now your deterioration is :" << m_deterioration << endl;
            cout << "Now your misfire is :" << m_misfire << endl;
        }
        else{
            cout <<"Ok, Enter Button to exit" << endl;
        }
}
        cout << "The " << getName() << " misfired... Try to fix it!" << endl;
        cout << "Do you want to fix it right now? ";
        cin >> attack;
            if(attack)
            {
                 cout << "You fixed " << getName() << endl;
            }
            else
            {
                cout << "You didn`t fix the " << getName() << endl;
            }
        cout << "Press";
}



void Firearms::getInfo()
{
    cout << "FireArms Info:" << endl
         << "   Name: " << getName() << endl
         << "   Damage: " << getDamage() << endl
         << "   Deterioration: " << getDeterioration() << endl
         << "   Weight: " << getWeight() << endl
         << "   Manufacturer: " << getManufacturer() << endl
         << "   Rande: " << getRande() << endl
         << "   Misfire: " << getMisfire() << endl
         << "   Rapidity: " << getRapidity() << endl;

}
