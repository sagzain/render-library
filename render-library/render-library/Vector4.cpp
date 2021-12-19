#include "Vector4.h"

template <typename T>
Vector4<T>::Vector4(T x, T y, T z, T w)
{
	this->x = x;
	this->y = y;
	this->z = z;
	this->w = w;
}

template <typename T>
T Vector4<T>::X()
{
	return x;
}

template <typename T>
T Vector4<T>::Y()
{
	return y;
}

template <typename T>
T Vector4<T>::Z()
{
	return z;
}

template <typename T>
T Vector4<T>::W()
{
	return w;
}

template <typename T>
Vector4<T> operator+(Vector4<T> v1, Vector4<T> v2)
{
	T x = v1.x() + v2.x();
	T y = v1.y() + v2.y();
	T z = v1.z() + v2.z();
	T w = v1.w() + v2.w();

	return Vector4<T>(x, y, z, w);
}

template <typename T>
Vector4<T>  operator-(Vector4<T> v1, Vector4<T> v2)
{
	T x = v1.x() - v2.x();
	T y = v1.y() - v2.y();
	T z = v1.z() - v2.z();
	T w = v1.w() - v2.w();

	return Vector4<T>(x, y, z, w);
}

template <typename T>
Vector4<T>  operator*(Vector4<T> v, T s)
{
	T x = v1.x() * s;
	T y = v1.y() * s;
	T z = v1.z() * s;
	T w = v1.w() * s;

	return Vector4<T>(x, y, z, w);
}

template <typename T>
Vector4<T> Vector4<T>::cross(Vector4<T> v1, Vector4<T> v2)
{
	T x = v1.y() * v2.z() - v2.y() * v1.z();
	T y = v1.x() * v2.y() - v2.x() * v1.y();
	T z = v1.z() * v2.x() - v2.z() * v1.x();

	return Vector4<T>(x, y, z, (T)1);
}

template <typename T>
T Vector4<T>::dot(Vector4<T> v1, Vector4<T> v2)
{
	T x = v1.x() * v2.x();
	T y = v1.y() * v2.y();
	T z = v1.z() * v2.z();
	T w = v1.w() * v2.w();

	return x + y + z + w;
}