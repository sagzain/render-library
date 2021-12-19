#pragma once

template <typename T>
class Vector4
{
private:
	T x;
	T y;
	T z;
	T w;

public:
	Vector4(T, T, T, T);

	// Getters & Setters
	T X();
	T Y();
	T Z();
	T W();

	//Operations
	Vector4<T> cross(Vector4<T>, Vector4<T>);
	T dot(Vector4<T>, Vector4<T>);
};


