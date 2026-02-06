class complex {
    double re, im;
    public:
        complex(double r, double i): re{r}, im{i} {} // construct complex for two scalars
        complex(double r) : re{r}, im{0} {} // construct complex for one scalar
        complex() : re{0}, im{0} {} //default complex


        double real() const { return re;}
        void real(double d) { re = d;}
        double imag() const {return im;}
        void imag(double d) { im = d;}

        complex& operator+=(const complex& z) { re+=z.re, im+=z.im; return *this;}
        complex& operator*=(complex);
        complex& operator/=(complex);

        complex operator+(complex a) {return complex(*this)+=a;}
        complex operator/(complex a) {return complex(*this)/=a;}

        bool operator==(const complex& b) const
        {
            return re==b.re && im==b.im;
        }
};

complex operator/(complex a, complex b) { return a/= b;}

void f(complex z)
{
    complex a {2.3};
    complex b {1/a};
}