#include "tests/bin/abnormal.h"

void func_4001fb(uint64_t arg0, uint64_t arg1)
{
	while (true)
	{
		bool anon6;
		uint64_t phi1 = 10;
		uint64_t phi_in2 = 5;
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
				phi_in2 = phi_in5;
			}
		}
		if (!anon6 && arg1 != 10 || arg1 == 10)
		{
			uint64_t anon8;
			phi4 = phi1;
			do
			{
				uint64_t phi7 = phi_in2;
				phi_in2 = 4;
				anon8 = phi7 * phi4;
				phi3 = anon8;
			}
			while (anon8 == 4);
		}
	}
	return;
}
