#pragma once
#include <iostream>
#include <cmath>

namespace Silcoish
{
	template <typename T>
	class Vector3
	{
	public:
		T x, y, z;

		inline Vector3()
		{
			x = 0.0f;
			y = 0.0f;
			z = 0.0f;
		}

		inline Vector3(T xx)
		{
			x = xx;
			y = 0.0f;
			z = 0.0f;
		}

		inline Vector3(T xx, T yy)
		{
			x = xx;
			y = yy;
			z = 0.0f;
		}

		inline Vector3(T xx, T yy, T zz)
		{
			x = xx;
			y = yy;
			z = zz;
		}

		~Vector3(){};

		float Magnitude()
		{
			return sqrt((x * x) + (y * y) + (z * z));
		}

	};

	template <typename T>
	inline Vector3<T> operator+ (Vector3<T> &lhs, Vector3<T> &rhs)
	{
		lhs.x = lhs.x + rhs.x;
		lhs.y = lhs.y + rhs.y;
		lhs.z = lhs.z + rhs.z;
		return lhs;
	}

	template <typename T>
	inline Vector3<T> operator- (Vector3<T> &lhs, Vector3<T> &rhs)
	{
		lhs.x = lhs.x - rhs.x;
		lhs.y = lhs.y - rhs.y;
		lhs.z = lhs.z - rhs.z;
		return lhs;
	}

	// Dot Product
	template <typename T>
	inline float operator* (Vector3<T> &lhs, Vector3<T> &rhs)
	{
		return lhs.x * rhs.x + lhs.y * rhs.y + lhs.z * rhs.z;
	}

	// Scalar Multiplication
	template <typename T>
	inline Vector3<T> operator* (Vector3<T> &lhs, float scalar)
	{
		lhs.x = lhs.x * scalar;
		lhs.y = lhs.y * scalar;
		lhs.z = lhs.z * scalar;
		return lhs;
	}

	template <typename T>
	inline std::ostream &operator<< (std::ostream &input, Vector3<T> &vector)
	{
		input << "<" << vector.x << "," << vector.y << "," << vector.z << ">";

		return input;
	}
};