#include "tests/bin/abnormal.h"

void func_4001fb(uint64_t arg0, uint64_t arg1)
{
	while (true)
	{
		uint64_t phi1 = 10;
		uint64_t phi_in2 = 5;
		uint64_t phi3 = 5;
		uint64_t phi4 = arg1;
		if (arg1 != 10)
		{
			uint64_t phi_in5 = phi3;
			if (((uint32_t)(phi4 >> 63) | (__zext uint32_t)(phi4 == 0)) == 0)
			{
				phi1 = phi4 - 1;
				phi_in2 = phi_in5;
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
		if (arg1 == 10 || phi4 != 21 && arg1 != 10 && ((uint32_t)(phi4 >> 63) | (__zext uint32_t)(phi4 == 0)) == 0)
		{
			uint64_t anon7;
			phi4 = phi1;
			do
			{
				uint64_t phi6 = phi_in2;
				phi_in2 = 4;
				anon7 = phi6 * phi4;
				phi3 = anon7;
			}
			while (anon7 == 4);
		}
	}
	return;
}
