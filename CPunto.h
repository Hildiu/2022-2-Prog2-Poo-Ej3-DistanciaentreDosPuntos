//
// Created by Maria Hilda Bermejo.
//

#ifndef INC_01_PUNTOS_DISTANCIA_CPUNTO_H
#define INC_01_PUNTOS_DISTANCIA_CPUNTO_H

#include <iostream>
#include <cmath>
using namespace std;

using tnumero=double;

class CPunto {
private:
  tnumero x,y;
public:
  CPunto(){x=0; y=0;}
  CPunto(tnumero _x, tnumero _y):x(_x), y(_y){}
  CPunto(CPunto &otroPunto); //--- constructor copia
  virtual ~CPunto() { cout << "\ndestruyendo el objeto ..."; }
  tnumero distancia(const CPunto &otroPunto);
  //--- metodos de acceso
  void setX(tnumero _x) { x = _x;}
  tnumero getX() {return x;}
  void setY(tnumero _y) { y = _y;}
  tnumero getY() { return y;}
};


#endif //INC_01_PUNTOS_DISTANCIA_CPUNTO_H
