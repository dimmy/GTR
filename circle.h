#include "shape.h"

//
//	Circle Class
//

class Circle: public Shape {

private:
	float m_radius;

public:
	Circle(float radius);

	float area();
	float circumferance();

};
