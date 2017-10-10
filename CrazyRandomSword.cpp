#include "CrazyRandomSword.h"
#include <math.h>

double CrazyRandomSword::hit(double armor){
    double damage = hitPoints - armor;

    double randnum = fmod(rand(),((armor/2) + 1));
    damage += randnum;

    if(damage < 0)
      return 0;

    return damage;
}
