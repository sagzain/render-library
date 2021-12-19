#pragma once
#include "Vector4.h"

template <typename T>
class Matrix4x4
{
private:
	Vector4<T> matrix[4];
public:
	

	Matrix4x4(Vector4<T>, Vector4<T>, Vector4<T>, Vector4<T>);

	Matrix4x4<T> identity();
	Matrix4x4<T> zero();
};

