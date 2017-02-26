#include "tests/bin/abnormal.h"

void func_4001fb(uint64_t arg0, uint64_t arg1)
{
	uint64_t phi1 = 10;
	uint64_t phi2 = 5;
	uint64_t phi3 = 5;
	uint64_t phi4 = arg1;
	uint32_t dispatch5 = 0;
	dispatch5 = 1;
	while (true)
	{
		uint64_t phi_in7;
		if (dispatch5 == 1)
		{
			uint64_t phi_in6 = phi3;
			if (((uint32_t)(phi4 >> 63) | (__zext uint32_t)(phi4 == 0)) == 0)
			{
				phi1 = phi4 - 1;
				phi2 = phi_in6;
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
			phi_in7 = phi2;
		}
		if (dispatch5 == 2 || dispatch5 == 0 || phi4 != 21 && dispatch5 == 1 && ((uint32_t)(phi4 >> 63) | (__zext uint32_t)(phi4 == 0)) == 0)
		{
			uint64_t phi8 = phi_in7;
			phi_in7 = 4;
			phi3 = phi8 * phi1;
			phi4 = phi1;
			dispatch5 = 1;
			dispatch5 = 2;
		}
	}
	return;
}
