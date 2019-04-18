#include <iostream>

using namespace std;

class Area
{
    public:
        static double CalArea( double a )
        {
            return a*a*a;
            //cube
        }
        static double CalArea( double a, double b )
        {
            return a*b;
            //rectangle
        }
        static int CalArea( int r )
        {
            return 3.14*r*r;
        }
};

main()
{
    cout<<"Area of cube: "<<Area::CalArea( 25.6 )<<endl;
    cout<<"Area of rectangle: "<<Area::CalArea(40,30)<<endl;
    cout<<"Area of circle: "<<Area::CalArea(10)<<endl<<endl;
    
    Area MyArea;
    cout<<"Area of cube: "<<MyArea.CalArea( 25.6 )<<endl;
    cout<<"Area of rectangle: "<<MyArea.CalArea(40,30)<<endl;
    cout<<"Area of circle: "<<MyArea.CalArea(10);
    
    return 0;
}