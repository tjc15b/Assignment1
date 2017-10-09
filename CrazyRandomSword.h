#include <Weapon.h>
#include <string>
#include <cstdlib>

double randomNum(){
  double randNum = rand()%(100-10 + 1) + 10;
  return randNum;
}

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

class CrazyRandomSword : public Weapon {
public:
  CrazyRandomSword() : Weapon("Crazy random sword", randomNum()){};
  virtual ~CrazyRandomSword(){};
  virtual double hit(double armor);

};

#endif
