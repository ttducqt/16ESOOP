#include <iostream>

using namespace std;

class Area
{
    public:
        static int cnt;
        
        Area()
        {
            cnt++;
        }
        
        int getNumOfObj()
        {
            return Area::cnt;
        }
        
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

int Area::cnt = 0;

main()
{
    cout<<"Area of cube: "<<Area::CalArea( 25.6 )<<endl;
    cout<<"Area of rectangle: "<<Area::CalArea(40,30)<<endl;
    cout<<"Area of circle: "<<Area::CalArea(10)<<endl<<endl;
    
    Area MyArea, MyArea1, MyArea2;
    cout<<"Area of cube: "<<MyArea.CalArea( 25.6 )<<endl;
    cout<<"Area of rectangle: "<<MyArea.CalArea(40,30)<<endl;
    cout<<"Area of circle: "<<MyArea.CalArea(10)<<endl;
    cout<<"Number of object have been called :"<<MyArea.getNumOfObj()<<endl;
    
    
    
    return 0;
}
