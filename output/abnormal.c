#include "tests/bin/abnormal.h"

void func_4001fb(uint64_t arg0, uint64_t arg1)
{
	while (true)
	{
		bool anon5;
		uint64_t phi1 = 10;
		uint64_t phi_in2 = 5;
		uint64_t phi3 = 5;
		phi1 = arg1;
		if (arg1 != 10)
		{
			uint64_t phi_in4 = phi3;
			anon5 = ((uint32_t)(phi1 >> 63) | (__zext uint32_t)(phi1 == 0)) != 0 | phi1 == 21;
			if (anon5)
			{
				break;
			}
			else 
			{
				phi1 = phi1 - 1;
				phi_in2 = phi_in4;
			}
		}
		if (!anon5 && arg1 != 10 || arg1 == 10)
		{
			uint64_t anon7;
			do
			{
				uint64_t phi6 = phi_in2;
				phi_in2 = 4;
				anon7 = phi6 * phi1;
				phi3 = anon7;
			}
			while (anon7 == 4);
		}
	}
	return;
}
