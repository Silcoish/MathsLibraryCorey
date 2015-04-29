#pragma once
#include <iostream>
#include <cmath>

namespace Silcoish
{
	template <typename T>
	class Vector2
	{
	public:
		T x, y;

		inline Vector2()
		{
			x = 0.0f;
			y = 0.0f;
		}

		inline Vector2(T xx)
		{
			x = xx;
			y = 0.0f;
		}

		inline Vector2(T xx, T yy)
		{
			x = xx;
			y = yy;
		}

		float Magnitude()
		{
			return sqrt((x * x) + (y * y));
		}

	};

	template <typename T>
	inline Vector2<T> operator+ (Vector2<T> &lhs, Vector2<T> &rhs)
	{
		lhs.x = lhs.x + rhs.x;
		lhs.y = lhs.y + rhs.y;
		lhs.z = lhs.z + rhs.z;
		return lhs;
	}

	template <typename T>
	inline Vector2<T> operator- (Vector2<T> &lhs, Vector2<T> &rhs)
	{
		lhs.x = lhs.x - rhs.x;
		lhs.y = lhs.y - rhs.y;
		lhs.z = lhs.z - rhs.z;
		return lhs;
	}

	// Dot Product
	template <typename T>
	inline float operator* (Vector2<T> &lhs, Vector2<T> &rhs)
	{
		return lhs.x * rhs.x + lhs.y * rhs.y + lhs.z * rhs.z;
	}

	// Scalar Multiplication
	template <typename T>
	inline Vector2<T> operator* (Vector2<T> &lhs, float scalar)
	{
		lhs.x = lhs.x * scalar;
		lhs.y = lhs.y * scalar;
		lhs.z = lhs.z * scalar;
		return lhs;
	}

	template <typename T>
	inline std::ostream &operator<< (std::ostream &input, Vector2<T> &vector)
	{
		input << "<" << vector.x << "," << vector.y << ">";

		return input;
	}
};