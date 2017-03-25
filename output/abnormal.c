#include "tests/bin/abnormal.h"

void func_4001fb(uint64_t arg0, uint64_t arg1)
{
	while (true)
	{
		bool anon5;
		uint64_t phi1 = 10;
		uint64_t phi2 = 5;
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
				phi2 = phi_in4;
			}
		}
		if (!anon5 && arg1 != 10 || arg1 == 10)
		{
			uint64_t anon8;
			uint64_t phi_in6 = phi2;
			do
			{
				uint64_t phi7 = phi_in6;
				phi_in6 = 4;
				anon8 = phi7 * phi1;
				phi3 = anon8;
			}
			while (anon8 == 4);
		}
	}
	return;
}
