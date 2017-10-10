#include "Weapon.h"
#include <string>
#include <cstdlib>
#include <ctime>

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

class CrazyRandomSword : public Weapon {
public:
  CrazyRandomSword() : Weapon("Crazy random sword", randomNum()){};
  virtual ~CrazyRandomSword(){};
  virtual double hit(double armor);

  double randomNum(){
    srand(time(NULL));
    double randNum = rand()%(100-10 + 1) + 10;
    return randNum;
  }
};

#endif
