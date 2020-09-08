class Matrix2 {
    private:
        double _m[2][2];
    public:
        Matrix2(double m[2][2]);
          void mulR2(double f[2][2]);
          void mulL2(double f[2][2]);
          void transpose2(double f[2][2]);
};
class Matrix3{
    private:
        double _a[3][3];
    public:
        Matrix3(double a[3][3]);
          void mulL3(double b[3][3]);
          void mulR3(double b[3][3]);
          void transpose3(double b[3][3]);
};