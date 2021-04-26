#include <iostream>
#include <cmath>

class Vector
{
public:
	
	Vector() : x(5), y(5), z(5)
	{}
	void showXYZ()
	{
		std::cout << "\n Enter X: ";
		std::cin >> x;

		std::cout << "\n Enter Y: ";
		std::cin >> y;

		std::cout << "\n Enter Z: ";
		std::cin >> z;

		std::cout << "\n" << "x = "  <<  x << " " << "y = " << y << " " << "z = " << z << "\n";
		lenVector = sqrt(x * x + y * y + z * z);
		std::cout << "\n" << "vector length ="<< lenVector;
		
	}
private:
	double x;
	double y;
	double z;
	double  lenVector;
};

int main()
{
	Vector v;
	
	v.showXYZ();
	
}

