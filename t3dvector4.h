#pragma once

#include <iostream>
using namespace std;

class T3dVector4
{
public:
	T3dVector4() 
	{
		initMembers();
	}
	T3dVector4(float a0, float a1, float a2, float a3);
	T3dVector4(const float array[4]);
	~T3dVector4() {};
	const float* getArray()const { return m_array; }
	float getAt(int index)const;
	int getArrayLen()const { return 4; }

	T3dVector4 operator +(const T3dVector4&right)const;
	T3dVector4 operator -(const T3dVector4&right)const;
	T3dVector4 operator *(float k)const;
	void init(const float array[4]);
	void init(float a0, float a1, float a2, float a3);
	float x()const { return m_array[0]; }
	float y()const { return m_array[1]; }
	float z()const { return m_array[2]; }
	float w()const { return m_array[3]; }
	float r()const { return m_array[0]; }
	float g()const { return m_array[1]; }
	float b()const { return m_array[2]; }
	float a()const { return m_array[3]; }
	void setx(float x) { m_array[0] = x; }
	void sety(float y) { m_array[1] = y; }
	void setz(float z) { m_array[2] = z; }
	void setw(float w) { m_array[3] = w; }
	void setr(float r) { m_array[0] = r; }
	void setg(float g) { m_array[1] = g; }
	void setb(float b) { m_array[2] = b; }
	void seta(float a) { m_array[3] = a; }
	void persDiv()
	{
		float w = m_array[3];
		if (w == 0) {
			return;
		}
		m_array[0] /= w;
		m_array[1] /= w;
		m_array[2] /= w;
		m_array[3] = 1;
	}

protected:
	void initMembers()
	{
		memset(&m_array, 0, sizeof(m_array));
	}
protected:
	float m_array[4];
};

