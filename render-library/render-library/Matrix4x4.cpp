#include "Matrix4x4.h"

template <typename T>
Matrix4x4<T>::Matrix4x4(Vector4<T> v1, Vector4<T> v2, Vector4<T> v3, Vector4<T> v4)
{
	matrix[0] = v1;
	matrix[1] = v2;
	matrix[2] = v3;
	matrix[3] = v4;
}

template <typename T>
Matrix4x4<T> Matrix4x4<T>::identity()
{
	Vector4<T> v1 = Vector4(1, 0, 0, 0);
	Vector4<T> v2 = Vector4(0, 1, 0, 0);
	Vector4<T> v3 = Vector4(0, 0, 1, 0);
	Vector4<T> v4 = Vector4(0, 0, 0, 1);

	return Matrix4x4(v1, v2, v3, v4);
}

template <typename T>
Matrix4x4<T> Matrix4x4<T>::zero()
{
	Vector4<T> v1 = Vector4(0, 0, 0, 0);
	Vector4<T> v2 = Vector4(0, 0, 0, 0);
	Vector4<T> v3 = Vector4(0, 0, 0, 0);
	Vector4<T> v4 = Vector4(0, 0, 0, 0);

	return Matrix4x4(v1, v2, v3, v4);
}

template <typename T>
Matrix4x4<T> Matrix4x4<T>::cross(Matrix4x4<T> m1, Matrix4x4<T> m2)
{

}


template<typename T>
Matrix4x4<T> operator+(Matrix4x4<T> m1, Matrix4x4<T> m2)
{
	Vector4<T> v1 = m1.matrix[0] + m2.matrix[0];
	Vector4<T> v2 = m1.matrix[1] + m2.matrix[1];
	Vector4<T> v3 = m1.matrix[2] + m2.matrix[2];
	Vector4<T> v4 = m1.matrix[3] + m2.matrix[3];

	return Matrix4x4(v1, v2, v3, v4);
}

template<typename T>
Matrix4x4<T> operator-(Matrix4x4<T> m1, Matrix4x4<T> m2)
{
	Vector4<T> v1 = m1.matrix[0] - m2.matrix[0];
	Vector4<T> v2 = m1.matrix[1] - m2.matrix[1];
	Vector4<T> v3 = m1.matrix[2] - m2.matrix[2];
	Vector4<T> v4 = m1.matrix[3] - m2.matrix[3];

	return Matrix4x4(v1, v2, v3, v4);
}

template<typename T>
Matrix4x4<T> operator*(Matrix4x4<T> m1, Matrix4x4<T> m2)
{

}

template<typename T>
Vector4<T> operator*(Matrix4x4<T> m, Vector4<T> v)
{

}

template<typename T>
Matrix4x4<T> operator*(Matrix4x4<T> m, T s)
{
	
}

template<typename T>
Matrix4x4<T> operator/(Matrix4x4<T> m1, Matrix4x4<T> m2)
{

}
