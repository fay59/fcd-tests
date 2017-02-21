#include "tests/bin/abnormal.h"

void func_4001fb(uint64_t arg0, uint64_t arg1)
{
	uint64_t phi_in1 = 10;
	uint64_t phi_in2 = 5;
	uint64_t phi_in3 = 5;
	uint64_t phi_in4 = arg1;
	uint32_t dispatch5 = 0;
	dispatch5 = 1;
	while (true)
	{
		uint64_t phi_in10;
		uint64_t phi7;
		uint64_t phi8;
		if (dispatch5 == 0)
		{
			uint64_t phi6 = phi_in3;
			phi7 = phi_in4;
			if (phi7 < 1)
			{
				break;
			}
			else 
			{
				phi_in1 = phi7 - 1;
				phi_in2 = phi6;
				if (phi7 == 21)
				{
					break;
				}
			}
		}
		if (dispatch5 == 1 || phi7 >= 1 && phi7 != 21 && dispatch5 == 0)
		{
			phi8 = phi_in1;
			uint64_t phi9 = phi_in2;
			phi_in10 = phi9;
		}
		if (dispatch5 == 2 || dispatch5 == 1 || phi7 >= 1 && phi7 != 21 && dispatch5 == 0)
		{
			uint64_t phi11 = phi_in10;
			phi_in10 = 4;
			phi_in3 = phi11 * phi8;
			phi_in4 = phi8;
			dispatch5 = 0;
			dispatch5 = 2;
		}
	}
	return;
}
