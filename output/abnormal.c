#include "tests/bin/abnormal.h"

void func_4001fb(uint64_t arg0, uint64_t arg1)
{
	while (true)
	{
		bool anon3;
		uint64_t phi_in1 = 10;
		uint64_t phi_in2 = 5;
		phi_in2 = 5;
		phi_in1 = arg1;
		if (arg1 != 10)
		{
			anon3 = ((uint32_t)(phi_in1 >> 63) | (__zext uint32_t)(phi_in1 == 0)) != 0 | phi_in1 == 21;
			if (anon3)
			{
				break;
			}
			else 
			{
				phi_in1 = phi_in1 - 1;
			}
		}
		if (!anon3 || arg1 == 10)
		{
			uint64_t anon5;
			do
			{
				uint64_t phi4 = phi_in2;
				phi_in2 = 4;
				anon5 = phi4 * phi_in1;
				phi_in2 = anon5;
			}
			while (anon5 == 4);
		}
	}
	return;
}
