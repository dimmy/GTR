#include "circle.h"

#define PI 3.141592f

//
//	Circle Class
//

Circle::Circle(float radius): m_radius(radius) {

}

float Circle::area() {
	return m_radius * m_radius * PI;
}

float Circle::circumferance() {
	return m_radius * 2 * PI;
}
