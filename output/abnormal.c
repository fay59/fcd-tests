#include "tests/bin/abnormal.h"

void func_4001fb(uint64_t arg0, uint64_t arg1)
{
	while (true)
	{
		bool anon6;
		uint64_t phi1 = 10;
		uint64_t phi2 = 5;
		uint64_t phi3 = 5;
		uint64_t phi4 = arg1;
		if (arg1 != 10)
		{
			uint64_t phi_in5 = phi3;
			anon6 = ((uint32_t)(phi4 >> 63) | (__zext uint32_t)(phi4 == 0)) != 0 | phi4 == 21;
			if (anon6)
			{
				break;
			}
			else 
			{
				phi1 = phi4 - 1;
				phi2 = phi_in5;
			}
		}
		if (!anon6 && arg1 != 10 || arg1 == 10)
		{
			uint64_t anon9;
			phi4 = phi1;
			uint64_t phi_in7 = phi2;
			do
			{
				uint64_t phi8 = phi_in7;
				phi_in7 = 4;
				anon9 = phi8 * phi4;
				phi3 = anon9;
			}
			while (anon9 == 4);
		}
	}
	return;
}
