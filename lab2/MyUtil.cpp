#include <iostream>
#include <math.h>

using namespace std;

class MyUlti
{   
    public:
        static long factorial( int num )
        {
            long result=1;
            for( int i=2; i<num; i++ )
                result*=i;
            return result;
        }
        static bool isPrime( long num )
        {
            long numSqrt=(long)sqrt(num);
            bool result=true;
            for( int i=2; i<numSqrt; i++ )
                if( num%i == 0)
                    result=false;
            return result;
        }
        static bool isTriangle( double num1, double num2, double num3 )
        {
            return (num1>(num2+num3) && num2>(num1+num3) && num3>(num2+num1) );
        }
};

main()
{
    double a=12, b=2, c=8;

    cout<<"12, 2 and 8 create a triangle is "<<MyUlti::isTriangle( 12,8,6 )<<endl;
    cout<<"The factorial of 6 is "<<MyUlti::factorial( 6 )<<endl;
    cout<<"Saying that 17 is prime number is "<<MyUlti::isPrime( 17 )<<endl;
    
    return 0;
}
