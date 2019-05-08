#include <iostream>

using namespace std;

class complex
{
    private:
        float real;
        float image;

    public:
        complex( float r=0, float i=0 )
        {
            real = r;
            image = i;
        }

        complex( const complex &A )
        {
            real = A.real;
            image = A.image;
        }

        complex operator+( complex &A )
        {
            real = real + A.real;
            image = image + A.image;
        }

        complex operator-( complex &A )
        {
            real = real - A.real;
            image = image - A.image;
        }

        int operator==( complex &A )
        {
            if( (real == A.real) && (image == A.image) )
                return 1;
            return 0;
        }

        complex operator*( complex &A )
        {
            real *= A.real;
            image *= A.image;
        }

        void display()
        {
            cout<<"real = "<<real<<endl;
            cout<<"image = "<<image<<endl;
        }
};