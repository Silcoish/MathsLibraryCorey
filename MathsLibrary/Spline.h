#pragma once


namespace Silcoish
{
	inline float SCurve(float x)
	{
		return x * x * (3.0 - 2.0 * x);
	}
};