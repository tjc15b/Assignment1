#include <Weapon.h>
#include <string>

#ifndef STRONGHAMMER_H
#define STRONGHAMMER_H

class StrongHammer : public Weapon {
public:

  StrongHammer() : Weapon("Strong hammer", 10.0){};
  virtual ~StrongHammer(){};
  virtual double hit(double armor);

};

#endif
