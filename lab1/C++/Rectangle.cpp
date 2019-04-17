#include <iostream>

using namespace std;
class Rectangle
{
	private:	
		double width, height;

	public:
		void input(double x, double y)
		{
			width =x;
			height =y;
		}
		double area()
		{
			return width * height;
		}
};       

main()
{
	Rectangle rec1; 
	Rectangle rec2; 
	rec1.input(23, 20);
	rec2.input(40,50);
	cout<<"area of rec1 is : "<< rec1.area();
	cout<<"\narea of rec2 is : "<<rec2.area();
}
