//-- Halla la distancia entre dos puntos.
//-- Dato de Entrada: x1,y1, x2,y2 (double)
//-- Dato de Salida : distancia (double)

#include "CPunto.h"

int main()
{
  tnumero x1,y1,x2,y2;

  cout << "Punto 1\n";
  cout << "x1 = "; cin >> x1;
  cout << "y1 = "; cin >> y1;
  cout << "Punto 2\n";
  cout << "x2 = "; cin >> x2;
  cout << "y2 = "; cin >> y2;

  CPunto p1(x1,y1);
  CPunto p2(x2,y2);
  cout << "La distancia entre los puntos es  " << p1.distancia(p2);
  cout << "\n=========================================\n";


  /* Ejercicio 1
   * Halla la distancia entre dos puntos, pero esta vez creando los dos puntos de
   * manera dinamica. No olvide liberar el espacio de memoria.
   * /
   */

  return 0;
}