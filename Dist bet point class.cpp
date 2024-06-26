#include<iostream>
#include<math.h>
using namespace std;
class point
{
	int X,Y;
public:
	point() : X(0),Y(0) {}
	point(int a,int b) : X(a),Y(b) {}
	float operator - (point n2)
	{
		float dist;
		dist = sqrt( ((X-n2.X)*(X-n2.X)) + ((Y-n2.Y)*(Y-n2.Y)) );
		return dist;
	}
};
int main()
{
	point n1(2,3),n2(4,5);
	int dist= n1-n2;
	cout<<"Distance between points = "<<dist;
	return 0;
}

