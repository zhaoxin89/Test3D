#include "stdafx.h"
#include "t3dvector4.h"
#include <assert.h>


T3dVector4::T3dVector4(float a0, float a1, float a2, float a3) 
{
	initMembers();
	init(a0, a1, a2, a3);
}
T3dVector4::T3dVector4(const float array[4]) 
{
	initMembers();
	init(array);
}
float T3dVector4::getAt(int index)const 
{
	assert(index >= 0 && index <= 3);
	return m_array[index];
}
T3dVector4 T3dVector4::operator +(const T3dVector4&right)const 
{
	T3dVector4 rs(this->x() + right.x(), this->y() + right.y(), this->z() + right.z(), this->w() + right.w());
	return rs;
}
T3dVector4 T3dVector4::operator -(const T3dVector4&right)const 
{
	T3dVector4 rs(this->x() - right.x(), this->y() - right.y(), this->z() - right.z(), this->w() - right.w());
	return rs;
}
T3dVector4 T3dVector4::operator *(float k)const 
{
	T3dVector4 rs(this->x()*k, this->y()*k, this->z()*k, this->w()*k);
	return rs;
}
void T3dVector4::init(const float array[4]) 
{
	for (int i = 0; i<4; i++) 
	{
		m_array[i] = array[i];
	}
}
void T3dVector4::init(float a0, float a1, float a2, float a3) 
{
	m_array[0] = a0;
	m_array[1] = a1;
	m_array[2] = a2;
	m_array[3] = a3;
}

