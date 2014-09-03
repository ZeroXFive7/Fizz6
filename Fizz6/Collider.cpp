#include "Collider.h"


Collider::Collider() :
mCollisionResolutionTable(
	vector<vector<fn>>
	{
		vector<fn>
		{
			PolyPolyCollision,
		},
		vector<fn>
		{

		}
	}
)
{
}


Collider::~Collider()
{
}

bool Collider::PolyPolyCollision(const Primitive &p0, const Primitive &p1)
{

}