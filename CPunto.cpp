//
// Created by Maria Hilda Bermejo
//

#include "CPunto.h"

CPunto::CPunto(CPunto &otroPunto)
{
  x = otroPunto.x;
  y = otroPunto.y;
}

tnumero CPunto::distancia(const CPunto &otroPunto)
{
  return sqrt( pow(otroPunto.x - x,2) + pow( otroPunto.y - y,2));
}