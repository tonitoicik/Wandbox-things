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
   double mat21[2][2] = 
   {
       { 1, 2},
       { 3, 4}
   };
   double mat22[2][2] =
   {
       { 5, 6},
       { 7, 8}
   };
   double mat31[3][3] =
   {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
   };
   double mat32[3][3] =
   {
        {10, 11, 12},
        {13, 14, 15},
        {16, 17, 18}
   };   
   Matrix2 m2(mat21);
   Matrix3 m3(mat31);
   cout<<"Матрицы получаютсца"<<endl;
   m2.mulR2(mat21);
   cout<<"----------------------------------"<<endl;
   m2.mulL2(mat22);
   cout<<"----------------------------------"<<endl;
   m2.transpose2(mat21);
   cout<<"----------------------------------"<<endl;
   m2.transpose2(mat22);
   cout<<"----------------------------------"<<endl;
   m3.mulR3(mat32);
   cout<<"----------------------------------"<<endl;
   m3.mulL3(mat32);
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
