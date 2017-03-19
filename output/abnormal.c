#include "tests/bin/abnormal.h"

void func_4001fb(uint64_t arg0, uint64_t arg1)
{
	while (true)
	{
		bool anon7;
		uint64_t phi_in1 = 10;
		uint64_t phi_in2 = 5;
		uint64_t phi_in3 = 5;
		uint64_t phi_in4 = arg1;
		if (arg1 != 10)
		{
			uint64_t phi5 = phi_in3;
			uint64_t phi6 = phi_in4;
			anon7 = ((uint32_t)(phi6 >> 63) | (__zext uint32_t)(phi6 == 0)) != 0 | phi6 == 21;
			if (anon7)
			{
				break;
			}
			else 
			{
				phi_in1 = phi6 - 1;
				phi_in2 = phi5;
			}
		}
		if (!anon7 && arg1 != 10 || arg1 == 10)
		{
			uint64_t anon12;
			uint64_t phi8 = phi_in1;
			uint64_t phi9 = phi_in2;
			uint64_t phi_in10 = phi9;
			do
			{
				uint64_t phi11 = phi_in10;
				phi_in10 = 4;
				anon12 = phi11 * phi8;
				phi_in3 = anon12;
				phi_in4 = phi8;
			}
			while (anon12 == 4);
		}
	}
	return;
}
