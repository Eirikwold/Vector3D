#include "Vector3DClass.h"

#include <iostream> //lets us use cin, cout
#include <cmath> // Lets us use math functions: sqrtf, pow.


Vector3DClass::Vector3DClass(float x, float y, float z) :
	m_x(x), m_y(y), m_z(z) {
	
}

Vector3DClass::Vector3DClass(const float coords[3]) :
	Vector3DClass(coords[0], coords[1], coords[2]) {
	//Delegating constructors from C++11 ?
}

// Prints on form: "(x,y,z)"
void Vector3DClass::OutputToCout() const {
	std::cout << "(" << m_x << ", " << m_y << ", " << m_z << ")";
}


float Vector3DClass::Length() const {
	//return sqrtf(pow(m_x, 2) + pow(m_y, 2) + pow(m_z, 2));

	return std::sqrtf((m_x * m_x) + (m_y * m_y) + (m_z * m_z)); // x, y, and z to the power of 2 (pow())
}


//Sets vector length to 1
void Vector3DClass::Normalize() {
	float length = Length();
	m_x /= length;
	m_y /= length;
	m_z /= length;
}

//Dotproduct
float Vector3DClass::operator*(const Vector3DClass& v) const {

	return (m_x * v.m_x) + (m_y * v.m_y) + (m_z * v.m_z);

}

//Float pointer
const float* Vector3DClass::GetFloatPtr() const {
	return &m_x;
}


//CALCULATION

//Addition
Vector3DClass Vector3DClass::operator+(const Vector3DClass& v) const {
	
	Vector3DClass result(m_x + v.m_x, m_y + v.m_y, m_z + v.m_z);
	return result;
}

//Subtraction
Vector3DClass Vector3DClass::operator-(const Vector3DClass& v) const {

	Vector3DClass result(m_x - v.m_x, m_y - v.m_y, m_z - v.m_z);
	return result;
}


Vector3DClass operator*(float scalar, const Vector3DClass& v)
{
	Vector3DClass result(v.m_x * scalar, v.m_y * scalar, v.m_z * scalar);
	return result;
}

std::istream& operator>>(std::istream& inStream, Vector3DClass& v)
{

	std::cout << "Enter x: ";
	inStream >> v.m_x;
	std::cout << "Enter y: ";
	inStream >> v.m_y;
	std::cout << "Enter z: ";
	inStream >> v.m_z;
	return inStream;

}

std::ostream& operator<<(std::ostream& outStream, const Vector3DClass& v)
{
	outStream << "(" << v.m_x << ", " << v.m_y << ", " << v.m_z << ")";
	return outStream;
}

//Array
Vector3DClass:: operator const float *() const {
	return &m_x;
}
