#pragma once
#include "t3dvector4.h"

class T3dMatrix4
{
public:
	T3dMatrix4()
	{
		initMembers();
	}
	T3dMatrix4(const float array[16]);
	T3dMatrix4(float a0, float a1, float a2, float a3,//col 1
		float a4, float a5, float a6, float a7,//col2
		float a8, float a9, float a10, float a11,//col3
		float a12, float a13, float a14, float a15//col4
	);
	~T3dMatrix4() {}
	void init(const float array[16]);
	void init(float a0, float a1, float a2, float a3,//col 1
		float a4, float a5, float a6, float a7,//col2
		float a8, float a9, float a10, float a11,//col3
		float a12, float a13, float a14, float a15//col4
	);
	const float* getArray()const { return  m_array; }
	float getAt(int index)const;
	void setAt(int index, float value);
	int getArrayLen()const { return 16; }

	T3dMatrix4 operator*(const T3dMatrix4&mat)const;
	T3dVector4 operator*(const T3dVector4&v)const;
	T3dMatrix4 operator*(float k)const;
	T3dMatrix4 operator+(const T3dMatrix4&mat)const;
private:
	void initMembers();
private:
	float m_array[16];
};