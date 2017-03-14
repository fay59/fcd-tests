#include "tests/bin/abnormal.h"

void func_4001fb(uint64_t arg0, uint64_t arg1)
{
	while (true)
	{
		uint64_t phi1 = 10;
		uint64_t phi2 = 5;
		uint64_t phi3 = 5;
		uint64_t phi4 = arg1;
		if (arg1 != 10)
		{
			phi2 = phi3;
			if (phi4 < 1)
			{
				break;
			}
			else 
			{
				phi1 = phi4 - 1;
				if (phi4 == 21)
				{
					break;
				}
			}
		}
		if (arg1 == 10 || phi4 >= 1 && phi4 != 21 && arg1 != 10)
		{
			uint64_t anon7;
			phi4 = phi1;
			uint64_t phi_in5 = phi2;
			do
			{
				uint64_t phi6 = phi_in5;
				phi_in5 = 4;
				anon7 = phi6 * phi4;
				phi3 = anon7;
			}
			while (anon7 == 4);
		}
	}
	return;
}
