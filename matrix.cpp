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
void Matrix2::mulR2(double f[2][2])
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
void Matrix2::mulL2(double f[2][2])
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
void Matrix2::transpose2(double f[2][2])
        {
        double result[2][2];
        result[0][0]=f[0][0];
        result[0][1]=f[1][0];
        result[1][0]=f[0][1];
        result[1][1]=f[1][1];
        for (int i=0; i<2; i++)
            {
                for (int j=0; j<2; j++)
                    {
                        std::cout<< result[i][j] << " " ;
                    }
               std::cout<< std::endl;
             }
                
        };    
Matrix3::Matrix3(double a[3][3])
        {
            for (int i=0; i<3; i++)
            {
                for (int j=0; j<3; j++)
                    {
                    _a[i][j]=a[i][j];                    
                    }
            }
        };
void Matrix3::mulR3(double b[3][3])
        {
        double result[3][3];
        result[0][0]=(_a[0][0]*b[0][0])+(_a[0][1]*b[1][0])+(_a[0][2]*b[2][0]);
        result[0][1]=(_a[0][0]*b[0][1])+(_a[0][1]*b[1][1])+(_a[0][2]*b[2][1]);
        result[0][2]=(_a[0][0]*b[0][2])+(_a[0][1]*b[1][2])+(_a[0][2]*b[2][2]);

        result[1][0]=(_a[1][0]*b[0][0])+(_a[1][1]*b[1][0])+(_a[1][2]*b[2][0]);
        result[1][1]=(_a[1][0]*b[0][1])+(_a[1][1]*b[1][1])+(_a[1][2]*b[2][1]);
        result[1][2]=(_a[1][0]*b[0][2])+(_a[1][1]*b[1][2])+(_a[1][2]*b[2][2]);
        
        result[2][0]=(_a[2][0]*b[0][0])+(_a[2][1]*b[1][0])+(_a[2][2]*b[2][0]);
        result[2][1]=(_a[2][0]*b[0][1])+(_a[2][1]*b[1][1])+(_a[2][2]*b[2][1]);
        result[2][2]=(_a[2][0]*b[0][2])+(_a[2][1]*b[1][2])+(_a[2][2]*b[2][2]);
        for (int i=0; i<3; i++)
            {
                for (int j=0; j<3; j++)
                    {
                        std::cout<< result[i][j] << " " ;
                    }
               std::cout<< std::endl;
             }
                
        };          
 void Matrix3::mulL3(double b[3][3])
        {
        double result[3][3];
        result[0][0]=(b[0][0]*_a[0][0])+(b[0][1]*_a[1][0])+(b[0][2]*_a[2][0]);
        result[0][1]=(b[0][0]*_a[0][1])+(b[0][1]*_a[1][1])+(b[0][2]*_a[2][1]);
        result[0][2]=(b[0][0]*_a[0][2])+(b[0][1]*_a[1][2])+(b[0][2]*_a[2][2]);

        result[1][0]=(b[1][0]*_a[0][0])+(b[1][1]*_a[1][0])+(b[1][2]*_a[2][0]);
        result[1][1]=(b[1][0]*_a[0][1])+(b[1][1]*_a[1][1])+(b[1][2]*_a[2][1]);
        result[1][2]=(b[1][0]*_a[0][2])+(b[1][1]*_a[1][2])+(b[1][2]*_a[2][2]);
        
        result[2][0]=(b[2][0]*_a[0][0])+(b[2][1]*_a[1][0])+(b[2][2]*_a[2][0]);
        result[2][1]=(b[2][0]*_a[0][1])+(b[2][1]*_a[1][1])+(b[2][2]*_a[2][1]);
        result[2][2]=(b[2][0]*_a[0][2])+(b[2][1]*_a[1][2])+(b[2][2]*_a[2][2]);
        for (int i=0; i<3; i++)
            {
                for (int j=0; j<3; j++)
                    {
                        std::cout<< result[i][j] << " " ;
                    }
               std::cout<< std::endl;
             }
                
        };        