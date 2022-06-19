#include <iostream>
#include "steelarms.h"
#include "firearms.h"
#include "manager.h"

using namespace std;

int main()
{
    Manager Manager;
//SteelArms
    SteelArms Knife;
    Knife.setName("Knife for hunting");
    Knife.setWeight(0.145);
    Knife.setDamage(20);
    Knife.setDeterioration(100);
    Knife.setManufacturer("GrandWay");

//FireArms
    Firearms Machinegun;
    Machinegun.setName("AK - 47");
    Machinegun.setWeight(3.1);
    Machinegun.setDamage(25);
    Machinegun.setDeterioration(100);
    Machinegun.setManufacturer("NoManufactures");
    Machinegun.setMisfire(40);
    Machinegun.setRande(1.000);
    Machinegun.setRapidity(0.600);


    bool n;
    Manager.addSteelArms(Knife);
    Manager.addFireArms(Machinegun);
    cout << "Your current weapons: " << Knife.getName() << "," << Machinegun.getName() << endl;
    cout << "What do you want to use?" << endl <<
            "1 - Knife;            0 - Machine gun;" << endl;
    cin >> n;

    if(n){
            Manager.infoSteelArms();
            cout << "*You attack";
     }
    else{
            Manager.infoFireArms();
            Machinegun.getAttack();
            Manager.AttackFA();
    }
    return 0;
}
