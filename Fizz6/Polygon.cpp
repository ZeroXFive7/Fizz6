#include "Polygon.h"

using namespace std;
using namespace DirectX::SimpleMath;

Polygon::Polygon(const vector<Vector3> &vertices)
{
	mType = PrimitiveType::POLYGON;
	mVertices = vertices;
}

Polygon::~Polygon()
{
}