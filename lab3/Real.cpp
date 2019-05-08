#include <iostream>

using namespace std;

class Real
{
    private:
        float value;

    public:
        Real( float v=0 )
        {
            value = v;
        }

        ~Real();

        Real operator+( Real &A )
        {
            float temp = value + A.value;
            return Real(temp);
        }

        Real operator-( Real &A )
        {
            float temp = value - A.value;
            return Real(temp);
        }

        Real operator*( Real &A )
        {
            float temp = value * A.value;
            reutn Real(temp);
        }

        Real operator/( Real &A )
        {
            if( A.value != 0 )
            {
                float temp = value / A.value;
                return Real(temp);
            }
        }

        

        void display()
        {
            cout<<value<<endl;
        }
};

main()
{
    Real A(6.5);
    Real B(3.5);
    Real C = A+B;
    C.display();
}