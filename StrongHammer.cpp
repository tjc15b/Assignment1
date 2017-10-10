#include "StrongHammer.h"


double StrongHammer::hit(double armor){
    double damage = hitPoints - armor;
    hitPoints += hitPoints;   //every time we attack, hitPoints will be doubled
    if(damage < 0)
      return 0;
    return damage;
}
