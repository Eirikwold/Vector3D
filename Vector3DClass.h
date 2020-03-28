#pragma once
class Vector3DClass
{

public:
	//Constructors and standard functions
	explicit Vector3DClass(float x = 0.0, float y = 0.0, float z = 0.0);
	explicit Vector3DClass(const float coords[3]);
	void OutputToCout() const;
	float Length() const;
	void Normalize();

	//Calculation operations
	Vector3DClass operator+(const Vector3DClass& v) const;
	Vector3DClass operator-(const Vector3DClass& v) const;
	friend Vector3DClass operator*(float scalar, const Vector3DClass& v);
	float operator*(const Vector3DClass& v) const;

	//Getter floatptr
	const float* GetFloatPtr() const;

private:
	float m_x;
	float m_y;
	float m_z;

};

