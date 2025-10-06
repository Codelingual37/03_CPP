#include <iostream>
using namespace std;

class Rational
{
    private:
        int p;
        int q;
    
    public:
        void    setNum(int p);
        Rational();
        Rational(int p);
        Rational    operator+(Rational r)
        {
            Rational den;
            den.p = p;
            if (r.p > 0)
                den.q = r.p;
            return (den);
        }
        friend ostream  &operator<<(ostream &out, Rational r1);
};

void    Rational::setNum(int num)
        {
            p = num;
        }

Rational::Rational()
{
    this->p = p;
    this->q = q;
}

Rational::Rational(int p)
{
    setNum(p);
}

ostream &operator<<(ostream &out, Rational r1)
{
    out<<"The rational number is: "<<r1.p<<"/"<<r1.q<<endl;
    return (out);
}

int main()
{
    int num;
    int den;

    cout<<"Set a numerator: ";
    cin>>num;
    cout<<"Set a demoninator: ";
    cin>>den;

    Rational r1(num);
    Rational r2(den);
    r1 = r1+r2;
    cout<<r1;
}

