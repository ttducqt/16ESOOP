#include <iostream>

using namespace std;

class cube
{
	private:
		double size;
	
	public:
		cube(double val)
		{
			size = val;
		}
		double getSize()
		{
			return size;
		}
		double getVolume()
		{
			return size * size * size;
		}
};

main()
{
	cube c1(10);
	cout <<"size: " << c1.getSize()<<endl;
	cout <<"Volume: " << c1.getVolume();
}
