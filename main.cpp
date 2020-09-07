#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
#include "point.h"
#include "vector.h"
#include "matrix.h"

using namespace std;
int main()
{
   double mat1[2][2] = 
   {
       { 1, 2},
       { 3, 4}
   };
   double mat2[2][2] =
   {
       { 5, 6},
       { 7, 8}
   };
   Matrix2 m(mat1);
   cout<<"Матрица получаетсца"<<endl;
   m.mulR(mat2);
   cout<<"----------------------------------"<<endl;
   Point p(4.2, 8.8); 
   Vector v(2 , 2);
   cout << "Координата х = " << v.getX() << endl << "Координата y = " << v.getY() << endl << "Координаты вектора ="; 
   v.getCoords();
   cout << "Угол наклона = " << v.getAngle() << endl;
   cout <<"Четверть: ";
   v.getSqare();
   cout <<endl <<"Координаты точки ("<< p.getX() << ", " << p.getY() << ")"<<endl;
   return 0;
}
