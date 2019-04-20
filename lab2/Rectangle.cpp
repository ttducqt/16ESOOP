#include <iostream>

using namespace std;

class Rectangle
{
    private:
	    double width, height;
	public:
        Rectangle (double x, double y)
        {
        width=x;
        height=y;
        }
        double perimeter();
        double area();
};

double Rectangle::perimeter()
{
    return 2*(width + height);
}
double Rectangle::area()
{
    return width * height;
}

main()
{
    Rectangle rec1(23,20); 
    Rectangle rec2 (40,50); 
    cout<<"area of rec1 is : "<< rec1.area();
    cout<<"\narea of rec2 is : "<<rec2.area();
    return 0;
}
