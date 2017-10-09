#include "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor){
    double damage = hitPoints - armor;

    int randNum = rand()%((armor/2) + 1);
    damage += randNum;

    return damage;
}
