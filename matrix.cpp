#include <iostream>
#include "matrix.h"
Matrix2::Matrix2(double m[2][2])
        {
            for (int i=0; i<2; i++)
            {
                for (int j=0; j<2; j++)
                    {
                    _m[i][j]=m[i][j];
                    }
            }
        };
void Matrix2::mulR(double f[2][2])
        {
        double result[2][2];
        result[0][0]=(_m[0][0]*f[0][0])+(_m[0][1]*f[1][0]);
        result[0][1]=(_m[0][0]*f[0][1])+(_m[0][1]*f[1][1]);
        result[1][0]=(_m[1][0]*f[0][0])+(_m[1][1]*f[1][0]);
        result[1][1]=(_m[1][0]*f[0][1])+(_m[1][1]*f[1][1]);
        for (int i=0; i<2; i++)
            {
                for (int j=0; j<2; j++)
                    {
                        std::cout<< result[i][j] << " " ;
                    }
               std::cout<< std::endl;
             }
                
        };
void Matrix2::mulL(double f[2][2])
        {
        double result[2][2];
        result[0][0]=(_m[0][0]*f[0][0])+(_m[1][0]*f[0][1]);
        result[0][1]=(_m[0][1]*f[0][0])+(_m[1][1]*f[0][1]);
        result[1][0]=(_m[0][0]*f[1][0])+(_m[1][0]*f[1][1]);
        result[1][1]=(_m[0][1]*f[1][0])+(_m[1][1]*f[1][1]);
        for (int i=0; i<2; i++)
            {
                for (int j=0; j<2; j++)
                    {
                        std::cout<< result[i][j] << " " ;
                    }
               std::cout<< std::endl;
             }
                
        };    
