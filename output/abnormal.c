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
			uint64_t phi_in5 = phi3;
			if (phi4 < 1)
			{
				break;
			}
			else 
			{
				phi1 = phi4 - 1;
				phi2 = phi_in5;
				if (phi4 == 21)
				{
					break;
				}
			}
		}
		if (arg1 == 10 || phi4 >= 1 && phi4 != 21 && arg1 != 10)
		{
			uint64_t anon8;
			phi4 = phi1;
			uint64_t phi_in6 = phi2;
			do
			{
				uint64_t phi7 = phi_in6;
				phi_in6 = 4;
				anon8 = phi7 * phi4;
				phi3 = anon8;
			}
			while (anon8 == 4);
		}
	}
	return;
}
