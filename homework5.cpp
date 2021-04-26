#include <iostream>
#include <cmath>

class Vector
{
public:
	Vector() : x(5), y(5), z(5)
	{}
	void showXYZ()
	{
		std::cout << "\n" << x << " " << y << " " << z << "\n";
		lenVector = sqrt(x * x + y * y + z * z);
		std::cout << lenVector;
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

