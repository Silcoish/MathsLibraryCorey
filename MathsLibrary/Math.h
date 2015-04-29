#pragma once

namespace Silcoish
{
	const float PI = 3.14159265359f;

	template <typename T>
	inline T pow(T num, T power)
	{
		float retVal = num;

		for (int i = 1; i < power; i++)
		{
			retVal *= num;
		}

		return retVal;
	}
}
