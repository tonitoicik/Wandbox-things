class Matrix2 {
    private:
        double _m[2][2];
    public:
        Matrix2(double m[2][2]);
        void mulR(double f[2][2]);
        void mulL(double f[2][2]);
        void transpose();
};
