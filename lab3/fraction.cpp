#include <iostream>
#include "fraction.h"

using namespace std;

fraction::fraction( int n=0, int d=1 )
{
    numerator = n;
    dinominator = d;
}

fraction::fraction( const fraction &A )
{
    numerator = A.numerator;
    dinominator = A.dinominator;
}

fraction::fraction operator+( fraction &A )
{
    numerator = numerator + A.numerator;
    dinominator = dinominator + A.dinominator;
}

fraction::fraction operator-( fraction &A )
{
    numerator = numerator - A.numerator;
    dinominator = dinominator - A.dinominator;
}

int fraction::operator==( fraction &A )
{
    if( (numerator == A.numerator) && (dinominator == A.dinominator) )
        return 1;
    return 0;
}

fraction operator*( fraction &A )
{
    numerator *= A.numerator;
    dinominator *= A.dinominator;
}

void display()
{
    cout<<"numerator = "<<numerator<<endl;
    cout<<"dinominator = "<<dinominator<<endl;
}


main()
{

}
