#include "Quadrilateral.h"

using namespace std;
using namespace DirectX::SimpleMath;

Quadrilateral::Quadrilateral(const Vector3 v0, const Vector3 v1, const Vector3 v2, const Vector3 v3) :
	Polygon(vector<Vector3> {v0, v1, v2, v3})
{
}


Quadrilateral::~Quadrilateral()
{
}
