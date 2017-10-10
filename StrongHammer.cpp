#include "StrongHammer.h"


double StrongHammer::hit(double armor){
    double damage = hitPoints - armor;
    if(damage < 0){
        return 0;
    }
    hitPoints += hitPoints;   //every time we attack, hitPoints will be doubled
    return damage;
}
