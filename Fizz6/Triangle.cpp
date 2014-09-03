#include "Triangle.h"

using namespace std;
using namespace DirectX::SimpleMath;

Triangle::Triangle(const Vector3 v0, const Vector3 v1, const Vector3 v2) :
	Polygon(vector<Vector3> {v0, v1, v2})
{
}


Triangle::~Triangle()
{
}
