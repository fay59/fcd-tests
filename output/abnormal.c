#include "tests/bin/abnormal.h"

void func_4001fb(uint64_t arg0, uint64_t arg1)
{
	uint64_t phi1 = 10;
	uint64_t phi2 = 5;
	uint64_t phi_in3 = 5;
	uint64_t phi4 = arg1;
	uint32_t dispatch5 = 0;
	dispatch5 = 1;
	while (true)
	{
		uint64_t phi_in6;
		if (dispatch5 == 1)
		{
			if (((uint32_t)(phi4 >> 63) | (__zext uint32_t)(phi4 == 0)) == 0)
			{
				phi1 = phi4 - 1;
				phi2 = phi_in3;
				if (phi4 == 21)
				{
					break;
				}
			}
			else 
			{
				break;
			}
		}
		if (dispatch5 == 0 || phi4 != 21 && dispatch5 == 1 && ((uint32_t)(phi4 >> 63) | (__zext uint32_t)(phi4 == 0)) == 0)
		{
			phi_in6 = phi2;
		}
		if (dispatch5 == 2 || dispatch5 == 0 || phi4 != 21 && dispatch5 == 1 && ((uint32_t)(phi4 >> 63) | (__zext uint32_t)(phi4 == 0)) == 0)
		{
			uint64_t phi7 = phi_in6;
			phi_in6 = 4;
			phi_in3 = phi7 * phi1;
			phi4 = phi1;
			dispatch5 = 1;
			dispatch5 = 2;
		}
	}
	return;
}
