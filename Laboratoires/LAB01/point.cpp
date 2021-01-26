
//2021-01-20
//
/************************************************
  Laboratoire 1
  INF3105 | Structures de données et algorithmes
  UQAM | Département d'informatique
  Source: http://ericbeaudry.ca/INF3105/lab1/
  
INSTRUCTIONS:
  Vous devez compléter ce fichier.
*************************************************/

#include <assert.h>
#include <math.h>
#include "point.h"

Point::Point(const Point& point)
  : x(point.x), y(point.y) 
{
}

Point::Point(double _x, double _y) 
  : x(_x), y(_y)
{
}


double Point::distance(const Point& point) const {
  double dx = point.x - x;
  double dy = point.y - y;
  return sqrt(pow(dx,2) + pow(dy,2));
}


std::ostream& operator << (std::ostream& os, const Point& point) {
  os << "(" << point.x << "," << point.y << ")";
  return os;
}

std::istream& operator >> (std::istream& is, Point& point) {
  char po, vir, pf;
  is >> po;
  if(is){
    is >> point.x >> vir >> point.y >> pf;
    assert(po=='(');
    assert(vir==',');
    assert(pf==')');
  }
  return is;
}


