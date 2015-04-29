#pragma once
#include <iostream>
#include <cstdarg>

namespace Silcoish
{
	template <int SIZEW, int SIZEH, typename T>
	class Matrix2
	{
	public:
		T matrix[SIZEW * SIZEH];
		int w = SIZEW;
		int h = SIZEH;
		int index = 0;

		void Set()
		{
			index = 0;
		}

		template <typename ... Types>
		void Set(T first, Types ... rest)
		{
			matrix[index] = first;
			index++;
			Set(rest...);

		}
	};

	template <int SIZEW, int SIZEH, typename T>
	inline std::ostream &operator << (std::ostream &input, Matrix2<SIZEW, SIZEH, T> &mat)
	{
		for (int j = 0; j < mat.h; j++)
		{
			for (int i = 0; i < mat.w; i++)
			{
				if (j == 0 && i == 0)
					input << "[";
				else if (j != 0 && i == 0)
					input << " ";

				std::cout << mat.matrix[(j * mat.h) + i];

				if (i != mat.w - 1)
					input << ",";
				else
					if (j != mat.h - 1)
						input << std::endl;
			}
		}

		input << "]" << std::endl;

		return input;
	}
}