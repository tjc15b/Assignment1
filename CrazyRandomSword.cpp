#include "CrazyRandomSword.h"
#include <math.h>

double CrazyRandomSword::hit(double armor){
    double damage = hitPoints - armor;

    double randnum = fmod(rand(),((armor/2) + 1));
    damage += randnum;

    return damage;
}
